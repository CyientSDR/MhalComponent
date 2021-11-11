#ifndef __JNI_BIO_DATAVITA49_H__
#define __JNI_BIO_DATAVITA49_H__

#include <jni.h>
#include <omnijni/omnijni.h>
#include <BULKIO/bio_dataVITA49.h>
#include <ossie/BULKIO/jni_bio_runtimeStats.h>

namespace BULKIO {
  namespace jni {
    class VITA49DataDigraph
    {
      public:
      static void fromJObject (BULKIO::VITA49DataDigraph& out, JNIEnv* env, jobject obj);
      static jobject toJObject (BULKIO::VITA49DataDigraph in, JNIEnv* env);

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
      VITA49DataDigraph();
      ~VITA49DataDigraph();
      static jclass cls_;
      static jmethodID from_int_;
      static jmethodID value_;
    };

    class TransportProtocol
    {
      public:
      static void fromJObject (BULKIO::TransportProtocol& out, JNIEnv* env, jobject obj);
      static jobject toJObject (BULKIO::TransportProtocol in, JNIEnv* env);

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
      TransportProtocol();
      ~TransportProtocol();
      static jclass cls_;
      static jmethodID from_int_;
      static jmethodID value_;
    };

    class VITA49DataComplexity
    {
      public:
      static void fromJObject (BULKIO::VITA49DataComplexity& out, JNIEnv* env, jobject obj);
      static jobject toJObject (BULKIO::VITA49DataComplexity in, JNIEnv* env);

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
      VITA49DataComplexity();
      ~VITA49DataComplexity();
      static jclass cls_;
      static jmethodID from_int_;
      static jmethodID value_;
    };

    class VITA49DataPacketPayloadFormat
    {
      public:
      static void fromJObject (BULKIO::VITA49DataPacketPayloadFormat& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const BULKIO::VITA49DataPacketPayloadFormat& in, JNIEnv* env);

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
      VITA49DataPacketPayloadFormat();
      ~VITA49DataPacketPayloadFormat();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID fid_[10];
    };

    class VITA49DataPacketPayloadFormatHolder
    {
      public:
      static void fromJObject (BULKIO::VITA49DataPacketPayloadFormat& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const BULKIO::VITA49DataPacketPayloadFormat& in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, const BULKIO::VITA49DataPacketPayloadFormat& value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      VITA49DataPacketPayloadFormatHolder();
      ~VITA49DataPacketPayloadFormatHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class VITA49StreamDefinition
    {
      public:
      static void fromJObject (BULKIO::VITA49StreamDefinition& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const BULKIO::VITA49StreamDefinition& in, JNIEnv* env);

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
      VITA49StreamDefinition();
      ~VITA49StreamDefinition();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID fid_[7];
    };

    class VITA49StreamDefinitionHolder
    {
      public:
      static void fromJObject (BULKIO::VITA49StreamDefinition& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const BULKIO::VITA49StreamDefinition& in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, const BULKIO::VITA49StreamDefinition& value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      VITA49StreamDefinitionHolder();
      ~VITA49StreamDefinitionHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class VITA49StreamSequence
    {
      public:
      static inline void fromJObject (BULKIO::VITA49StreamSequence& out, JNIEnv* env, jobject obj)
      {
        omnijni::fromJObject(out, env, obj);
      }
      static inline jobject toJObject (BULKIO::VITA49StreamSequence in, JNIEnv* env)
      {
        return omnijni::toJObject(in, env);
      }
    };

    class VITA49StreamSequenceHolder
    {
      public:
      static void fromJObject (BULKIO::VITA49StreamSequence& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const BULKIO::VITA49StreamSequence& in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, const BULKIO::VITA49StreamSequence& value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      VITA49StreamSequenceHolder();
      ~VITA49StreamSequenceHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class dataVITA49POA : public virtual omnijni::Servant, public virtual POA_BULKIO::dataVITA49, public virtual BULKIO::jni::ProvidesPortStatisticsProviderPOA
    {
      public:
      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      BULKIO::dataVITA49::InputUsageState usageState ();
      BULKIO::VITA49StreamSequence* attachedStreams ();
      BULKIO::StringSequence* attachmentIds ();
      char* attach (const BULKIO::VITA49StreamDefinition& stream, const char* userid);
      void detach (const char* attachId);
      BULKIO::VITA49StreamDefinition* getStreamDefinition (const char* attachId);
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

    class dataVITA49
    {
      public:
      class InputUsageState
      {
        public:
        static void fromJObject (BULKIO::dataVITA49::InputUsageState& out, JNIEnv* env, jobject obj);
        static jobject toJObject (BULKIO::dataVITA49::InputUsageState in, JNIEnv* env);

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
        static void fromJObject (BULKIO::dataVITA49::AttachError& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const BULKIO::dataVITA49::AttachError& in, JNIEnv* env);

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
        static void fromJObject (BULKIO::dataVITA49::DetachError& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const BULKIO::dataVITA49::DetachError& in, JNIEnv* env);

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
        static void fromJObject (BULKIO::dataVITA49::StreamInputError& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const BULKIO::dataVITA49::StreamInputError& in, JNIEnv* env);

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

      static void fromJObject (BULKIO::dataVITA49_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (BULKIO::dataVITA49_ptr in, JNIEnv* env);

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
      dataVITA49();
      ~dataVITA49();
      static jclass cls_;
      static jmethodID ctor_;
    };

    class dataVITA49Holder
    {
      public:
      static void fromJObject (BULKIO::dataVITA49_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (BULKIO::dataVITA49_ptr in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, BULKIO::dataVITA49_ptr value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      dataVITA49Holder();
      ~dataVITA49Holder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

  }
}

inline void fromJObject (BULKIO::VITA49DataDigraph& out, JNIEnv* env, jobject obj)
{
  BULKIO::jni::VITA49DataDigraph::fromJObject(out, env, obj);
}

inline jobject toJObject (const BULKIO::VITA49DataDigraph in, JNIEnv* env)
{
  return BULKIO::jni::VITA49DataDigraph::toJObject(in, env);
}

template<>
inline jclass getJClass<BULKIO::VITA49DataDigraph> (JNIEnv* env)
{
  return BULKIO::jni::VITA49DataDigraph::getJClass(env);
}

inline void fromJObject (BULKIO::TransportProtocol& out, JNIEnv* env, jobject obj)
{
  BULKIO::jni::TransportProtocol::fromJObject(out, env, obj);
}

inline jobject toJObject (const BULKIO::TransportProtocol in, JNIEnv* env)
{
  return BULKIO::jni::TransportProtocol::toJObject(in, env);
}

template<>
inline jclass getJClass<BULKIO::TransportProtocol> (JNIEnv* env)
{
  return BULKIO::jni::TransportProtocol::getJClass(env);
}

inline void fromJObject (BULKIO::VITA49DataComplexity& out, JNIEnv* env, jobject obj)
{
  BULKIO::jni::VITA49DataComplexity::fromJObject(out, env, obj);
}

inline jobject toJObject (const BULKIO::VITA49DataComplexity in, JNIEnv* env)
{
  return BULKIO::jni::VITA49DataComplexity::toJObject(in, env);
}

template<>
inline jclass getJClass<BULKIO::VITA49DataComplexity> (JNIEnv* env)
{
  return BULKIO::jni::VITA49DataComplexity::getJClass(env);
}

inline void fromJObject (BULKIO::VITA49DataPacketPayloadFormat& out, JNIEnv* env, jobject obj)
{
  BULKIO::jni::VITA49DataPacketPayloadFormat::fromJObject(out, env, obj);
}

inline jobject toJObject (const BULKIO::VITA49DataPacketPayloadFormat& in, JNIEnv* env)
{
  return BULKIO::jni::VITA49DataPacketPayloadFormat::toJObject(in, env);
}

template<>
inline jclass getJClass<BULKIO::VITA49DataPacketPayloadFormat> (JNIEnv* env)
{
  return BULKIO::jni::VITA49DataPacketPayloadFormat::getJClass(env);
}

inline void fromJObject (BULKIO::VITA49StreamDefinition& out, JNIEnv* env, jobject obj)
{
  BULKIO::jni::VITA49StreamDefinition::fromJObject(out, env, obj);
}

inline jobject toJObject (const BULKIO::VITA49StreamDefinition& in, JNIEnv* env)
{
  return BULKIO::jni::VITA49StreamDefinition::toJObject(in, env);
}

template<>
inline jclass getJClass<BULKIO::VITA49StreamDefinition> (JNIEnv* env)
{
  return BULKIO::jni::VITA49StreamDefinition::getJClass(env);
}

inline void fromJObject (BULKIO::VITA49StreamSequence& out, JNIEnv* env, jobject obj)
{
  omnijni::fromJObject(out, env, obj);
}

inline jobject toJObject (const BULKIO::VITA49StreamSequence& in, JNIEnv* env)
{
  return omnijni::toJObject(in, env);
}

inline void fromJObject (BULKIO::dataVITA49::InputUsageState& out, JNIEnv* env, jobject obj)
{
  BULKIO::jni::dataVITA49::InputUsageState::fromJObject(out, env, obj);
}

inline jobject toJObject (const BULKIO::dataVITA49::InputUsageState in, JNIEnv* env)
{
  return BULKIO::jni::dataVITA49::InputUsageState::toJObject(in, env);
}

template<>
inline jclass getJClass<BULKIO::dataVITA49::InputUsageState> (JNIEnv* env)
{
  return BULKIO::jni::dataVITA49::InputUsageState::getJClass(env);
}

inline void fromJObject (BULKIO::dataVITA49_out out, JNIEnv* env, jobject obj)
{
  BULKIO::jni::dataVITA49::fromJObject(out, env, obj);
}

inline jobject toJObject (const BULKIO::dataVITA49_ptr in, JNIEnv* env)
{
  return BULKIO::jni::dataVITA49::toJObject(in, env);
}

template<>
inline jclass getJClass<BULKIO::dataVITA49Ref> (JNIEnv* env)
{
  return BULKIO::jni::dataVITA49::getJClass(env);
}


#endif // __JNI_BIO_DATAVITA49_H__
