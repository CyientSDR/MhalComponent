#ifndef __JNI_BIO_DATAULONG_H__
#define __JNI_BIO_DATAULONG_H__

#include <jni.h>
#include <omnijni/omnijni.h>
#include <BULKIO/bio_dataUlong.h>
#include <ossie/BULKIO/jni_bio_runtimeStats.h>
#include <ossie/BULKIO/jni_bio_updateSRI.h>

namespace BULKIO {
  namespace jni {
    class dataUlongPOA : public virtual omnijni::Servant, public virtual POA_BULKIO::dataUlong, public virtual BULKIO::jni::ProvidesPortStatisticsProviderPOA, public virtual BULKIO::jni::updateSRIPOA
    {
      public:
      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      void pushPacket (const PortTypes::UlongSequence& data, const BULKIO::PrecisionUTCTime& T, CORBA::Boolean EOS, const char* streamID);

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

    class dataUlong
    {
      public:
      static void fromJObject (BULKIO::dataUlong_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (BULKIO::dataUlong_ptr in, JNIEnv* env);

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
      dataUlong();
      ~dataUlong();
      static jclass cls_;
      static jmethodID ctor_;
    };

    class dataUlongHolder
    {
      public:
      static void fromJObject (BULKIO::dataUlong_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (BULKIO::dataUlong_ptr in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, BULKIO::dataUlong_ptr value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      dataUlongHolder();
      ~dataUlongHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

  }
}

inline void fromJObject (BULKIO::dataUlong_out out, JNIEnv* env, jobject obj)
{
  BULKIO::jni::dataUlong::fromJObject(out, env, obj);
}

inline jobject toJObject (const BULKIO::dataUlong_ptr in, JNIEnv* env)
{
  return BULKIO::jni::dataUlong::toJObject(in, env);
}

template<>
inline jclass getJClass<BULKIO::dataUlongRef> (JNIEnv* env)
{
  return BULKIO::jni::dataUlong::getJClass(env);
}


#endif // __JNI_BIO_DATAULONG_H__
