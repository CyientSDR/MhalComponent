#ifndef __JNI_BIO_DATAOCTET_H__
#define __JNI_BIO_DATAOCTET_H__

#include <jni.h>
#include <omnijni/omnijni.h>
#include <BULKIO/bio_dataOctet.h>
#include <ossie/BULKIO/jni_bio_runtimeStats.h>
#include <ossie/BULKIO/jni_bio_updateSRI.h>

namespace BULKIO {
  namespace jni {
    class dataOctetPOA : public virtual omnijni::Servant, public virtual POA_BULKIO::dataOctet, public virtual BULKIO::jni::ProvidesPortStatisticsProviderPOA, public virtual BULKIO::jni::updateSRIPOA
    {
      public:
      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      void pushPacket (const CF::OctetSequence& data, const BULKIO::PrecisionUTCTime& T, CORBA::Boolean EOS, const char* streamID);

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

    class dataOctet
    {
      public:
      static void fromJObject (BULKIO::dataOctet_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (BULKIO::dataOctet_ptr in, JNIEnv* env);

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
      dataOctet();
      ~dataOctet();
      static jclass cls_;
      static jmethodID ctor_;
    };

    class dataOctetHolder
    {
      public:
      static void fromJObject (BULKIO::dataOctet_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (BULKIO::dataOctet_ptr in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, BULKIO::dataOctet_ptr value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      dataOctetHolder();
      ~dataOctetHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

  }
}

inline void fromJObject (BULKIO::dataOctet_out out, JNIEnv* env, jobject obj)
{
  BULKIO::jni::dataOctet::fromJObject(out, env, obj);
}

inline jobject toJObject (const BULKIO::dataOctet_ptr in, JNIEnv* env)
{
  return BULKIO::jni::dataOctet::toJObject(in, env);
}

template<>
inline jclass getJClass<BULKIO::dataOctetRef> (JNIEnv* env)
{
  return BULKIO::jni::dataOctet::getJClass(env);
}


#endif // __JNI_BIO_DATAOCTET_H__
