#ifndef __JNI_NEGOTIABLEPORT_H__
#define __JNI_NEGOTIABLEPORT_H__

#include <jni.h>
#include <omnijni/omnijni.h>
#include <ossie/CF/NegotiablePort.h>
#include <ossie/CF/jni_QueryablePort.h>

namespace ExtendedCF {
  namespace jni {
    class NegotiationError
    {
      public:
      static void fromJObject (ExtendedCF::NegotiationError& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const ExtendedCF::NegotiationError& in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void throwIf (JNIEnv* env, jobject obj);
      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      NegotiationError();
      ~NegotiationError();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID fid_[1];
    };

    class TransportInfo
    {
      public:
      static void fromJObject (ExtendedCF::TransportInfo& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const ExtendedCF::TransportInfo& in, JNIEnv* env);

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
      TransportInfo();
      ~TransportInfo();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID fid_[2];
    };

    class TransportInfoHolder
    {
      public:
      static void fromJObject (ExtendedCF::TransportInfo& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const ExtendedCF::TransportInfo& in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, const ExtendedCF::TransportInfo& value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      TransportInfoHolder();
      ~TransportInfoHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class TransportInfoSequence
    {
      public:
      static inline void fromJObject (ExtendedCF::TransportInfoSequence& out, JNIEnv* env, jobject obj)
      {
        omnijni::fromJObject(out, env, obj);
      }
      static inline jobject toJObject (ExtendedCF::TransportInfoSequence in, JNIEnv* env)
      {
        return omnijni::toJObject(in, env);
      }
    };

    class TransportInfoSequenceHolder
    {
      public:
      static void fromJObject (ExtendedCF::TransportInfoSequence& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const ExtendedCF::TransportInfoSequence& in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, const ExtendedCF::TransportInfoSequence& value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      TransportInfoSequenceHolder();
      ~TransportInfoSequenceHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class NegotiablePortPOA : public virtual omnijni::Servant, public virtual POA_ExtendedCF::NegotiablePort
    {
      public:
      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      ExtendedCF::TransportInfoSequence* supportedTransports ();

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

    class NegotiablePort
    {
      public:
      static void fromJObject (ExtendedCF::NegotiablePort_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (ExtendedCF::NegotiablePort_ptr in, JNIEnv* env);

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
      NegotiablePort();
      ~NegotiablePort();
      static jclass cls_;
      static jmethodID ctor_;
    };

    class NegotiablePortHolder
    {
      public:
      static void fromJObject (ExtendedCF::NegotiablePort_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (ExtendedCF::NegotiablePort_ptr in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, ExtendedCF::NegotiablePort_ptr value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      NegotiablePortHolder();
      ~NegotiablePortHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class ConnectionStatus
    {
      public:
      static void fromJObject (ExtendedCF::ConnectionStatus& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const ExtendedCF::ConnectionStatus& in, JNIEnv* env);

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
      ConnectionStatus();
      ~ConnectionStatus();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID fid_[5];
    };

    class ConnectionStatusHolder
    {
      public:
      static void fromJObject (ExtendedCF::ConnectionStatus& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const ExtendedCF::ConnectionStatus& in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, const ExtendedCF::ConnectionStatus& value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      ConnectionStatusHolder();
      ~ConnectionStatusHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class ConnectionStatusSequence
    {
      public:
      static inline void fromJObject (ExtendedCF::ConnectionStatusSequence& out, JNIEnv* env, jobject obj)
      {
        omnijni::fromJObject(out, env, obj);
      }
      static inline jobject toJObject (ExtendedCF::ConnectionStatusSequence in, JNIEnv* env)
      {
        return omnijni::toJObject(in, env);
      }
    };

    class ConnectionStatusSequenceHolder
    {
      public:
      static void fromJObject (ExtendedCF::ConnectionStatusSequence& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const ExtendedCF::ConnectionStatusSequence& in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, const ExtendedCF::ConnectionStatusSequence& value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      ConnectionStatusSequenceHolder();
      ~ConnectionStatusSequenceHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class NegotiableUsesPortPOA : public virtual omnijni::Servant, public virtual POA_ExtendedCF::NegotiableUsesPort, public virtual ExtendedCF::jni::QueryablePortPOA, public virtual ExtendedCF::jni::NegotiablePortPOA
    {
      public:
      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      ExtendedCF::ConnectionStatusSequence* connectionStatus ();

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

    class NegotiableUsesPort
    {
      public:
      static void fromJObject (ExtendedCF::NegotiableUsesPort_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (ExtendedCF::NegotiableUsesPort_ptr in, JNIEnv* env);

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
      NegotiableUsesPort();
      ~NegotiableUsesPort();
      static jclass cls_;
      static jmethodID ctor_;
    };

    class NegotiableUsesPortHolder
    {
      public:
      static void fromJObject (ExtendedCF::NegotiableUsesPort_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (ExtendedCF::NegotiableUsesPort_ptr in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, ExtendedCF::NegotiableUsesPort_ptr value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      NegotiableUsesPortHolder();
      ~NegotiableUsesPortHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class NegotiationResult
    {
      public:
      static void fromJObject (ExtendedCF::NegotiationResult& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const ExtendedCF::NegotiationResult& in, JNIEnv* env);

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
      NegotiationResult();
      ~NegotiationResult();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID fid_[2];
    };

    class NegotiationResultHolder
    {
      public:
      static void fromJObject (ExtendedCF::NegotiationResult& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const ExtendedCF::NegotiationResult& in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, const ExtendedCF::NegotiationResult& value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      NegotiationResultHolder();
      ~NegotiationResultHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class NegotiableProvidesPortPOA : public virtual omnijni::Servant, public virtual POA_ExtendedCF::NegotiableProvidesPort, public virtual ExtendedCF::jni::NegotiablePortPOA
    {
      public:
      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      ExtendedCF::NegotiationResult* negotiateTransport (const char* transportType, const CF::Properties& transportProperties);
      void disconnectTransport (const char* transportId);

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
      static jmethodID mid_[2];
    };

    class NegotiableProvidesPort
    {
      public:
      static void fromJObject (ExtendedCF::NegotiableProvidesPort_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (ExtendedCF::NegotiableProvidesPort_ptr in, JNIEnv* env);

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
      NegotiableProvidesPort();
      ~NegotiableProvidesPort();
      static jclass cls_;
      static jmethodID ctor_;
    };

    class NegotiableProvidesPortHolder
    {
      public:
      static void fromJObject (ExtendedCF::NegotiableProvidesPort_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (ExtendedCF::NegotiableProvidesPort_ptr in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, ExtendedCF::NegotiableProvidesPort_ptr value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      NegotiableProvidesPortHolder();
      ~NegotiableProvidesPortHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

  }
}

inline void fromJObject (ExtendedCF::TransportInfo& out, JNIEnv* env, jobject obj)
{
  ExtendedCF::jni::TransportInfo::fromJObject(out, env, obj);
}

inline jobject toJObject (const ExtendedCF::TransportInfo& in, JNIEnv* env)
{
  return ExtendedCF::jni::TransportInfo::toJObject(in, env);
}

template<>
inline jclass getJClass<ExtendedCF::TransportInfo> (JNIEnv* env)
{
  return ExtendedCF::jni::TransportInfo::getJClass(env);
}

inline void fromJObject (ExtendedCF::TransportInfoSequence& out, JNIEnv* env, jobject obj)
{
  omnijni::fromJObject(out, env, obj);
}

inline jobject toJObject (const ExtendedCF::TransportInfoSequence& in, JNIEnv* env)
{
  return omnijni::toJObject(in, env);
}

inline void fromJObject (ExtendedCF::NegotiablePort_out out, JNIEnv* env, jobject obj)
{
  ExtendedCF::jni::NegotiablePort::fromJObject(out, env, obj);
}

inline jobject toJObject (const ExtendedCF::NegotiablePort_ptr in, JNIEnv* env)
{
  return ExtendedCF::jni::NegotiablePort::toJObject(in, env);
}

template<>
inline jclass getJClass<ExtendedCF::NegotiablePortRef> (JNIEnv* env)
{
  return ExtendedCF::jni::NegotiablePort::getJClass(env);
}

inline void fromJObject (ExtendedCF::ConnectionStatus& out, JNIEnv* env, jobject obj)
{
  ExtendedCF::jni::ConnectionStatus::fromJObject(out, env, obj);
}

inline jobject toJObject (const ExtendedCF::ConnectionStatus& in, JNIEnv* env)
{
  return ExtendedCF::jni::ConnectionStatus::toJObject(in, env);
}

template<>
inline jclass getJClass<ExtendedCF::ConnectionStatus> (JNIEnv* env)
{
  return ExtendedCF::jni::ConnectionStatus::getJClass(env);
}

inline void fromJObject (ExtendedCF::ConnectionStatusSequence& out, JNIEnv* env, jobject obj)
{
  omnijni::fromJObject(out, env, obj);
}

inline jobject toJObject (const ExtendedCF::ConnectionStatusSequence& in, JNIEnv* env)
{
  return omnijni::toJObject(in, env);
}

inline void fromJObject (ExtendedCF::NegotiableUsesPort_out out, JNIEnv* env, jobject obj)
{
  ExtendedCF::jni::NegotiableUsesPort::fromJObject(out, env, obj);
}

inline jobject toJObject (const ExtendedCF::NegotiableUsesPort_ptr in, JNIEnv* env)
{
  return ExtendedCF::jni::NegotiableUsesPort::toJObject(in, env);
}

template<>
inline jclass getJClass<ExtendedCF::NegotiableUsesPortRef> (JNIEnv* env)
{
  return ExtendedCF::jni::NegotiableUsesPort::getJClass(env);
}

inline void fromJObject (ExtendedCF::NegotiationResult& out, JNIEnv* env, jobject obj)
{
  ExtendedCF::jni::NegotiationResult::fromJObject(out, env, obj);
}

inline jobject toJObject (const ExtendedCF::NegotiationResult& in, JNIEnv* env)
{
  return ExtendedCF::jni::NegotiationResult::toJObject(in, env);
}

template<>
inline jclass getJClass<ExtendedCF::NegotiationResult> (JNIEnv* env)
{
  return ExtendedCF::jni::NegotiationResult::getJClass(env);
}

inline void fromJObject (ExtendedCF::NegotiableProvidesPort_out out, JNIEnv* env, jobject obj)
{
  ExtendedCF::jni::NegotiableProvidesPort::fromJObject(out, env, obj);
}

inline jobject toJObject (const ExtendedCF::NegotiableProvidesPort_ptr in, JNIEnv* env)
{
  return ExtendedCF::jni::NegotiableProvidesPort::toJObject(in, env);
}

template<>
inline jclass getJClass<ExtendedCF::NegotiableProvidesPortRef> (JNIEnv* env)
{
  return ExtendedCF::jni::NegotiableProvidesPort::getJClass(env);
}


#endif // __JNI_NEGOTIABLEPORT_H__
