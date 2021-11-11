#ifndef __JNI_BIO_DATAUSHORT_H__
#define __JNI_BIO_DATAUSHORT_H__

#include <jni.h>
#include <omnijni/omnijni.h>
#include <BULKIO/bio_dataUshort.h>
#include <ossie/BULKIO/jni_bio_runtimeStats.h>
#include <ossie/BULKIO/jni_bio_updateSRI.h>

namespace BULKIO {
  namespace jni {
    class dataUshortPOA : public virtual omnijni::Servant, public virtual POA_BULKIO::dataUshort, public virtual BULKIO::jni::ProvidesPortStatisticsProviderPOA, public virtual BULKIO::jni::updateSRIPOA
    {
      public:
      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      void pushPacket (const PortTypes::UshortSequence& data, const BULKIO::PrecisionUTCTime& T, CORBA::Boolean EOS, const char* streamID);

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

    class dataUshort
    {
      public:
      static void fromJObject (BULKIO::dataUshort_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (BULKIO::dataUshort_ptr in, JNIEnv* env);

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
      dataUshort();
      ~dataUshort();
      static jclass cls_;
      static jmethodID ctor_;
    };

    class dataUshortHolder
    {
      public:
      static void fromJObject (BULKIO::dataUshort_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (BULKIO::dataUshort_ptr in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, BULKIO::dataUshort_ptr value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      dataUshortHolder();
      ~dataUshortHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

  }
}

inline void fromJObject (BULKIO::dataUshort_out out, JNIEnv* env, jobject obj)
{
  BULKIO::jni::dataUshort::fromJObject(out, env, obj);
}

inline jobject toJObject (const BULKIO::dataUshort_ptr in, JNIEnv* env)
{
  return BULKIO::jni::dataUshort::toJObject(in, env);
}

template<>
inline jclass getJClass<BULKIO::dataUshortRef> (JNIEnv* env)
{
  return BULKIO::jni::dataUshort::getJClass(env);
}


#endif // __JNI_BIO_DATAUSHORT_H__
