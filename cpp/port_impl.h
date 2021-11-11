#ifndef PORT_H
#define PORT_H

#include <boost/thread/locks.hpp>
#include <ossie/Port_impl.h>
#include <ossie/debug.h>
#include <PACKET/PacketFlowControl.h>
#include <MHAL/MhalDevice.h>
#include <vector>
#include <utility>
#include <ossie/CF/QueryablePort.h>

class MhalComponent_base;
class MhalComponent_i;

#define CORBA_MAX_TRANSFER_BYTES omniORB::giopMaxMsgSize()

// ----------------------------------------------------------------------------------------
// Packet_FlowUshortStream_In_i declaration
// ----------------------------------------------------------------------------------------
class Packet_FlowUshortStream_In_i : public POA_Packet::FlowUshortStream, public Port_Provides_base_impl
{
    public:
        Packet_FlowUshortStream_In_i(std::string port_name, MhalComponent_base *_parent);
        ~Packet_FlowUshortStream_In_i();

        CORBA::ULong getMaxPayloadSize();
        CORBA::ULong getMinPayloadSize();
        CORBA::ULong getDesiredPayloadSize();
        CORBA::ULong getMinOverrideTimeout();
        CORBA::Boolean pushPacket(const Packet::StreamControlType& control, const JTRS::UshortSequence& payload);
        std::string getRepid() const;

    protected:
        MhalComponent_i *parent;
        boost::mutex portAccess;
};
// ----------------------------------------------------------------------------------------
// MHAL_MHALPacketConsumer_In_i declaration
// ----------------------------------------------------------------------------------------
class MHAL_MHALPacketConsumer_In_i : public POA_MHAL::MHALPacketConsumer, public Port_Provides_base_impl
{
    public:
        MHAL_MHALPacketConsumer_In_i(std::string port_name, MhalComponent_base *_parent);
        ~MHAL_MHALPacketConsumer_In_i();

        CORBA::ULong getMaxPayloadSize();
        CORBA::ULong getMinPayloadSize();
        CORBA::ULong getDesiredPayloadSize();
        CORBA::ULong getMinOverrideTimeout();
        void pushPacket(CORBA::UShort logicalDest, const JTRS::OctetSequence& payload);
        std::string getRepid() const;

    protected:
        MhalComponent_i *parent;
        boost::mutex portAccess;
};
// ----------------------------------------------------------------------------------------
// Packet_FlowUshortStream_Out_i declaration
// ----------------------------------------------------------------------------------------
class Packet_FlowUshortStream_Out_i : public Port_Uses_base_impl, public POA_ExtendedCF::QueryablePort
{
    public:
        Packet_FlowUshortStream_Out_i(std::string port_name, MhalComponent_base *_parent);
        ~Packet_FlowUshortStream_Out_i();

        CORBA::ULong getMaxPayloadSize(const std::string __connection_id__ = "");
        CORBA::ULong getMinPayloadSize(const std::string __connection_id__ = "");
        CORBA::ULong getDesiredPayloadSize(const std::string __connection_id__ = "");
        CORBA::ULong getMinOverrideTimeout(const std::string __connection_id__ = "");
        CORBA::Boolean pushPacket(const Packet::StreamControlType& control, const JTRS::UshortSequence& payload, const std::string __connection_id__ = "");

        std::vector<std::string> getConnectionIds()
        {
            std::vector<std::string> retval;
            for (unsigned int i = 0; i < outConnections.size(); i++) {
                retval.push_back(outConnections[i].second);
            }
            return retval;
        };

        void __evaluateRequestBasedOnConnections(const std::string &__connection_id__, bool returnValue, bool inOut, bool out) {
            if (__connection_id__.empty() and (this->outConnections.size() > 1)) {
                if (out or inOut or returnValue) {
                    throw redhawk::PortCallError("Returned parameters require either a single connection or a populated __connection_id__ to disambiguate the call.",
                            getConnectionIds());
                }
            }
            if (this->outConnections.empty()) {
                if (out or inOut or returnValue) {
                    throw redhawk::PortCallError("No connections available.", std::vector<std::string>());
                } else {
                    if (not __connection_id__.empty()) {
                        std::ostringstream eout;
                        eout<<"The requested connection id ("<<__connection_id__<<") does not exist.";
                        throw redhawk::PortCallError(eout.str(), getConnectionIds());
                    }
                }
            }
            if ((not __connection_id__.empty()) and (not this->outConnections.empty())) {
                bool foundConnection = false;
                std::vector < std::pair < Packet::FlowUshortStream_var, std::string > >::iterator i;
                for (i = this->outConnections.begin(); i != this->outConnections.end(); ++i) {
                    if ((*i).second == __connection_id__) {
                        foundConnection = true;
                        break;
                    }
                }
                if (not foundConnection) {
                    std::ostringstream eout;
                    eout<<"The requested connection id ("<<__connection_id__<<") does not exist.";
                    throw redhawk::PortCallError(eout.str(), getConnectionIds());
                }
            }
        }

        ExtendedCF::UsesConnectionSequence * connections() 
        {
            boost::mutex::scoped_lock lock(updatingPortsLock);   // don't want to process while command information is coming in
            if (recConnectionsRefresh) {
                recConnections.length(outConnections.size());
                for (unsigned int i = 0; i < outConnections.size(); i++) {
                    recConnections[i].connectionId = CORBA::string_dup(outConnections[i].second.c_str());
                    recConnections[i].port = CORBA::Object::_duplicate(outConnections[i].first);
                }
                recConnectionsRefresh = false;
            }
            // NOTE: You must delete the object that this function returns!
            return new ExtendedCF::UsesConnectionSequence(recConnections);
        }

        void connectPort(CORBA::Object_ptr connection, const char* connectionId)
        {
            boost::mutex::scoped_lock lock(updatingPortsLock);   // don't want to process while command information is coming in
            Packet::FlowUshortStream_var port = Packet::FlowUshortStream::_narrow(connection);
            outConnections.push_back(std::make_pair(port, connectionId));
            active = true;
            recConnectionsRefresh = true;
        }

        void disconnectPort(const char* connectionId)
        {
            boost::mutex::scoped_lock lock(updatingPortsLock);   // don't want to process while command information is coming in
            for (unsigned int i = 0; i < outConnections.size(); i++) {
                if (outConnections[i].second == connectionId) {
                    outConnections.erase(outConnections.begin() + i);
                    break;
                }
            }

            if (outConnections.size() == 0) {
                active = false;
            }
            recConnectionsRefresh = true;
        }

        std::string getRepid () const;

        std::vector< std::pair<Packet::FlowUshortStream_var, std::string> > _getConnections()
        {
            return outConnections;
        }

    protected:
        MhalComponent_i *parent;
        std::vector < std::pair<Packet::FlowUshortStream_var, std::string> > outConnections;
        ExtendedCF::UsesConnectionSequence recConnections;
        bool recConnectionsRefresh;
};
// ----------------------------------------------------------------------------------------
// MHAL_MHALPacketConsumer_Out_i declaration
// ----------------------------------------------------------------------------------------
class MHAL_MHALPacketConsumer_Out_i : public Port_Uses_base_impl, public POA_ExtendedCF::QueryablePort
{
    public:
        MHAL_MHALPacketConsumer_Out_i(std::string port_name, MhalComponent_base *_parent);
        ~MHAL_MHALPacketConsumer_Out_i();

        CORBA::ULong getMaxPayloadSize(const std::string __connection_id__ = "");
        CORBA::ULong getMinPayloadSize(const std::string __connection_id__ = "");
        CORBA::ULong getDesiredPayloadSize(const std::string __connection_id__ = "");
        CORBA::ULong getMinOverrideTimeout(const std::string __connection_id__ = "");
        void pushPacket(CORBA::UShort logicalDest, const JTRS::OctetSequence& payload, const std::string __connection_id__ = "");

        std::vector<std::string> getConnectionIds()
        {
            std::vector<std::string> retval;
            for (unsigned int i = 0; i < outConnections.size(); i++) {
                retval.push_back(outConnections[i].second);
            }
            return retval;
        };

        void __evaluateRequestBasedOnConnections(const std::string &__connection_id__, bool returnValue, bool inOut, bool out) {
            if (__connection_id__.empty() and (this->outConnections.size() > 1)) {
                if (out or inOut or returnValue) {
                    throw redhawk::PortCallError("Returned parameters require either a single connection or a populated __connection_id__ to disambiguate the call.",
                            getConnectionIds());
                }
            }
            if (this->outConnections.empty()) {
                if (out or inOut or returnValue) {
                    throw redhawk::PortCallError("No connections available.", std::vector<std::string>());
                } else {
                    if (not __connection_id__.empty()) {
                        std::ostringstream eout;
                        eout<<"The requested connection id ("<<__connection_id__<<") does not exist.";
                        throw redhawk::PortCallError(eout.str(), getConnectionIds());
                    }
                }
            }
            if ((not __connection_id__.empty()) and (not this->outConnections.empty())) {
                bool foundConnection = false;
                std::vector < std::pair < MHAL::MHALPacketConsumer_var, std::string > >::iterator i;
                for (i = this->outConnections.begin(); i != this->outConnections.end(); ++i) {
                    if ((*i).second == __connection_id__) {
                        foundConnection = true;
                        break;
                    }
                }
                if (not foundConnection) {
                    std::ostringstream eout;
                    eout<<"The requested connection id ("<<__connection_id__<<") does not exist.";
                    throw redhawk::PortCallError(eout.str(), getConnectionIds());
                }
            }
        }

        ExtendedCF::UsesConnectionSequence * connections() 
        {
            boost::mutex::scoped_lock lock(updatingPortsLock);   // don't want to process while command information is coming in
            if (recConnectionsRefresh) {
                recConnections.length(outConnections.size());
                for (unsigned int i = 0; i < outConnections.size(); i++) {
                    recConnections[i].connectionId = CORBA::string_dup(outConnections[i].second.c_str());
                    recConnections[i].port = CORBA::Object::_duplicate(outConnections[i].first);
                }
                recConnectionsRefresh = false;
            }
            // NOTE: You must delete the object that this function returns!
            return new ExtendedCF::UsesConnectionSequence(recConnections);
        }

        void connectPort(CORBA::Object_ptr connection, const char* connectionId)
        {
            boost::mutex::scoped_lock lock(updatingPortsLock);   // don't want to process while command information is coming in
            MHAL::MHALPacketConsumer_var port = MHAL::MHALPacketConsumer::_narrow(connection);
            outConnections.push_back(std::make_pair(port, connectionId));
            active = true;
            recConnectionsRefresh = true;
        }

        void disconnectPort(const char* connectionId)
        {
            boost::mutex::scoped_lock lock(updatingPortsLock);   // don't want to process while command information is coming in
            for (unsigned int i = 0; i < outConnections.size(); i++) {
                if (outConnections[i].second == connectionId) {
                    outConnections.erase(outConnections.begin() + i);
                    break;
                }
            }

            if (outConnections.size() == 0) {
                active = false;
            }
            recConnectionsRefresh = true;
        }

        std::string getRepid () const;

        std::vector< std::pair<MHAL::MHALPacketConsumer_var, std::string> > _getConnections()
        {
            return outConnections;
        }

    protected:
        MhalComponent_i *parent;
        std::vector < std::pair<MHAL::MHALPacketConsumer_var, std::string> > outConnections;
        ExtendedCF::UsesConnectionSequence recConnections;
        bool recConnectionsRefresh;
};
#endif // PORT_H
