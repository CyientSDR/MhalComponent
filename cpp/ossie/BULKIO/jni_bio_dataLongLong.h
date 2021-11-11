#ifndef __JNI_BIO_DATALONGLONG_H__
#define __JNI_BIO_DATALONGLONG_H__

#include <jni.h>
#include <omnijni/omnijni.h>
#include <BULKIO/bio_dataLongLong.h>
#include <ossie/BULKIO/jni_bio_runtimeStats.h>
#include <ossie/BULKIO/jni_bio_updateSRI.h>

namespace BULKIO {
  namespace jni {
    class dataLongLongPOA : public virtual omnijni::Servant, public virtual POA_BULKIO::dataLongLong, public virtual BULKIO::jni::ProvidesPortStatisticsProviderPOA, public virtual BULKIO::jni::updateSRIPOA
    {
      public:
      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      void pushPacket (const PortTypes::LongLongSequence& data, const BULKIO::PrecisionUTCTime& T, CORBA::Boolean EOS, const char* streamID);

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

    class dataLongLong
    {
      public:
      static void fromJObject (BULKIO::dataLongLong_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (BULKIO::dataLongLong_ptr in, JNIEnv* env);

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
      dataLongLong();
      ~dataLongLong();
      static jclass cls_;
      static jmethodID ctor_;
    };

    class dataLongLongHolder
    {
      public:
      static void fromJObject (BULKIO::dataLongLong_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (BULKIO::dataLongLong_ptr in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, BULKIO::dataLongLong_ptr value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      dataLongLongHolder();
      ~dataLongLongHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

  }
}

inline void fromJObject (BULKIO::dataLongLong_out out, JNIEnv* env, jobject obj)
{
  BULKIO::jni::dataLongLong::fromJObject(out, env, obj);
}

inline jobject toJObject (const BULKIO::dataLongLong_ptr in, JNIEnv* env)
{
  return BULKIO::jni::dataLongLong::toJObject(in, env);
}

template<>
inline jclass getJClass<BULKIO::dataLongLongRef> (JNIEnv* env)
{
  return BULKIO::jni::dataLongLong::getJClass(env);
}


#endif // __JNI_BIO_DATALONGLONG_H__
