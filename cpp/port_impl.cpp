/*******************************************************************************************

    AUTO-GENERATED CODE. DO NOT MODIFY

    Source: MhalComponent.spd.xml

*******************************************************************************************/

#include "MhalComponent.h"


/******************************************
 *
 * Logging:
 *      To log, use the _portLog member (not available in the constructor)
 *
 *      For example,
 *          RH_DEBUG(_portLog, "this is a debug message");
 *
 ******************************************/

// ----------------------------------------------------------------------------------------
// Packet_FlowUshortStream_In_i definition
// ----------------------------------------------------------------------------------------
Packet_FlowUshortStream_In_i::Packet_FlowUshortStream_In_i(std::string port_name, MhalComponent_base *_parent) : 
Port_Provides_base_impl(port_name)
{
    parent = static_cast<MhalComponent_i *> (_parent);
}

Packet_FlowUshortStream_In_i::~Packet_FlowUshortStream_In_i()
{
}

CORBA::ULong Packet_FlowUshortStream_In_i::getMaxPayloadSize()
{
    boost::mutex::scoped_lock lock(portAccess);
    CORBA::ULong retval = 0;
    // TODO: Fill in this function
    return retval;
}

CORBA::ULong Packet_FlowUshortStream_In_i::getMinPayloadSize()
{
    boost::mutex::scoped_lock lock(portAccess);
    CORBA::ULong retval = 0;
    // TODO: Fill in this function
    return retval;
}

CORBA::ULong Packet_FlowUshortStream_In_i::getDesiredPayloadSize()
{
    boost::mutex::scoped_lock lock(portAccess);
    CORBA::ULong retval = 0;
    // TODO: Fill in this function
    return retval;
}

CORBA::ULong Packet_FlowUshortStream_In_i::getMinOverrideTimeout()
{
    boost::mutex::scoped_lock lock(portAccess);
    CORBA::ULong retval = 0;
    // TODO: Fill in this function
    return retval;
}

CORBA::Boolean Packet_FlowUshortStream_In_i::pushPacket(const Packet::StreamControlType& control, const JTRS::UshortSequence& payload)
{
    boost::mutex::scoped_lock lock(portAccess);
    CORBA::Boolean retval = 0;
    // TODO: Fill in this function
    return retval;
}

std::string Packet_FlowUshortStream_In_i::getRepid() const
{
    return Packet::FlowUshortStream::_PD_repoId;
}
// ----------------------------------------------------------------------------------------
// MHAL_MHALPacketConsumer_In_i definition
// ----------------------------------------------------------------------------------------
MHAL_MHALPacketConsumer_In_i::MHAL_MHALPacketConsumer_In_i(std::string port_name, MhalComponent_base *_parent) : 
Port_Provides_base_impl(port_name)
{
    parent = static_cast<MhalComponent_i *> (_parent);
}

MHAL_MHALPacketConsumer_In_i::~MHAL_MHALPacketConsumer_In_i()
{
}

CORBA::ULong MHAL_MHALPacketConsumer_In_i::getMaxPayloadSize()
{
    boost::mutex::scoped_lock lock(portAccess);
    CORBA::ULong retval = 0;
    // TODO: Fill in this function
    return retval;
}

CORBA::ULong MHAL_MHALPacketConsumer_In_i::getMinPayloadSize()
{
    boost::mutex::scoped_lock lock(portAccess);
    CORBA::ULong retval = 0;
    // TODO: Fill in this function
    return retval;
}

CORBA::ULong MHAL_MHALPacketConsumer_In_i::getDesiredPayloadSize()
{
    boost::mutex::scoped_lock lock(portAccess);
    CORBA::ULong retval = 0;
    // TODO: Fill in this function
    return retval;
}

CORBA::ULong MHAL_MHALPacketConsumer_In_i::getMinOverrideTimeout()
{
    boost::mutex::scoped_lock lock(portAccess);
    CORBA::ULong retval = 0;
    // TODO: Fill in this function
    return retval;
}

void MHAL_MHALPacketConsumer_In_i::pushPacket(CORBA::UShort logicalDest, const JTRS::OctetSequence& payload)
{
    boost::mutex::scoped_lock lock(portAccess);
    // TODO: Fill in this function
}

std::string MHAL_MHALPacketConsumer_In_i::getRepid() const
{
    return MHAL::MHALPacketConsumer::_PD_repoId;
}
// ----------------------------------------------------------------------------------------
// Packet_FlowUshortStream_Out_i definition
// ----------------------------------------------------------------------------------------
Packet_FlowUshortStream_Out_i::Packet_FlowUshortStream_Out_i(std::string port_name, MhalComponent_base *_parent) :
Port_Uses_base_impl(port_name)
{
    parent = static_cast<MhalComponent_i *> (_parent);
    recConnectionsRefresh = false;
    recConnections.length(0);
}

Packet_FlowUshortStream_Out_i::~Packet_FlowUshortStream_Out_i()
{
}
CORBA::ULong Packet_FlowUshortStream_Out_i::getMaxPayloadSize(const std::string __connection_id__)
{
    CORBA::ULong retval = 0;
    std::vector < std::pair < Packet::FlowUshortStream_var, std::string > >::iterator i;

    boost::mutex::scoped_lock lock(updatingPortsLock);   // don't want to process while command information is coming in

    __evaluateRequestBasedOnConnections(__connection_id__, true, false, false);
    if (this->active) {
        for (i = this->outConnections.begin(); i != this->outConnections.end(); ++i) {
            if (not __connection_id__.empty() and __connection_id__ != (*i).second)
                continue;
            try {
                retval = ((*i).first)->getMaxPayloadSize();
            } catch (...) {
                RH_ERROR(this->_portLog, "Call to getMaxPayloadSize by Packet_FlowUshortStream_Out_i failed");
                throw;
            }
        }
    }

    return retval;
}
CORBA::ULong Packet_FlowUshortStream_Out_i::getMinPayloadSize(const std::string __connection_id__)
{
    CORBA::ULong retval = 0;
    std::vector < std::pair < Packet::FlowUshortStream_var, std::string > >::iterator i;

    boost::mutex::scoped_lock lock(updatingPortsLock);   // don't want to process while command information is coming in

    __evaluateRequestBasedOnConnections(__connection_id__, true, false, false);
    if (this->active) {
        for (i = this->outConnections.begin(); i != this->outConnections.end(); ++i) {
            if (not __connection_id__.empty() and __connection_id__ != (*i).second)
                continue;
            try {
                retval = ((*i).first)->getMinPayloadSize();
            } catch (...) {
                RH_ERROR(this->_portLog, "Call to getMinPayloadSize by Packet_FlowUshortStream_Out_i failed");
                throw;
            }
        }
    }

    return retval;
}
CORBA::ULong Packet_FlowUshortStream_Out_i::getDesiredPayloadSize(const std::string __connection_id__)
{
    CORBA::ULong retval = 0;
    std::vector < std::pair < Packet::FlowUshortStream_var, std::string > >::iterator i;

    boost::mutex::scoped_lock lock(updatingPortsLock);   // don't want to process while command information is coming in

    __evaluateRequestBasedOnConnections(__connection_id__, true, false, false);
    if (this->active) {
        for (i = this->outConnections.begin(); i != this->outConnections.end(); ++i) {
            if (not __connection_id__.empty() and __connection_id__ != (*i).second)
                continue;
            try {
                retval = ((*i).first)->getDesiredPayloadSize();
            } catch (...) {
                RH_ERROR(this->_portLog, "Call to getDesiredPayloadSize by Packet_FlowUshortStream_Out_i failed");
                throw;
            }
        }
    }

    return retval;
}
CORBA::ULong Packet_FlowUshortStream_Out_i::getMinOverrideTimeout(const std::string __connection_id__)
{
    CORBA::ULong retval = 0;
    std::vector < std::pair < Packet::FlowUshortStream_var, std::string > >::iterator i;

    boost::mutex::scoped_lock lock(updatingPortsLock);   // don't want to process while command information is coming in

    __evaluateRequestBasedOnConnections(__connection_id__, true, false, false);
    if (this->active) {
        for (i = this->outConnections.begin(); i != this->outConnections.end(); ++i) {
            if (not __connection_id__.empty() and __connection_id__ != (*i).second)
                continue;
            try {
                retval = ((*i).first)->getMinOverrideTimeout();
            } catch (...) {
                RH_ERROR(this->_portLog, "Call to getMinOverrideTimeout by Packet_FlowUshortStream_Out_i failed");
                throw;
            }
        }
    }

    return retval;
}
CORBA::Boolean Packet_FlowUshortStream_Out_i::pushPacket(const Packet::StreamControlType& control, const JTRS::UshortSequence& payload, const std::string __connection_id__)
{
    CORBA::Boolean retval = 0;
    std::vector < std::pair < Packet::FlowUshortStream_var, std::string > >::iterator i;

    boost::mutex::scoped_lock lock(updatingPortsLock);   // don't want to process while command information is coming in

    __evaluateRequestBasedOnConnections(__connection_id__, true, false, false);
    if (this->active) {
        for (i = this->outConnections.begin(); i != this->outConnections.end(); ++i) {
            if (not __connection_id__.empty() and __connection_id__ != (*i).second)
                continue;
            try {
                retval = ((*i).first)->pushPacket(control, payload);
            } catch (...) {
                RH_ERROR(this->_portLog, "Call to pushPacket by Packet_FlowUshortStream_Out_i failed");
                throw;
            }
        }
    }

    return retval;
}

std::string Packet_FlowUshortStream_Out_i::getRepid() const
{
    return Packet::FlowUshortStream::_PD_repoId;
}
// ----------------------------------------------------------------------------------------
// MHAL_MHALPacketConsumer_Out_i definition
// ----------------------------------------------------------------------------------------
MHAL_MHALPacketConsumer_Out_i::MHAL_MHALPacketConsumer_Out_i(std::string port_name, MhalComponent_base *_parent) :
Port_Uses_base_impl(port_name)
{
    parent = static_cast<MhalComponent_i *> (_parent);
    recConnectionsRefresh = false;
    recConnections.length(0);
}

MHAL_MHALPacketConsumer_Out_i::~MHAL_MHALPacketConsumer_Out_i()
{
}
CORBA::ULong MHAL_MHALPacketConsumer_Out_i::getMaxPayloadSize(const std::string __connection_id__)
{
    CORBA::ULong retval = 0;
    std::vector < std::pair < MHAL::MHALPacketConsumer_var, std::string > >::iterator i;

    boost::mutex::scoped_lock lock(updatingPortsLock);   // don't want to process while command information is coming in

    __evaluateRequestBasedOnConnections(__connection_id__, true, false, false);
    if (this->active) {
        for (i = this->outConnections.begin(); i != this->outConnections.end(); ++i) {
            if (not __connection_id__.empty() and __connection_id__ != (*i).second)
                continue;
            try {
                retval = ((*i).first)->getMaxPayloadSize();
            } catch (...) {
                RH_ERROR(this->_portLog, "Call to getMaxPayloadSize by MHAL_MHALPacketConsumer_Out_i failed");
                throw;
            }
        }
    }

    return retval;
}
CORBA::ULong MHAL_MHALPacketConsumer_Out_i::getMinPayloadSize(const std::string __connection_id__)
{
    CORBA::ULong retval = 0;
    std::vector < std::pair < MHAL::MHALPacketConsumer_var, std::string > >::iterator i;

    boost::mutex::scoped_lock lock(updatingPortsLock);   // don't want to process while command information is coming in

    __evaluateRequestBasedOnConnections(__connection_id__, true, false, false);
    if (this->active) {
        for (i = this->outConnections.begin(); i != this->outConnections.end(); ++i) {
            if (not __connection_id__.empty() and __connection_id__ != (*i).second)
                continue;
            try {
                retval = ((*i).first)->getMinPayloadSize();
            } catch (...) {
                RH_ERROR(this->_portLog, "Call to getMinPayloadSize by MHAL_MHALPacketConsumer_Out_i failed");
                throw;
            }
        }
    }

    return retval;
}
CORBA::ULong MHAL_MHALPacketConsumer_Out_i::getDesiredPayloadSize(const std::string __connection_id__)
{
    CORBA::ULong retval = 0;
    std::vector < std::pair < MHAL::MHALPacketConsumer_var, std::string > >::iterator i;

    boost::mutex::scoped_lock lock(updatingPortsLock);   // don't want to process while command information is coming in

    __evaluateRequestBasedOnConnections(__connection_id__, true, false, false);
    if (this->active) {
        for (i = this->outConnections.begin(); i != this->outConnections.end(); ++i) {
            if (not __connection_id__.empty() and __connection_id__ != (*i).second)
                continue;
            try {
                retval = ((*i).first)->getDesiredPayloadSize();
            } catch (...) {
                RH_ERROR(this->_portLog, "Call to getDesiredPayloadSize by MHAL_MHALPacketConsumer_Out_i failed");
                throw;
            }
        }
    }

    return retval;
}
CORBA::ULong MHAL_MHALPacketConsumer_Out_i::getMinOverrideTimeout(const std::string __connection_id__)
{
    CORBA::ULong retval = 0;
    std::vector < std::pair < MHAL::MHALPacketConsumer_var, std::string > >::iterator i;

    boost::mutex::scoped_lock lock(updatingPortsLock);   // don't want to process while command information is coming in

    __evaluateRequestBasedOnConnections(__connection_id__, true, false, false);
    if (this->active) {
        for (i = this->outConnections.begin(); i != this->outConnections.end(); ++i) {
            if (not __connection_id__.empty() and __connection_id__ != (*i).second)
                continue;
            try {
                retval = ((*i).first)->getMinOverrideTimeout();
            } catch (...) {
                RH_ERROR(this->_portLog, "Call to getMinOverrideTimeout by MHAL_MHALPacketConsumer_Out_i failed");
                throw;
            }
        }
    }

    return retval;
}
void MHAL_MHALPacketConsumer_Out_i::pushPacket(CORBA::UShort logicalDest, const JTRS::OctetSequence& payload, const std::string __connection_id__)
{
    std::vector < std::pair < MHAL::MHALPacketConsumer_var, std::string > >::iterator i;

    boost::mutex::scoped_lock lock(updatingPortsLock);   // don't want to process while command information is coming in

    __evaluateRequestBasedOnConnections(__connection_id__, false, false, false);
    if (this->active) {
        for (i = this->outConnections.begin(); i != this->outConnections.end(); ++i) {
            if (not __connection_id__.empty() and __connection_id__ != (*i).second)
                continue;
            try {
                ((*i).first)->pushPacket(logicalDest, payload);
            } catch (...) {
                RH_ERROR(this->_portLog, "Call to pushPacket by MHAL_MHALPacketConsumer_Out_i failed");
                throw;
            }
        }
    }

}

std::string MHAL_MHALPacketConsumer_Out_i::getRepid() const
{
    return MHAL::MHALPacketConsumer::_PD_repoId;
}

