#ifndef __JNI_LOGINTERFACES_H__
#define __JNI_LOGINTERFACES_H__

#include <jni.h>
#include <omnijni/omnijni.h>
#include <ossie/CF/LogInterfaces.h>

namespace CF {
  namespace jni {
    class UnknownIdentifier
    {
      public:
      static void fromJObject (CF::UnknownIdentifier& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const CF::UnknownIdentifier& in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void throwIf (JNIEnv* env, jobject obj);
      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      UnknownIdentifier();
      ~UnknownIdentifier();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID fid_[0];
    };

    class SysLogLevelsPOA : public virtual omnijni::Servant, public virtual POA_CF::SysLogLevels
    {
      public:
      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }


      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      static jclass cls_;
      static JavaVM* jvm_;
    };

    class SysLogLevels
    {
      public:
      static void fromJObject (CF::SysLogLevels_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CF::SysLogLevels_ptr in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      SysLogLevels();
      ~SysLogLevels();
      static jclass cls_;
      static jmethodID ctor_;
    };

    class SysLogLevelsHolder
    {
      public:
      static void fromJObject (CF::SysLogLevels_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CF::SysLogLevels_ptr in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, CF::SysLogLevels_ptr value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      SysLogLevelsHolder();
      ~SysLogLevelsHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class LogLevelsPOA : public virtual omnijni::Servant, public virtual POA_CF::LogLevels, public virtual CF::jni::SysLogLevelsPOA
    {
      public:
      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }


      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      static jclass cls_;
      static JavaVM* jvm_;
    };

    class LogLevels
    {
      public:
      static void fromJObject (CF::LogLevels_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CF::LogLevels_ptr in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      LogLevels();
      ~LogLevels();
      static jclass cls_;
      static jmethodID ctor_;
    };

    class LogLevelsHolder
    {
      public:
      static void fromJObject (CF::LogLevels_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CF::LogLevels_ptr in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, CF::LogLevels_ptr value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      LogLevelsHolder();
      ~LogLevelsHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class LogOperationalState
    {
      public:
      static void fromJObject (CF::LogOperationalState& out, JNIEnv* env, jobject obj);
      static jobject toJObject (CF::LogOperationalState in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      LogOperationalState();
      ~LogOperationalState();
      static jclass cls_;
      static jmethodID from_int_;
      static jmethodID value_;
    };

    class LogAdministrativeState
    {
      public:
      static void fromJObject (CF::LogAdministrativeState& out, JNIEnv* env, jobject obj);
      static jobject toJObject (CF::LogAdministrativeState in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      LogAdministrativeState();
      ~LogAdministrativeState();
      static jclass cls_;
      static jmethodID from_int_;
      static jmethodID value_;
    };

    class LogFullAction
    {
      public:
      static void fromJObject (CF::LogFullAction& out, JNIEnv* env, jobject obj);
      static jobject toJObject (CF::LogFullAction in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      LogFullAction();
      ~LogFullAction();
      static jclass cls_;
      static jmethodID from_int_;
      static jmethodID value_;
    };

    class LogTime
    {
      public:
      static void fromJObject (CF::LogTime& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const CF::LogTime& in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      LogTime();
      ~LogTime();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID fid_[2];
    };

    class LogTimeHolder
    {
      public:
      static void fromJObject (CF::LogTime& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const CF::LogTime& in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, const CF::LogTime& value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      LogTimeHolder();
      ~LogTimeHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class LogAvailabilityStatus
    {
      public:
      static void fromJObject (CF::LogAvailabilityStatus& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const CF::LogAvailabilityStatus& in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      LogAvailabilityStatus();
      ~LogAvailabilityStatus();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID fid_[2];
    };

    class LogAvailabilityStatusHolder
    {
      public:
      static void fromJObject (CF::LogAvailabilityStatus& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const CF::LogAvailabilityStatus& in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, const CF::LogAvailabilityStatus& value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      LogAvailabilityStatusHolder();
      ~LogAvailabilityStatusHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class LogEvent
    {
      public:
      static void fromJObject (CF::LogEvent& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const CF::LogEvent& in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      LogEvent();
      ~LogEvent();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID fid_[6];
    };

    class LogEventHolder
    {
      public:
      static void fromJObject (CF::LogEvent& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const CF::LogEvent& in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, const CF::LogEvent& value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      LogEventHolder();
      ~LogEventHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class LogRecord
    {
      public:
      static void fromJObject (CF::LogRecord& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const CF::LogRecord& in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      LogRecord();
      ~LogRecord();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID fid_[3];
    };

    class LogRecordHolder
    {
      public:
      static void fromJObject (CF::LogRecord& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const CF::LogRecord& in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, const CF::LogRecord& value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      LogRecordHolder();
      ~LogRecordHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class LogRecordSequence
    {
      public:
      static inline void fromJObject (CF::LogRecordSequence& out, JNIEnv* env, jobject obj)
      {
        omnijni::fromJObject(out, env, obj);
      }
      static inline jobject toJObject (CF::LogRecordSequence in, JNIEnv* env)
      {
        return omnijni::toJObject(in, env);
      }
    };

    class LogRecordSequenceHolder
    {
      public:
      static void fromJObject (CF::LogRecordSequence& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const CF::LogRecordSequence& in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, const CF::LogRecordSequence& value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      LogRecordSequenceHolder();
      ~LogRecordSequenceHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class LogEventSequence
    {
      public:
      static inline void fromJObject (CF::LogEventSequence& out, JNIEnv* env, jobject obj)
      {
        omnijni::fromJObject(out, env, obj);
      }
      static inline jobject toJObject (CF::LogEventSequence in, JNIEnv* env)
      {
        return omnijni::toJObject(in, env);
      }
    };

    class LogEventSequenceHolder
    {
      public:
      static void fromJObject (CF::LogEventSequence& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const CF::LogEventSequence& in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, const CF::LogEventSequence& value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      LogEventSequenceHolder();
      ~LogEventSequenceHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class LogLevelSequence
    {
      public:
      static inline void fromJObject (CF::LogLevelSequence& out, JNIEnv* env, jobject obj)
      {
        omnijni::fromJObject(out, env, obj);
      }
      static inline jobject toJObject (CF::LogLevelSequence in, JNIEnv* env)
      {
        return omnijni::toJObject(in, env);
      }
    };

    class LogLevelSequenceHolder
    {
      public:
      static void fromJObject (CF::LogLevelSequence& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const CF::LogLevelSequence& in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, const CF::LogLevelSequence& value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      LogLevelSequenceHolder();
      ~LogLevelSequenceHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class LogStatusPOA : public virtual omnijni::Servant, public virtual POA_CF::LogStatus
    {
      public:
      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      CORBA::ULongLong get_max_size ();
      CORBA::ULongLong get_current_size ();
      CORBA::ULongLong get_n_records ();
      CF::LogFullAction get_log_full_action ();
      CF::LogAdministrativeState get_administrative_state ();
      CF::LogOperationalState get_operational_state ();
      CF::LogAvailabilityStatus get_availability_status ();

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      static jclass cls_;
      static JavaVM* jvm_;
      static jmethodID mid_[7];
    };

    class LogStatus
    {
      public:
      static void fromJObject (CF::LogStatus_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CF::LogStatus_ptr in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      LogStatus();
      ~LogStatus();
      static jclass cls_;
      static jmethodID ctor_;
    };

    class LogStatusHolder
    {
      public:
      static void fromJObject (CF::LogStatus_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CF::LogStatus_ptr in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, CF::LogStatus_ptr value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      LogStatusHolder();
      ~LogStatusHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class LogAdministratorPOA : public virtual omnijni::Servant, public virtual POA_CF::LogAdministrator, public virtual CF::jni::LogStatusPOA
    {
      public:
      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      void set_max_size (CORBA::ULongLong size);
      void set_log_full_action (CF::LogFullAction action);
      void set_administrative_state (CF::LogAdministrativeState state);
      void clear_log ();
      void destroy ();

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      static jclass cls_;
      static JavaVM* jvm_;
      static jmethodID mid_[5];
    };

    class LogAdministrator
    {
      public:
      static void fromJObject (CF::LogAdministrator_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CF::LogAdministrator_ptr in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      LogAdministrator();
      ~LogAdministrator();
      static jclass cls_;
      static jmethodID ctor_;
    };

    class LogAdministratorHolder
    {
      public:
      static void fromJObject (CF::LogAdministrator_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CF::LogAdministrator_ptr in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, CF::LogAdministrator_ptr value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      LogAdministratorHolder();
      ~LogAdministratorHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class LogProducerPOA : public virtual omnijni::Servant, public virtual POA_CF::LogProducer, public virtual CF::jni::LogStatusPOA
    {
      public:
      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      void write_records (const CF::LogEventSequence& records);
      void write_record (const CF::LogEventSequence& record);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      static jclass cls_;
      static JavaVM* jvm_;
      static jmethodID mid_[2];
    };

    class LogProducer
    {
      public:
      static void fromJObject (CF::LogProducer_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CF::LogProducer_ptr in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      LogProducer();
      ~LogProducer();
      static jclass cls_;
      static jmethodID ctor_;
    };

    class LogProducerHolder
    {
      public:
      static void fromJObject (CF::LogProducer_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CF::LogProducer_ptr in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, CF::LogProducer_ptr value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      LogProducerHolder();
      ~LogProducerHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class LogEventConsumerPOA : public virtual omnijni::Servant, public virtual POA_CF::LogEventConsumer
    {
      public:
      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      CF::LogEventSequence* retrieve_records (CORBA::ULong& howMany, CORBA::ULong startingRecord);
      CF::LogEventSequence* retrieve_records_by_date (CORBA::ULong& howMany, CORBA::ULongLong to_timeStamp);
      CF::LogEventSequence* retrieve_records_from_date (CORBA::ULong& howMany, CORBA::ULongLong from_timeStamp);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      static jclass cls_;
      static JavaVM* jvm_;
      static jmethodID mid_[3];
    };

    class LogEventConsumer
    {
      public:
      static void fromJObject (CF::LogEventConsumer_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CF::LogEventConsumer_ptr in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      LogEventConsumer();
      ~LogEventConsumer();
      static jclass cls_;
      static jmethodID ctor_;
    };

    class LogEventConsumerHolder
    {
      public:
      static void fromJObject (CF::LogEventConsumer_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CF::LogEventConsumer_ptr in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, CF::LogEventConsumer_ptr value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      LogEventConsumerHolder();
      ~LogEventConsumerHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class LogConfiguratorPOA : public virtual omnijni::Servant, public virtual POA_CF::LogConfigurator
    {
      public:
      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      CORBA::Long getLogLevel (const char* config_id);
      char* getLogConfig (const char* config_id);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      static jclass cls_;
      static JavaVM* jvm_;
      static jmethodID mid_[2];
    };

    class LogConfigurator
    {
      public:
      static void fromJObject (CF::LogConfigurator_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CF::LogConfigurator_ptr in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      LogConfigurator();
      ~LogConfigurator();
      static jclass cls_;
      static jmethodID ctor_;
    };

    class LogConfiguratorHolder
    {
      public:
      static void fromJObject (CF::LogConfigurator_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CF::LogConfigurator_ptr in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, CF::LogConfigurator_ptr value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      LogConfiguratorHolder();
      ~LogConfiguratorHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class LogConfigurationPOA : public virtual omnijni::Servant, public virtual POA_CF::LogConfiguration
    {
      public:
      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      CORBA::Long log_level ();
      void log_level (CORBA::Long value);
      CORBA::Long getLogLevel (const char* logger_id);
      void setLogLevel (const char* logger_id, CORBA::Long newLevel);
      CF::StringSequence* getNamedLoggers ();
      void resetLog ();
      char* getLogConfig ();
      void setLogConfig (const char* config_contents);
      void setLogConfigURL (const char* config_url);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      static jclass cls_;
      static JavaVM* jvm_;
      static jmethodID mid_[9];
    };

    class LogConfiguration
    {
      public:
      static void fromJObject (CF::LogConfiguration_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CF::LogConfiguration_ptr in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      LogConfiguration();
      ~LogConfiguration();
      static jclass cls_;
      static jmethodID ctor_;
    };

    class LogConfigurationHolder
    {
      public:
      static void fromJObject (CF::LogConfiguration_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CF::LogConfiguration_ptr in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, CF::LogConfiguration_ptr value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      LogConfigurationHolder();
      ~LogConfigurationHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class LoggingPOA : public virtual omnijni::Servant, public virtual POA_CF::Logging, public virtual CF::jni::LogEventConsumerPOA, public virtual CF::jni::LogConfigurationPOA
    {
      public:
      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }


      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      static jclass cls_;
      static JavaVM* jvm_;
    };

    class Logging
    {
      public:
      static void fromJObject (CF::Logging_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CF::Logging_ptr in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      Logging();
      ~Logging();
      static jclass cls_;
      static jmethodID ctor_;
    };

    class LoggingHolder
    {
      public:
      static void fromJObject (CF::Logging_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CF::Logging_ptr in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, CF::Logging_ptr value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      LoggingHolder();
      ~LoggingHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

  }
}

inline void fromJObject (CF::SysLogLevels_out out, JNIEnv* env, jobject obj)
{
  CF::jni::SysLogLevels::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::SysLogLevels_ptr in, JNIEnv* env)
{
  return CF::jni::SysLogLevels::toJObject(in, env);
}

template<>
inline jclass getJClass<CF::SysLogLevelsRef> (JNIEnv* env)
{
  return CF::jni::SysLogLevels::getJClass(env);
}

inline void fromJObject (CF::LogLevels_out out, JNIEnv* env, jobject obj)
{
  CF::jni::LogLevels::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::LogLevels_ptr in, JNIEnv* env)
{
  return CF::jni::LogLevels::toJObject(in, env);
}

template<>
inline jclass getJClass<CF::LogLevelsRef> (JNIEnv* env)
{
  return CF::jni::LogLevels::getJClass(env);
}

inline void fromJObject (CF::LogOperationalState& out, JNIEnv* env, jobject obj)
{
  CF::jni::LogOperationalState::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::LogOperationalState in, JNIEnv* env)
{
  return CF::jni::LogOperationalState::toJObject(in, env);
}

template<>
inline jclass getJClass<CF::LogOperationalState> (JNIEnv* env)
{
  return CF::jni::LogOperationalState::getJClass(env);
}

inline void fromJObject (CF::LogAdministrativeState& out, JNIEnv* env, jobject obj)
{
  CF::jni::LogAdministrativeState::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::LogAdministrativeState in, JNIEnv* env)
{
  return CF::jni::LogAdministrativeState::toJObject(in, env);
}

template<>
inline jclass getJClass<CF::LogAdministrativeState> (JNIEnv* env)
{
  return CF::jni::LogAdministrativeState::getJClass(env);
}

inline void fromJObject (CF::LogFullAction& out, JNIEnv* env, jobject obj)
{
  CF::jni::LogFullAction::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::LogFullAction in, JNIEnv* env)
{
  return CF::jni::LogFullAction::toJObject(in, env);
}

template<>
inline jclass getJClass<CF::LogFullAction> (JNIEnv* env)
{
  return CF::jni::LogFullAction::getJClass(env);
}

inline void fromJObject (CF::LogTime& out, JNIEnv* env, jobject obj)
{
  CF::jni::LogTime::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::LogTime& in, JNIEnv* env)
{
  return CF::jni::LogTime::toJObject(in, env);
}

template<>
inline jclass getJClass<CF::LogTime> (JNIEnv* env)
{
  return CF::jni::LogTime::getJClass(env);
}

inline void fromJObject (CF::LogAvailabilityStatus& out, JNIEnv* env, jobject obj)
{
  CF::jni::LogAvailabilityStatus::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::LogAvailabilityStatus& in, JNIEnv* env)
{
  return CF::jni::LogAvailabilityStatus::toJObject(in, env);
}

template<>
inline jclass getJClass<CF::LogAvailabilityStatus> (JNIEnv* env)
{
  return CF::jni::LogAvailabilityStatus::getJClass(env);
}

inline void fromJObject (CF::LogEvent& out, JNIEnv* env, jobject obj)
{
  CF::jni::LogEvent::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::LogEvent& in, JNIEnv* env)
{
  return CF::jni::LogEvent::toJObject(in, env);
}

template<>
inline jclass getJClass<CF::LogEvent> (JNIEnv* env)
{
  return CF::jni::LogEvent::getJClass(env);
}

inline void fromJObject (CF::LogRecord& out, JNIEnv* env, jobject obj)
{
  CF::jni::LogRecord::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::LogRecord& in, JNIEnv* env)
{
  return CF::jni::LogRecord::toJObject(in, env);
}

template<>
inline jclass getJClass<CF::LogRecord> (JNIEnv* env)
{
  return CF::jni::LogRecord::getJClass(env);
}

inline void fromJObject (CF::LogRecordSequence& out, JNIEnv* env, jobject obj)
{
  omnijni::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::LogRecordSequence& in, JNIEnv* env)
{
  return omnijni::toJObject(in, env);
}

inline void fromJObject (CF::LogEventSequence& out, JNIEnv* env, jobject obj)
{
  omnijni::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::LogEventSequence& in, JNIEnv* env)
{
  return omnijni::toJObject(in, env);
}

inline void fromJObject (CF::LogLevelSequence& out, JNIEnv* env, jobject obj)
{
  omnijni::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::LogLevelSequence& in, JNIEnv* env)
{
  return omnijni::toJObject(in, env);
}

inline void fromJObject (CF::LogStatus_out out, JNIEnv* env, jobject obj)
{
  CF::jni::LogStatus::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::LogStatus_ptr in, JNIEnv* env)
{
  return CF::jni::LogStatus::toJObject(in, env);
}

template<>
inline jclass getJClass<CF::LogStatusRef> (JNIEnv* env)
{
  return CF::jni::LogStatus::getJClass(env);
}

inline void fromJObject (CF::LogAdministrator_out out, JNIEnv* env, jobject obj)
{
  CF::jni::LogAdministrator::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::LogAdministrator_ptr in, JNIEnv* env)
{
  return CF::jni::LogAdministrator::toJObject(in, env);
}

template<>
inline jclass getJClass<CF::LogAdministratorRef> (JNIEnv* env)
{
  return CF::jni::LogAdministrator::getJClass(env);
}

inline void fromJObject (CF::LogProducer_out out, JNIEnv* env, jobject obj)
{
  CF::jni::LogProducer::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::LogProducer_ptr in, JNIEnv* env)
{
  return CF::jni::LogProducer::toJObject(in, env);
}

template<>
inline jclass getJClass<CF::LogProducerRef> (JNIEnv* env)
{
  return CF::jni::LogProducer::getJClass(env);
}

inline void fromJObject (CF::LogEventConsumer_out out, JNIEnv* env, jobject obj)
{
  CF::jni::LogEventConsumer::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::LogEventConsumer_ptr in, JNIEnv* env)
{
  return CF::jni::LogEventConsumer::toJObject(in, env);
}

template<>
inline jclass getJClass<CF::LogEventConsumerRef> (JNIEnv* env)
{
  return CF::jni::LogEventConsumer::getJClass(env);
}

inline void fromJObject (CF::LogConfigurator_out out, JNIEnv* env, jobject obj)
{
  CF::jni::LogConfigurator::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::LogConfigurator_ptr in, JNIEnv* env)
{
  return CF::jni::LogConfigurator::toJObject(in, env);
}

template<>
inline jclass getJClass<CF::LogConfiguratorRef> (JNIEnv* env)
{
  return CF::jni::LogConfigurator::getJClass(env);
}

inline void fromJObject (CF::LogConfiguration_out out, JNIEnv* env, jobject obj)
{
  CF::jni::LogConfiguration::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::LogConfiguration_ptr in, JNIEnv* env)
{
  return CF::jni::LogConfiguration::toJObject(in, env);
}

template<>
inline jclass getJClass<CF::LogConfigurationRef> (JNIEnv* env)
{
  return CF::jni::LogConfiguration::getJClass(env);
}

inline void fromJObject (CF::Logging_out out, JNIEnv* env, jobject obj)
{
  CF::jni::Logging::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::Logging_ptr in, JNIEnv* env)
{
  return CF::jni::Logging::toJObject(in, env);
}

template<>
inline jclass getJClass<CF::LoggingRef> (JNIEnv* env)
{
  return CF::jni::Logging::getJClass(env);
}


#endif // __JNI_LOGINTERFACES_H__
