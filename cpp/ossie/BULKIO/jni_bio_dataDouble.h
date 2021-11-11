#ifndef __JNI_BIO_DATADOUBLE_H__
#define __JNI_BIO_DATADOUBLE_H__

#include <jni.h>
#include <omnijni/omnijni.h>
#include <BULKIO/bio_dataDouble.h>
#include <ossie/BULKIO/jni_bio_runtimeStats.h>
#include <ossie/BULKIO/jni_bio_updateSRI.h>

namespace BULKIO {
  namespace jni {
    class dataDoublePOA : public virtual omnijni::Servant, public virtual POA_BULKIO::dataDouble, public virtual BULKIO::jni::ProvidesPortStatisticsProviderPOA, public virtual BULKIO::jni::updateSRIPOA
    {
      public:
      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      void pushPacket (const PortTypes::DoubleSequence& data, const BULKIO::PrecisionUTCTime& T, CORBA::Boolean EOS, const char* streamID);

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

    class dataDouble
    {
      public:
      static void fromJObject (BULKIO::dataDouble_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (BULKIO::dataDouble_ptr in, JNIEnv* env);

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
      dataDouble();
      ~dataDouble();
      static jclass cls_;
      static jmethodID ctor_;
    };

    class dataDoubleHolder
    {
      public:
      static void fromJObject (BULKIO::dataDouble_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (BULKIO::dataDouble_ptr in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, BULKIO::dataDouble_ptr value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      dataDoubleHolder();
      ~dataDoubleHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

  }
}

inline void fromJObject (BULKIO::dataDouble_out out, JNIEnv* env, jobject obj)
{
  BULKIO::jni::dataDouble::fromJObject(out, env, obj);
}

inline jobject toJObject (const BULKIO::dataDouble_ptr in, JNIEnv* env)
{
  return BULKIO::jni::dataDouble::toJObject(in, env);
}

template<>
inline jclass getJClass<BULKIO::dataDoubleRef> (JNIEnv* env)
{
  return BULKIO::jni::dataDouble::getJClass(env);
}


#endif // __JNI_BIO_DATADOUBLE_H__
