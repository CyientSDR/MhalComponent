#ifndef __JNI_EVENTCHANNELMANAGER_H__
#define __JNI_EVENTCHANNELMANAGER_H__

#include <jni.h>
#include <omnijni/omnijni.h>
#include <ossie/CF/EventChannelManager.h>

namespace CF {
  namespace jni {
    class EventChannelManagerPOA : public virtual omnijni::Servant, public virtual POA_CF::EventChannelManager
    {
      public:
      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      CF::EventChannel_ptr create (const char* channel_name);
      CF::EventChannel_ptr get (const char* channel_name);
      CF::EventChannel_ptr createForRegistrations (const char* channel_name);
      void markForRegistrations (const char* channel_name);
      void release (const char* channel_name);
      void forceRelease (const char* channel_name);
      CF::EventChannelManager::EventChannelReg* registerConsumer (CosEventComm::PushConsumer_ptr consumer, const CF::EventChannelManager::EventRegistration& req);
      CF::EventChannelManager::PublisherReg* registerPublisher (const CF::EventChannelManager::EventRegistration& req, CosEventComm::PushSupplier_ptr disconnectReceiver);
      CF::EventChannelManager::EventChannelReg* registerResource (const CF::EventChannelManager::EventRegistration& req);
      void unregister (const CF::EventChannelManager::EventRegistration& reg);
      void listChannels (CORBA::ULong how_many, CF::EventChannelManager::EventChannelInfoList_out elist, CF::EventChannelInfoIterator_out eiter);
      void listRegistrants (const char* channel_name, CORBA::ULong how_many, CF::EventChannelManager::EventRegistrantList_out rlist, CF::EventRegistrantIterator_out riter);

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
      static jmethodID mid_[12];
    };

    class EventChannelManager
    {
      public:
      class EventChannelInfo
      {
        public:
        static void fromJObject (CF::EventChannelManager::EventChannelInfo& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::EventChannelManager::EventChannelInfo& in, JNIEnv* env);

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
        EventChannelInfo();
        ~EventChannelInfo();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID fid_[2];
      };

      class EventChannelInfoHolder
      {
        public:
        static void fromJObject (CF::EventChannelManager::EventChannelInfo& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::EventChannelManager::EventChannelInfo& in, JNIEnv* env);

        static jclass getJClass (JNIEnv* env)
        {
          return cls_;
        }

        static void setValue (JNIEnv* env, jobject holder, const CF::EventChannelManager::EventChannelInfo& value);
        static jobject newInstance (JNIEnv* env);

        static void Load (JNIEnv* env)
        {
          omni_mutex_lock lock_(omnijni::sharedMutex());
          OnLoad(env);
        }

        static void OnLoad (JNIEnv* env);
        static void OnUnload (JNIEnv* env);

        private:
        EventChannelInfoHolder();
        ~EventChannelInfoHolder();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID value_;
      };

      class EventChannelInfoList
      {
        public:
        static inline void fromJObject (CF::EventChannelManager::EventChannelInfoList& out, JNIEnv* env, jobject obj)
        {
          omnijni::fromJObject(out, env, obj);
        }
        static inline jobject toJObject (CF::EventChannelManager::EventChannelInfoList in, JNIEnv* env)
        {
          return omnijni::toJObject(in, env);
        }
      };

      class EventChannelInfoListHolder
      {
        public:
        static void fromJObject (CF::EventChannelManager::EventChannelInfoList& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::EventChannelManager::EventChannelInfoList& in, JNIEnv* env);

        static jclass getJClass (JNIEnv* env)
        {
          return cls_;
        }

        static void setValue (JNIEnv* env, jobject holder, const CF::EventChannelManager::EventChannelInfoList& value);
        static jobject newInstance (JNIEnv* env);

        static void Load (JNIEnv* env)
        {
          omni_mutex_lock lock_(omnijni::sharedMutex());
          OnLoad(env);
        }

        static void OnLoad (JNIEnv* env);
        static void OnUnload (JNIEnv* env);

        private:
        EventChannelInfoListHolder();
        ~EventChannelInfoListHolder();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID value_;
      };

      class EventRegistrant
      {
        public:
        static void fromJObject (CF::EventChannelManager::EventRegistrant& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::EventChannelManager::EventRegistrant& in, JNIEnv* env);

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
        EventRegistrant();
        ~EventRegistrant();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID fid_[2];
      };

      class EventRegistrantHolder
      {
        public:
        static void fromJObject (CF::EventChannelManager::EventRegistrant& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::EventChannelManager::EventRegistrant& in, JNIEnv* env);

        static jclass getJClass (JNIEnv* env)
        {
          return cls_;
        }

        static void setValue (JNIEnv* env, jobject holder, const CF::EventChannelManager::EventRegistrant& value);
        static jobject newInstance (JNIEnv* env);

        static void Load (JNIEnv* env)
        {
          omni_mutex_lock lock_(omnijni::sharedMutex());
          OnLoad(env);
        }

        static void OnLoad (JNIEnv* env);
        static void OnUnload (JNIEnv* env);

        private:
        EventRegistrantHolder();
        ~EventRegistrantHolder();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID value_;
      };

      class EventRegistrantList
      {
        public:
        static inline void fromJObject (CF::EventChannelManager::EventRegistrantList& out, JNIEnv* env, jobject obj)
        {
          omnijni::fromJObject(out, env, obj);
        }
        static inline jobject toJObject (CF::EventChannelManager::EventRegistrantList in, JNIEnv* env)
        {
          return omnijni::toJObject(in, env);
        }
      };

      class EventRegistrantListHolder
      {
        public:
        static void fromJObject (CF::EventChannelManager::EventRegistrantList& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::EventChannelManager::EventRegistrantList& in, JNIEnv* env);

        static jclass getJClass (JNIEnv* env)
        {
          return cls_;
        }

        static void setValue (JNIEnv* env, jobject holder, const CF::EventChannelManager::EventRegistrantList& value);
        static jobject newInstance (JNIEnv* env);

        static void Load (JNIEnv* env)
        {
          omni_mutex_lock lock_(omnijni::sharedMutex());
          OnLoad(env);
        }

        static void OnLoad (JNIEnv* env);
        static void OnUnload (JNIEnv* env);

        private:
        EventRegistrantListHolder();
        ~EventRegistrantListHolder();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID value_;
      };

      class EventRegistration
      {
        public:
        static void fromJObject (CF::EventChannelManager::EventRegistration& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::EventChannelManager::EventRegistration& in, JNIEnv* env);

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
        EventRegistration();
        ~EventRegistration();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID fid_[2];
      };

      class EventRegistrationHolder
      {
        public:
        static void fromJObject (CF::EventChannelManager::EventRegistration& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::EventChannelManager::EventRegistration& in, JNIEnv* env);

        static jclass getJClass (JNIEnv* env)
        {
          return cls_;
        }

        static void setValue (JNIEnv* env, jobject holder, const CF::EventChannelManager::EventRegistration& value);
        static jobject newInstance (JNIEnv* env);

        static void Load (JNIEnv* env)
        {
          omni_mutex_lock lock_(omnijni::sharedMutex());
          OnLoad(env);
        }

        static void OnLoad (JNIEnv* env);
        static void OnUnload (JNIEnv* env);

        private:
        EventRegistrationHolder();
        ~EventRegistrationHolder();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID value_;
      };

      class EventChannelReg
      {
        public:
        static void fromJObject (CF::EventChannelManager::EventChannelReg& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::EventChannelManager::EventChannelReg& in, JNIEnv* env);

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
        EventChannelReg();
        ~EventChannelReg();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID fid_[2];
      };

      class EventChannelRegHolder
      {
        public:
        static void fromJObject (CF::EventChannelManager::EventChannelReg& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::EventChannelManager::EventChannelReg& in, JNIEnv* env);

        static jclass getJClass (JNIEnv* env)
        {
          return cls_;
        }

        static void setValue (JNIEnv* env, jobject holder, const CF::EventChannelManager::EventChannelReg& value);
        static jobject newInstance (JNIEnv* env);

        static void Load (JNIEnv* env)
        {
          omni_mutex_lock lock_(omnijni::sharedMutex());
          OnLoad(env);
        }

        static void OnLoad (JNIEnv* env);
        static void OnUnload (JNIEnv* env);

        private:
        EventChannelRegHolder();
        ~EventChannelRegHolder();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID value_;
      };

      class PublisherReg
      {
        public:
        static void fromJObject (CF::EventChannelManager::PublisherReg& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::EventChannelManager::PublisherReg& in, JNIEnv* env);

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
        PublisherReg();
        ~PublisherReg();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID fid_[3];
      };

      class PublisherRegHolder
      {
        public:
        static void fromJObject (CF::EventChannelManager::PublisherReg& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::EventChannelManager::PublisherReg& in, JNIEnv* env);

        static jclass getJClass (JNIEnv* env)
        {
          return cls_;
        }

        static void setValue (JNIEnv* env, jobject holder, const CF::EventChannelManager::PublisherReg& value);
        static jobject newInstance (JNIEnv* env);

        static void Load (JNIEnv* env)
        {
          omni_mutex_lock lock_(omnijni::sharedMutex());
          OnLoad(env);
        }

        static void OnLoad (JNIEnv* env);
        static void OnUnload (JNIEnv* env);

        private:
        PublisherRegHolder();
        ~PublisherRegHolder();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID value_;
      };

      class ChannelAlreadyExists
      {
        public:
        static void fromJObject (CF::EventChannelManager::ChannelAlreadyExists& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::EventChannelManager::ChannelAlreadyExists& in, JNIEnv* env);

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
        ChannelAlreadyExists();
        ~ChannelAlreadyExists();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID fid_[0];
      };

      class ChannelDoesNotExist
      {
        public:
        static void fromJObject (CF::EventChannelManager::ChannelDoesNotExist& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::EventChannelManager::ChannelDoesNotExist& in, JNIEnv* env);

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
        ChannelDoesNotExist();
        ~ChannelDoesNotExist();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID fid_[0];
      };

      class InvalidChannelName
      {
        public:
        static void fromJObject (CF::EventChannelManager::InvalidChannelName& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::EventChannelManager::InvalidChannelName& in, JNIEnv* env);

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
        InvalidChannelName();
        ~InvalidChannelName();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID fid_[0];
      };

      class OperationFailed
      {
        public:
        static void fromJObject (CF::EventChannelManager::OperationFailed& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::EventChannelManager::OperationFailed& in, JNIEnv* env);

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
        OperationFailed();
        ~OperationFailed();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID fid_[0];
      };

      class OperationNotAllowed
      {
        public:
        static void fromJObject (CF::EventChannelManager::OperationNotAllowed& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::EventChannelManager::OperationNotAllowed& in, JNIEnv* env);

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
        OperationNotAllowed();
        ~OperationNotAllowed();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID fid_[0];
      };

      class ServiceUnavailable
      {
        public:
        static void fromJObject (CF::EventChannelManager::ServiceUnavailable& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::EventChannelManager::ServiceUnavailable& in, JNIEnv* env);

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
        ServiceUnavailable();
        ~ServiceUnavailable();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID fid_[0];
      };

      class RegistrationsExists
      {
        public:
        static void fromJObject (CF::EventChannelManager::RegistrationsExists& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::EventChannelManager::RegistrationsExists& in, JNIEnv* env);

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
        RegistrationsExists();
        ~RegistrationsExists();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID fid_[0];
      };

      class RegistrationAlreadyExists
      {
        public:
        static void fromJObject (CF::EventChannelManager::RegistrationAlreadyExists& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::EventChannelManager::RegistrationAlreadyExists& in, JNIEnv* env);

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
        RegistrationAlreadyExists();
        ~RegistrationAlreadyExists();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID fid_[0];
      };

      class RegistrationDoesNotExist
      {
        public:
        static void fromJObject (CF::EventChannelManager::RegistrationDoesNotExist& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::EventChannelManager::RegistrationDoesNotExist& in, JNIEnv* env);

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
        RegistrationDoesNotExist();
        ~RegistrationDoesNotExist();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID fid_[0];
      };

      static void fromJObject (CF::EventChannelManager_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CF::EventChannelManager_ptr in, JNIEnv* env);

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
      EventChannelManager();
      ~EventChannelManager();
      static jclass cls_;
      static jmethodID ctor_;
    };

    class EventChannelManagerHolder
    {
      public:
      static void fromJObject (CF::EventChannelManager_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CF::EventChannelManager_ptr in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, CF::EventChannelManager_ptr value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      EventChannelManagerHolder();
      ~EventChannelManagerHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class EventChannelInfoIteratorPOA : public virtual omnijni::Servant, public virtual POA_CF::EventChannelInfoIterator
    {
      public:
      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      CORBA::Boolean next_one (CF::EventChannelManager::EventChannelInfo_out eci);
      CORBA::Boolean next_n (CORBA::ULong how_many, CF::EventChannelManager::EventChannelInfoList_out ecil);
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
      static jmethodID mid_[3];
    };

    class EventChannelInfoIterator
    {
      public:
      static void fromJObject (CF::EventChannelInfoIterator_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CF::EventChannelInfoIterator_ptr in, JNIEnv* env);

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
      EventChannelInfoIterator();
      ~EventChannelInfoIterator();
      static jclass cls_;
      static jmethodID ctor_;
    };

    class EventChannelInfoIteratorHolder
    {
      public:
      static void fromJObject (CF::EventChannelInfoIterator_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CF::EventChannelInfoIterator_ptr in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, CF::EventChannelInfoIterator_ptr value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      EventChannelInfoIteratorHolder();
      ~EventChannelInfoIteratorHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class EventRegistrantIteratorPOA : public virtual omnijni::Servant, public virtual POA_CF::EventRegistrantIterator
    {
      public:
      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      CORBA::Boolean next_one (CF::EventChannelManager::EventRegistrant_out er);
      CORBA::Boolean next_n (CORBA::ULong how_many, CF::EventChannelManager::EventRegistrantList_out erl);
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
      static jmethodID mid_[3];
    };

    class EventRegistrantIterator
    {
      public:
      static void fromJObject (CF::EventRegistrantIterator_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CF::EventRegistrantIterator_ptr in, JNIEnv* env);

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
      EventRegistrantIterator();
      ~EventRegistrantIterator();
      static jclass cls_;
      static jmethodID ctor_;
    };

    class EventRegistrantIteratorHolder
    {
      public:
      static void fromJObject (CF::EventRegistrantIterator_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CF::EventRegistrantIterator_ptr in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, CF::EventRegistrantIterator_ptr value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      EventRegistrantIteratorHolder();
      ~EventRegistrantIteratorHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

  }
}

inline void fromJObject (CF::EventChannelManager::EventChannelInfo& out, JNIEnv* env, jobject obj)
{
  CF::jni::EventChannelManager::EventChannelInfo::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::EventChannelManager::EventChannelInfo& in, JNIEnv* env)
{
  return CF::jni::EventChannelManager::EventChannelInfo::toJObject(in, env);
}

template<>
inline jclass getJClass<CF::EventChannelManager::EventChannelInfo> (JNIEnv* env)
{
  return CF::jni::EventChannelManager::EventChannelInfo::getJClass(env);
}

inline void fromJObject (CF::EventChannelManager::EventChannelInfoList& out, JNIEnv* env, jobject obj)
{
  omnijni::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::EventChannelManager::EventChannelInfoList& in, JNIEnv* env)
{
  return omnijni::toJObject(in, env);
}

inline void fromJObject (CF::EventChannelManager::EventRegistrant& out, JNIEnv* env, jobject obj)
{
  CF::jni::EventChannelManager::EventRegistrant::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::EventChannelManager::EventRegistrant& in, JNIEnv* env)
{
  return CF::jni::EventChannelManager::EventRegistrant::toJObject(in, env);
}

template<>
inline jclass getJClass<CF::EventChannelManager::EventRegistrant> (JNIEnv* env)
{
  return CF::jni::EventChannelManager::EventRegistrant::getJClass(env);
}

inline void fromJObject (CF::EventChannelManager::EventRegistrantList& out, JNIEnv* env, jobject obj)
{
  omnijni::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::EventChannelManager::EventRegistrantList& in, JNIEnv* env)
{
  return omnijni::toJObject(in, env);
}

inline void fromJObject (CF::EventChannelManager::EventRegistration& out, JNIEnv* env, jobject obj)
{
  CF::jni::EventChannelManager::EventRegistration::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::EventChannelManager::EventRegistration& in, JNIEnv* env)
{
  return CF::jni::EventChannelManager::EventRegistration::toJObject(in, env);
}

template<>
inline jclass getJClass<CF::EventChannelManager::EventRegistration> (JNIEnv* env)
{
  return CF::jni::EventChannelManager::EventRegistration::getJClass(env);
}

inline void fromJObject (CF::EventChannelManager::EventChannelReg& out, JNIEnv* env, jobject obj)
{
  CF::jni::EventChannelManager::EventChannelReg::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::EventChannelManager::EventChannelReg& in, JNIEnv* env)
{
  return CF::jni::EventChannelManager::EventChannelReg::toJObject(in, env);
}

template<>
inline jclass getJClass<CF::EventChannelManager::EventChannelReg> (JNIEnv* env)
{
  return CF::jni::EventChannelManager::EventChannelReg::getJClass(env);
}

inline void fromJObject (CF::EventChannelManager::PublisherReg& out, JNIEnv* env, jobject obj)
{
  CF::jni::EventChannelManager::PublisherReg::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::EventChannelManager::PublisherReg& in, JNIEnv* env)
{
  return CF::jni::EventChannelManager::PublisherReg::toJObject(in, env);
}

template<>
inline jclass getJClass<CF::EventChannelManager::PublisherReg> (JNIEnv* env)
{
  return CF::jni::EventChannelManager::PublisherReg::getJClass(env);
}

inline void fromJObject (CF::EventChannelManager_out out, JNIEnv* env, jobject obj)
{
  CF::jni::EventChannelManager::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::EventChannelManager_ptr in, JNIEnv* env)
{
  return CF::jni::EventChannelManager::toJObject(in, env);
}

template<>
inline jclass getJClass<CF::EventChannelManagerRef> (JNIEnv* env)
{
  return CF::jni::EventChannelManager::getJClass(env);
}

inline void fromJObject (CF::EventChannelInfoIterator_out out, JNIEnv* env, jobject obj)
{
  CF::jni::EventChannelInfoIterator::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::EventChannelInfoIterator_ptr in, JNIEnv* env)
{
  return CF::jni::EventChannelInfoIterator::toJObject(in, env);
}

template<>
inline jclass getJClass<CF::EventChannelInfoIteratorRef> (JNIEnv* env)
{
  return CF::jni::EventChannelInfoIterator::getJClass(env);
}

inline void fromJObject (CF::EventRegistrantIterator_out out, JNIEnv* env, jobject obj)
{
  CF::jni::EventRegistrantIterator::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::EventRegistrantIterator_ptr in, JNIEnv* env)
{
  return CF::jni::EventRegistrantIterator::toJObject(in, env);
}

template<>
inline jclass getJClass<CF::EventRegistrantIteratorRef> (JNIEnv* env)
{
  return CF::jni::EventRegistrantIterator::getJClass(env);
}


#endif // __JNI_EVENTCHANNELMANAGER_H__
