#ifndef __JNI_BIO_DATAXML_H__
#define __JNI_BIO_DATAXML_H__

#include <jni.h>
#include <omnijni/omnijni.h>
#include <BULKIO/bio_dataXML.h>
#include <ossie/BULKIO/jni_bio_runtimeStats.h>
#include <ossie/BULKIO/jni_bio_updateSRI.h>

namespace BULKIO {
  namespace jni {
    class dataXMLPOA : public virtual omnijni::Servant, public virtual POA_BULKIO::dataXML, public virtual BULKIO::jni::ProvidesPortStatisticsProviderPOA, public virtual BULKIO::jni::updateSRIPOA
    {
      public:
      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      void pushPacket (const char* xml_string, CORBA::Boolean EOS, const char* streamID);

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

    class dataXML
    {
      public:
      static void fromJObject (BULKIO::dataXML_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (BULKIO::dataXML_ptr in, JNIEnv* env);

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
      dataXML();
      ~dataXML();
      static jclass cls_;
      static jmethodID ctor_;
    };

    class dataXMLHolder
    {
      public:
      static void fromJObject (BULKIO::dataXML_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (BULKIO::dataXML_ptr in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, BULKIO::dataXML_ptr value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      dataXMLHolder();
      ~dataXMLHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

  }
}

inline void fromJObject (BULKIO::dataXML_out out, JNIEnv* env, jobject obj)
{
  BULKIO::jni::dataXML::fromJObject(out, env, obj);
}

inline jobject toJObject (const BULKIO::dataXML_ptr in, JNIEnv* env)
{
  return BULKIO::jni::dataXML::toJObject(in, env);
}

template<>
inline jclass getJClass<BULKIO::dataXMLRef> (JNIEnv* env)
{
  return BULKIO::jni::dataXML::getJClass(env);
}


#endif // __JNI_BIO_DATAXML_H__
