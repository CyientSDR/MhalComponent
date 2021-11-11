#ifndef __JNI_BIO_DATABIT_H__
#define __JNI_BIO_DATABIT_H__

#include <jni.h>
#include <omnijni/omnijni.h>
#include <BULKIO/bio_dataBit.h>
#include <ossie/BULKIO/jni_bio_runtimeStats.h>
#include <ossie/BULKIO/jni_bio_updateSRI.h>

namespace BULKIO {
  namespace jni {
    class BitSequence
    {
      public:
      static void fromJObject (BULKIO::BitSequence& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const BULKIO::BitSequence& in, JNIEnv* env);

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
      BitSequence();
      ~BitSequence();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID fid_[2];
    };

    class BitSequenceHolder
    {
      public:
      static void fromJObject (BULKIO::BitSequence& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const BULKIO::BitSequence& in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, const BULKIO::BitSequence& value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      BitSequenceHolder();
      ~BitSequenceHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class dataBitPOA : public virtual omnijni::Servant, public virtual POA_BULKIO::dataBit, public virtual BULKIO::jni::ProvidesPortStatisticsProviderPOA, public virtual BULKIO::jni::updateSRIPOA
    {
      public:
      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      void pushPacket (const BULKIO::BitSequence& data, const BULKIO::PrecisionUTCTime& T, CORBA::Boolean EOS, const char* streamID);

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
      static jmethodID mid_[1];
    };

    class dataBit
    {
      public:
      static void fromJObject (BULKIO::dataBit_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (BULKIO::dataBit_ptr in, JNIEnv* env);

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
      dataBit();
      ~dataBit();
      static jclass cls_;
      static jmethodID ctor_;
    };

    class dataBitHolder
    {
      public:
      static void fromJObject (BULKIO::dataBit_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (BULKIO::dataBit_ptr in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, BULKIO::dataBit_ptr value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      dataBitHolder();
      ~dataBitHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

  }
}

inline void fromJObject (BULKIO::BitSequence& out, JNIEnv* env, jobject obj)
{
  BULKIO::jni::BitSequence::fromJObject(out, env, obj);
}

inline jobject toJObject (const BULKIO::BitSequence& in, JNIEnv* env)
{
  return BULKIO::jni::BitSequence::toJObject(in, env);
}

template<>
inline jclass getJClass<BULKIO::BitSequence> (JNIEnv* env)
{
  return BULKIO::jni::BitSequence::getJClass(env);
}

inline void fromJObject (BULKIO::dataBit_out out, JNIEnv* env, jobject obj)
{
  BULKIO::jni::dataBit::fromJObject(out, env, obj);
}

inline jobject toJObject (const BULKIO::dataBit_ptr in, JNIEnv* env)
{
  return BULKIO::jni::dataBit::toJObject(in, env);
}

template<>
inline jclass getJClass<BULKIO::dataBitRef> (JNIEnv* env)
{
  return BULKIO::jni::dataBit::getJClass(env);
}


#endif // __JNI_BIO_DATABIT_H__
