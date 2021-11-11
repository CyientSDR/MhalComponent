#include "MhalComponent_base.h"

/*******************************************************************************************

    AUTO-GENERATED CODE. DO NOT MODIFY

    The following class functions are for the base class for the component class. To
    customize any of these functions, do not modify them here. Instead, overload them
    on the child class

******************************************************************************************/

MhalComponent_base::MhalComponent_base(const char *uuid, const char *label) :
    Component(uuid, label),
    ThreadedComponent()
{
    loadProperties();

    datainput = new Packet_FlowUshortStream_In_i("datainput", this);
    datainput->setLogger(this->_baseLog->getChildLogger("datainput", "ports"));
    addPort("datainput", datainput);
    datain = new MHAL_MHALPacketConsumer_In_i("datain", this);
    datain->setLogger(this->_baseLog->getChildLogger("datain", "ports"));
    addPort("datain", datain);
    dataoutput = new Packet_FlowUshortStream_Out_i("dataoutput", this);
    dataoutput->setLogger(this->_baseLog->getChildLogger("dataoutput", "ports"));
    addPort("dataoutput", dataoutput);
    dataout = new MHAL_MHALPacketConsumer_Out_i("dataout", this);
    dataout->setLogger(this->_baseLog->getChildLogger("dataout", "ports"));
    addPort("dataout", dataout);
}

MhalComponent_base::~MhalComponent_base()
{
    datainput->_remove_ref();
    datainput = 0;
    datain->_remove_ref();
    datain = 0;
    dataoutput->_remove_ref();
    dataoutput = 0;
    dataout->_remove_ref();
    dataout = 0;
}

/*******************************************************************************************
    Framework-level functions
    These functions are generally called by the framework to perform housekeeping.
*******************************************************************************************/
void MhalComponent_base::start() throw (CORBA::SystemException, CF::Resource::StartError)
{
    Component::start();
    ThreadedComponent::startThread();
}

void MhalComponent_base::stop() throw (CORBA::SystemException, CF::Resource::StopError)
{
    Component::stop();
    if (!ThreadedComponent::stopThread()) {
        throw CF::Resource::StopError(CF::CF_NOTSET, "Processing thread did not die");
    }
}

void MhalComponent_base::releaseObject() throw (CORBA::SystemException, CF::LifeCycle::ReleaseError)
{
    // This function clears the component running condition so main shuts down everything
    try {
        stop();
    } catch (CF::Resource::StopError& ex) {
        // TODO - this should probably be logged instead of ignored
    }

    Component::releaseObject();
}

void MhalComponent_base::loadProperties()
{
}



