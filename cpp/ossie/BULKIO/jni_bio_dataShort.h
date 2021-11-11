#ifndef __JNI_BIO_DATASHORT_H__
#define __JNI_BIO_DATASHORT_H__

#include <jni.h>
#include <omnijni/omnijni.h>
#include <BULKIO/bio_dataShort.h>
#include <ossie/BULKIO/jni_bio_runtimeStats.h>
#include <ossie/BULKIO/jni_bio_updateSRI.h>

namespace BULKIO {
  namespace jni {
    class dataShortPOA : public virtual omnijni::Servant, public virtual POA_BULKIO::dataShort, public virtual BULKIO::jni::ProvidesPortStatisticsProviderPOA, public virtual BULKIO::jni::updateSRIPOA
    {
      public:
      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      void pushPacket (const PortTypes::ShortSequence& data, const BULKIO::PrecisionUTCTime& T, CORBA::Boolean EOS, const char* streamID);

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

    class dataShort
    {
      public:
      static void fromJObject (BULKIO::dataShort_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (BULKIO::dataShort_ptr in, JNIEnv* env);

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
      dataShort();
      ~dataShort();
      static jclass cls_;
      static jmethodID ctor_;
    };

    class dataShortHolder
    {
      public:
      static void fromJObject (BULKIO::dataShort_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (BULKIO::dataShort_ptr in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, BULKIO::dataShort_ptr value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      dataShortHolder();
      ~dataShortHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

  }
}

inline void fromJObject (BULKIO::dataShort_out out, JNIEnv* env, jobject obj)
{
  BULKIO::jni::dataShort::fromJObject(out, env, obj);
}

inline jobject toJObject (const BULKIO::dataShort_ptr in, JNIEnv* env)
{
  return BULKIO::jni::dataShort::toJObject(in, env);
}

template<>
inline jclass getJClass<BULKIO::dataShortRef> (JNIEnv* env)
{
  return BULKIO::jni::dataShort::getJClass(env);
}


#endif // __JNI_BIO_DATASHORT_H__
