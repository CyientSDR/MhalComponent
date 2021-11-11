#ifndef __JNI_BIO_DATAFLOAT_H__
#define __JNI_BIO_DATAFLOAT_H__

#include <jni.h>
#include <omnijni/omnijni.h>
#include <BULKIO/bio_dataFloat.h>
#include <ossie/BULKIO/jni_bio_runtimeStats.h>
#include <ossie/BULKIO/jni_bio_updateSRI.h>

namespace BULKIO {
  namespace jni {
    class dataFloatPOA : public virtual omnijni::Servant, public virtual POA_BULKIO::dataFloat, public virtual BULKIO::jni::ProvidesPortStatisticsProviderPOA, public virtual BULKIO::jni::updateSRIPOA
    {
      public:
      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      void pushPacket (const PortTypes::FloatSequence& data, const BULKIO::PrecisionUTCTime& T, CORBA::Boolean EOS, const char* streamID);

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

    class dataFloat
    {
      public:
      static void fromJObject (BULKIO::dataFloat_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (BULKIO::dataFloat_ptr in, JNIEnv* env);

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
      dataFloat();
      ~dataFloat();
      static jclass cls_;
      static jmethodID ctor_;
    };

    class dataFloatHolder
    {
      public:
      static void fromJObject (BULKIO::dataFloat_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (BULKIO::dataFloat_ptr in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, BULKIO::dataFloat_ptr value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      dataFloatHolder();
      ~dataFloatHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

  }
}

inline void fromJObject (BULKIO::dataFloat_out out, JNIEnv* env, jobject obj)
{
  BULKIO::jni::dataFloat::fromJObject(out, env, obj);
}

inline jobject toJObject (const BULKIO::dataFloat_ptr in, JNIEnv* env)
{
  return BULKIO::jni::dataFloat::toJObject(in, env);
}

template<>
inline jclass getJClass<BULKIO::dataFloatRef> (JNIEnv* env)
{
  return BULKIO::jni::dataFloat::getJClass(env);
}


#endif // __JNI_BIO_DATAFLOAT_H__
