#ifndef __JNI_BIO_DATASDDS_H__
#define __JNI_BIO_DATASDDS_H__

#include <jni.h>
#include <omnijni/omnijni.h>
#include <BULKIO/bio_dataSDDS.h>
#include <ossie/BULKIO/jni_bio_runtimeStats.h>

namespace BULKIO {
  namespace jni {
    class SDDSDataDigraph
    {
      public:
      static void fromJObject (BULKIO::SDDSDataDigraph& out, JNIEnv* env, jobject obj);
      static jobject toJObject (BULKIO::SDDSDataDigraph in, JNIEnv* env);

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
      SDDSDataDigraph();
      ~SDDSDataDigraph();
      static jclass cls_;
      static jmethodID from_int_;
      static jmethodID value_;
    };

    class SDDSStreamDefinition
    {
      public:
      static void fromJObject (BULKIO::SDDSStreamDefinition& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const BULKIO::SDDSStreamDefinition& in, JNIEnv* env);

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
      SDDSStreamDefinition();
      ~SDDSStreamDefinition();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID fid_[8];
    };

    class SDDSStreamDefinitionHolder
    {
      public:
      static void fromJObject (BULKIO::SDDSStreamDefinition& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const BULKIO::SDDSStreamDefinition& in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, const BULKIO::SDDSStreamDefinition& value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      SDDSStreamDefinitionHolder();
      ~SDDSStreamDefinitionHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class SDDSStreamSequence
    {
      public:
      static inline void fromJObject (BULKIO::SDDSStreamSequence& out, JNIEnv* env, jobject obj)
      {
        omnijni::fromJObject(out, env, obj);
      }
      static inline jobject toJObject (BULKIO::SDDSStreamSequence in, JNIEnv* env)
      {
        return omnijni::toJObject(in, env);
      }
    };

    class SDDSStreamSequenceHolder
    {
      public:
      static void fromJObject (BULKIO::SDDSStreamSequence& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const BULKIO::SDDSStreamSequence& in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, const BULKIO::SDDSStreamSequence& value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      SDDSStreamSequenceHolder();
      ~SDDSStreamSequenceHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class dataSDDSPOA : public virtual omnijni::Servant, public virtual POA_BULKIO::dataSDDS, public virtual BULKIO::jni::ProvidesPortStatisticsProviderPOA
    {
      public:
      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      BULKIO::dataSDDS::InputUsageState usageState ();
      BULKIO::SDDSStreamSequence* attachedStreams ();
      BULKIO::StringSequence* attachmentIds ();
      char* attach (const BULKIO::SDDSStreamDefinition& stream, const char* userid);
      void detach (const char* attachId);
      BULKIO::SDDSStreamDefinition* getStreamDefinition (const char* attachId);
      char* getUser (const char* attachId);
      BULKIO::StreamSRISequence* attachedSRIs ();
      void pushSRI (const BULKIO::StreamSRI& H, const BULKIO::PrecisionUTCTime& T);

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

    class dataSDDS
    {
      public:
      class InputUsageState
      {
        public:
        static void fromJObject (BULKIO::dataSDDS::InputUsageState& out, JNIEnv* env, jobject obj);
        static jobject toJObject (BULKIO::dataSDDS::InputUsageState in, JNIEnv* env);

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
        InputUsageState();
        ~InputUsageState();
        static jclass cls_;
        static jmethodID from_int_;
        static jmethodID value_;
      };

      class AttachError
      {
        public:
        static void fromJObject (BULKIO::dataSDDS::AttachError& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const BULKIO::dataSDDS::AttachError& in, JNIEnv* env);

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
        AttachError();
        ~AttachError();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID fid_[1];
      };

      class DetachError
      {
        public:
        static void fromJObject (BULKIO::dataSDDS::DetachError& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const BULKIO::dataSDDS::DetachError& in, JNIEnv* env);

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
        DetachError();
        ~DetachError();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID fid_[1];
      };

      class StreamInputError
      {
        public:
        static void fromJObject (BULKIO::dataSDDS::StreamInputError& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const BULKIO::dataSDDS::StreamInputError& in, JNIEnv* env);

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
        StreamInputError();
        ~StreamInputError();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID fid_[1];
      };

      static void fromJObject (BULKIO::dataSDDS_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (BULKIO::dataSDDS_ptr in, JNIEnv* env);

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
      dataSDDS();
      ~dataSDDS();
      static jclass cls_;
      static jmethodID ctor_;
    };

    class dataSDDSHolder
    {
      public:
      static void fromJObject (BULKIO::dataSDDS_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (BULKIO::dataSDDS_ptr in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, BULKIO::dataSDDS_ptr value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      dataSDDSHolder();
      ~dataSDDSHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

  }
}

inline void fromJObject (BULKIO::SDDSDataDigraph& out, JNIEnv* env, jobject obj)
{
  BULKIO::jni::SDDSDataDigraph::fromJObject(out, env, obj);
}

inline jobject toJObject (const BULKIO::SDDSDataDigraph in, JNIEnv* env)
{
  return BULKIO::jni::SDDSDataDigraph::toJObject(in, env);
}

template<>
inline jclass getJClass<BULKIO::SDDSDataDigraph> (JNIEnv* env)
{
  return BULKIO::jni::SDDSDataDigraph::getJClass(env);
}

inline void fromJObject (BULKIO::SDDSStreamDefinition& out, JNIEnv* env, jobject obj)
{
  BULKIO::jni::SDDSStreamDefinition::fromJObject(out, env, obj);
}

inline jobject toJObject (const BULKIO::SDDSStreamDefinition& in, JNIEnv* env)
{
  return BULKIO::jni::SDDSStreamDefinition::toJObject(in, env);
}

template<>
inline jclass getJClass<BULKIO::SDDSStreamDefinition> (JNIEnv* env)
{
  return BULKIO::jni::SDDSStreamDefinition::getJClass(env);
}

inline void fromJObject (BULKIO::SDDSStreamSequence& out, JNIEnv* env, jobject obj)
{
  omnijni::fromJObject(out, env, obj);
}

inline jobject toJObject (const BULKIO::SDDSStreamSequence& in, JNIEnv* env)
{
  return omnijni::toJObject(in, env);
}

inline void fromJObject (BULKIO::dataSDDS::InputUsageState& out, JNIEnv* env, jobject obj)
{
  BULKIO::jni::dataSDDS::InputUsageState::fromJObject(out, env, obj);
}

inline jobject toJObject (const BULKIO::dataSDDS::InputUsageState in, JNIEnv* env)
{
  return BULKIO::jni::dataSDDS::InputUsageState::toJObject(in, env);
}

template<>
inline jclass getJClass<BULKIO::dataSDDS::InputUsageState> (JNIEnv* env)
{
  return BULKIO::jni::dataSDDS::InputUsageState::getJClass(env);
}

inline void fromJObject (BULKIO::dataSDDS_out out, JNIEnv* env, jobject obj)
{
  BULKIO::jni::dataSDDS::fromJObject(out, env, obj);
}

inline jobject toJObject (const BULKIO::dataSDDS_ptr in, JNIEnv* env)
{
  return BULKIO::jni::dataSDDS::toJObject(in, env);
}

template<>
inline jclass getJClass<BULKIO::dataSDDSRef> (JNIEnv* env)
{
  return BULKIO::jni::dataSDDS::getJClass(env);
}


#endif // __JNI_BIO_DATASDDS_H__
