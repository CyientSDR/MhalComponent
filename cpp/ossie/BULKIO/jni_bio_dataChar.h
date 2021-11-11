#ifndef __JNI_BIO_DATACHAR_H__
#define __JNI_BIO_DATACHAR_H__

#include <jni.h>
#include <omnijni/omnijni.h>
#include <BULKIO/bio_dataChar.h>
#include <ossie/BULKIO/jni_bio_runtimeStats.h>
#include <ossie/BULKIO/jni_bio_updateSRI.h>

namespace BULKIO {
  namespace jni {
    class dataCharPOA : public virtual omnijni::Servant, public virtual POA_BULKIO::dataChar, public virtual BULKIO::jni::ProvidesPortStatisticsProviderPOA, public virtual BULKIO::jni::updateSRIPOA
    {
      public:
      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      void pushPacket (const PortTypes::CharSequence& data, const BULKIO::PrecisionUTCTime& T, CORBA::Boolean EOS, const char* streamID);

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

    class dataChar
    {
      public:
      static void fromJObject (BULKIO::dataChar_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (BULKIO::dataChar_ptr in, JNIEnv* env);

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
      dataChar();
      ~dataChar();
      static jclass cls_;
      static jmethodID ctor_;
    };

    class dataCharHolder
    {
      public:
      static void fromJObject (BULKIO::dataChar_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (BULKIO::dataChar_ptr in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, BULKIO::dataChar_ptr value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      dataCharHolder();
      ~dataCharHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

  }
}

inline void fromJObject (BULKIO::dataChar_out out, JNIEnv* env, jobject obj)
{
  BULKIO::jni::dataChar::fromJObject(out, env, obj);
}

inline jobject toJObject (const BULKIO::dataChar_ptr in, JNIEnv* env)
{
  return BULKIO::jni::dataChar::toJObject(in, env);
}

template<>
inline jclass getJClass<BULKIO::dataCharRef> (JNIEnv* env)
{
  return BULKIO::jni::dataChar::getJClass(env);
}


#endif // __JNI_BIO_DATACHAR_H__
