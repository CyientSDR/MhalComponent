#ifndef MHALCOMPONENT_BASE_IMPL_BASE_H
#define MHALCOMPONENT_BASE_IMPL_BASE_H

#include <boost/thread.hpp>
#include <ossie/Component.h>
#include <ossie/ThreadedComponent.h>

#include "port_impl.h"

class MhalComponent_base : public Component, protected ThreadedComponent
{
    friend class Packet_FlowUshortStream_In_i;
    friend class MHAL_MHALPacketConsumer_In_i;
    friend class Packet_FlowUshortStream_Out_i;
    friend class MHAL_MHALPacketConsumer_Out_i;

    public:
        MhalComponent_base(const char *uuid, const char *label);
        ~MhalComponent_base();

        void start() throw (CF::Resource::StartError, CORBA::SystemException);

        void stop() throw (CF::Resource::StopError, CORBA::SystemException);

        void releaseObject() throw (CF::LifeCycle::ReleaseError, CORBA::SystemException);

        void loadProperties();

    protected:

        // Ports
        /// Port: datainput
        Packet_FlowUshortStream_In_i *datainput;
        /// Port: datain
        MHAL_MHALPacketConsumer_In_i *datain;
        /// Port: dataoutput
        Packet_FlowUshortStream_Out_i *dataoutput;
        /// Port: dataout
        MHAL_MHALPacketConsumer_Out_i *dataout;

    private:
};
#endif // MHALCOMPONENT_BASE_IMPL_BASE_H
