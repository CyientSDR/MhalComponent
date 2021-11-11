#ifndef __JNI_BIO_DATALONG_H__
#define __JNI_BIO_DATALONG_H__

#include <jni.h>
#include <omnijni/omnijni.h>
#include <BULKIO/bio_dataLong.h>
#include <ossie/BULKIO/jni_bio_runtimeStats.h>
#include <ossie/BULKIO/jni_bio_updateSRI.h>

namespace BULKIO {
  namespace jni {
    class dataLongPOA : public virtual omnijni::Servant, public virtual POA_BULKIO::dataLong, public virtual BULKIO::jni::ProvidesPortStatisticsProviderPOA, public virtual BULKIO::jni::updateSRIPOA
    {
      public:
      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      void pushPacket (const PortTypes::LongSequence& data, const BULKIO::PrecisionUTCTime& T, CORBA::Boolean EOS, const char* streamID);

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

    class dataLong
    {
      public:
      static void fromJObject (BULKIO::dataLong_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (BULKIO::dataLong_ptr in, JNIEnv* env);

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
      dataLong();
      ~dataLong();
      static jclass cls_;
      static jmethodID ctor_;
    };

    class dataLongHolder
    {
      public:
      static void fromJObject (BULKIO::dataLong_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (BULKIO::dataLong_ptr in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, BULKIO::dataLong_ptr value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      dataLongHolder();
      ~dataLongHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

  }
}

inline void fromJObject (BULKIO::dataLong_out out, JNIEnv* env, jobject obj)
{
  BULKIO::jni::dataLong::fromJObject(out, env, obj);
}

inline jobject toJObject (const BULKIO::dataLong_ptr in, JNIEnv* env)
{
  return BULKIO::jni::dataLong::toJObject(in, env);
}

template<>
inline jclass getJClass<BULKIO::dataLongRef> (JNIEnv* env)
{
  return BULKIO::jni::dataLong::getJClass(env);
}


#endif // __JNI_BIO_DATALONG_H__
