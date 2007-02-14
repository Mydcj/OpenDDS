// -*- C++ -*-
//
// $Id$

// ****  Code generated by the The ACE ORB (TAO) IDL Compiler ****
// TAO and the TAO IDL Compiler have been developed by:
//       Center for Distributed Object Computing
//       Washington University
//       St. Louis, MO
//       USA
//       http://www.cs.wustl.edu/~schmidt/doc-center.html
// and
//       Distributed Object Computing Laboratory
//       University of California at Irvine
//       Irvine, CA
//       USA
//       http://doc.ece.uci.edu/
//
// Information about TAO is available at:
//     http://www.cs.wustl.edu/~schmidt/TAO.html

// TAO_IDL - Generated from
// .\be\be_codegen.cpp:951

#ifndef DDSDCPSDOMAIN_PARTICIPANT_LISTENER_I_H_
#define DDSDCPSDOMAIN_PARTICIPANT_LISTENER_I_H_

#include "dds/DdsDcpsDomainS.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
#pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

//Class TAO_DCPS_DomainParticipantListener_i
class TAO_DCPS_DomainParticipantListener_i
: public virtual POA_DDS::DomainParticipantListener,
  public virtual PortableServer::RefCountServantBase
{
public:
  //Constructor
  TAO_DCPS_DomainParticipantListener_i (void);

  //Destructor
  virtual ~TAO_DCPS_DomainParticipantListener_i (void);



virtual void on_inconsistent_topic (
    ::DDS::Topic_ptr the_topic,
    const ::DDS::InconsistentTopicStatus & status
  );

virtual void on_data_on_readers (
    ::DDS::Subscriber_ptr subs
  );

virtual void on_offered_deadline_missed (
    ::DDS::DataWriter_ptr writer,
    const ::DDS::OfferedDeadlineMissedStatus & status
  );

virtual void on_offered_incompatible_qos (
    ::DDS::DataWriter_ptr writer,
    const ::DDS::OfferedIncompatibleQosStatus & status
  );

virtual void on_liveliness_lost (
    ::DDS::DataWriter_ptr writer,
    const ::DDS::LivelinessLostStatus & status
  );

virtual void on_publication_match (
    ::DDS::DataWriter_ptr writer,
    const ::DDS::PublicationMatchStatus & status
  );

virtual void on_requested_deadline_missed (
    ::DDS::DataReader_ptr reader,
    const ::DDS::RequestedDeadlineMissedStatus & status
  );

virtual void on_requested_incompatible_qos (
    ::DDS::DataReader_ptr reader,
    const ::DDS::RequestedIncompatibleQosStatus & status
  );

virtual void on_sample_rejected (
    ::DDS::DataReader_ptr reader,
    const ::DDS::SampleRejectedStatus & status
  );

virtual void on_liveliness_changed (
    ::DDS::DataReader_ptr reader,
    const ::DDS::LivelinessChangedStatus & status
  );

virtual void on_data_available (
    ::DDS::DataReader_ptr reader
  );

virtual void on_subscription_match (
    ::DDS::DataReader_ptr reader,
    const ::DDS::SubscriptionMatchStatus & status
  );

virtual void on_sample_lost (
    ::DDS::DataReader_ptr reader,
    const ::DDS::SampleLostStatus & status
  );

};
#endif /* DDSDCPSDOMAIN_PARTICIPANT_LISTENER_I_H_  */
