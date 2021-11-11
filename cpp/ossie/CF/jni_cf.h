#ifndef __JNI_CF_H__
#define __JNI_CF_H__

#include <jni.h>
#include <omnijni/omnijni.h>
#include <ossie/CF/cf.h>
#include <ossie/CF/jni_LogInterfaces.h>
#include <COS/jni_CosNaming.h>

namespace CF {
  namespace jni {
    class InvalidProfile
    {
      public:
      static void fromJObject (CF::InvalidProfile& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const CF::InvalidProfile& in, JNIEnv* env);

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
      InvalidProfile();
      ~InvalidProfile();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID fid_[0];
    };

    class InvalidObjectReference
    {
      public:
      static void fromJObject (CF::InvalidObjectReference& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const CF::InvalidObjectReference& in, JNIEnv* env);

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
      InvalidObjectReference();
      ~InvalidObjectReference();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID fid_[1];
    };

    class DuplicateName
    {
      public:
      static void fromJObject (CF::DuplicateName& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const CF::DuplicateName& in, JNIEnv* env);

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
      DuplicateName();
      ~DuplicateName();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID fid_[1];
    };

    class InvalidIdentifier
    {
      public:
      static void fromJObject (CF::InvalidIdentifier& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const CF::InvalidIdentifier& in, JNIEnv* env);

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
      InvalidIdentifier();
      ~InvalidIdentifier();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID fid_[0];
    };

    class UnallowedAccess
    {
      public:
      static void fromJObject (CF::UnallowedAccess& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const CF::UnallowedAccess& in, JNIEnv* env);

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
      UnallowedAccess();
      ~UnallowedAccess();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID fid_[0];
    };

    class FailedCapacityType
    {
      public:
      static void fromJObject (CF::FailedCapacityType& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const CF::FailedCapacityType& in, JNIEnv* env);

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
      FailedCapacityType();
      ~FailedCapacityType();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID fid_[3];
    };

    class FailedCapacityTypeHolder
    {
      public:
      static void fromJObject (CF::FailedCapacityType& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const CF::FailedCapacityType& in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, const CF::FailedCapacityType& value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      FailedCapacityTypeHolder();
      ~FailedCapacityTypeHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class FailedCapacities
    {
      public:
      static inline void fromJObject (CF::FailedCapacities& out, JNIEnv* env, jobject obj)
      {
        omnijni::fromJObject(out, env, obj);
      }
      static inline jobject toJObject (CF::FailedCapacities in, JNIEnv* env)
      {
        return omnijni::toJObject(in, env);
      }
    };

    class FailedCapacitiesHolder
    {
      public:
      static void fromJObject (CF::FailedCapacities& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const CF::FailedCapacities& in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, const CF::FailedCapacities& value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      FailedCapacitiesHolder();
      ~FailedCapacitiesHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class UnknownProperties
    {
      public:
      static void fromJObject (CF::UnknownProperties& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const CF::UnknownProperties& in, JNIEnv* env);

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
      UnknownProperties();
      ~UnknownProperties();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID fid_[1];
    };

    class DeviceAssignmentType
    {
      public:
      static void fromJObject (CF::DeviceAssignmentType& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const CF::DeviceAssignmentType& in, JNIEnv* env);

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
      DeviceAssignmentType();
      ~DeviceAssignmentType();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID fid_[2];
    };

    class DeviceAssignmentTypeHolder
    {
      public:
      static void fromJObject (CF::DeviceAssignmentType& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const CF::DeviceAssignmentType& in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, const CF::DeviceAssignmentType& value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      DeviceAssignmentTypeHolder();
      ~DeviceAssignmentTypeHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class DeviceAssignmentSequence
    {
      public:
      static inline void fromJObject (CF::DeviceAssignmentSequence& out, JNIEnv* env, jobject obj)
      {
        omnijni::fromJObject(out, env, obj);
      }
      static inline jobject toJObject (CF::DeviceAssignmentSequence in, JNIEnv* env)
      {
        return omnijni::toJObject(in, env);
      }
    };

    class DeviceAssignmentSequenceHolder
    {
      public:
      static void fromJObject (CF::DeviceAssignmentSequence& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const CF::DeviceAssignmentSequence& in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, const CF::DeviceAssignmentSequence& value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      DeviceAssignmentSequenceHolder();
      ~DeviceAssignmentSequenceHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class ErrorNumberType
    {
      public:
      static void fromJObject (CF::ErrorNumberType& out, JNIEnv* env, jobject obj);
      static jobject toJObject (CF::ErrorNumberType in, JNIEnv* env);

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
      ErrorNumberType();
      ~ErrorNumberType();
      static jclass cls_;
      static jmethodID from_int_;
      static jmethodID value_;
    };

    class PortType
    {
      public:
      static void fromJObject (CF::PortType& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const CF::PortType& in, JNIEnv* env);

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
      PortType();
      ~PortType();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID fid_[2];
    };

    class PortTypeHolder
    {
      public:
      static void fromJObject (CF::PortType& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const CF::PortType& in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, const CF::PortType& value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      PortTypeHolder();
      ~PortTypeHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class Ports
    {
      public:
      static inline void fromJObject (CF::Ports& out, JNIEnv* env, jobject obj)
      {
        omnijni::fromJObject(out, env, obj);
      }
      static inline jobject toJObject (CF::Ports in, JNIEnv* env)
      {
        return omnijni::toJObject(in, env);
      }
    };

    class PortsHolder
    {
      public:
      static void fromJObject (CF::Ports& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const CF::Ports& in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, const CF::Ports& value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      PortsHolder();
      ~PortsHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class ComponentEnumType
    {
      public:
      static void fromJObject (CF::ComponentEnumType& out, JNIEnv* env, jobject obj);
      static jobject toJObject (CF::ComponentEnumType in, JNIEnv* env);

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
      ComponentEnumType();
      ~ComponentEnumType();
      static jclass cls_;
      static jmethodID from_int_;
      static jmethodID value_;
    };

    class ComponentType
    {
      public:
      static void fromJObject (CF::ComponentType& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const CF::ComponentType& in, JNIEnv* env);

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
      ComponentType();
      ~ComponentType();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID fid_[5];
    };

    class ComponentTypeHolder
    {
      public:
      static void fromJObject (CF::ComponentType& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const CF::ComponentType& in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, const CF::ComponentType& value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      ComponentTypeHolder();
      ~ComponentTypeHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class Components
    {
      public:
      static inline void fromJObject (CF::Components& out, JNIEnv* env, jobject obj)
      {
        omnijni::fromJObject(out, env, obj);
      }
      static inline jobject toJObject (CF::Components in, JNIEnv* env)
      {
        return omnijni::toJObject(in, env);
      }
    };

    class ComponentsHolder
    {
      public:
      static void fromJObject (CF::Components& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const CF::Components& in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, const CF::Components& value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      ComponentsHolder();
      ~ComponentsHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class InvalidFileName
    {
      public:
      static void fromJObject (CF::InvalidFileName& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const CF::InvalidFileName& in, JNIEnv* env);

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
      InvalidFileName();
      ~InvalidFileName();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID fid_[2];
    };

    class FileException
    {
      public:
      static void fromJObject (CF::FileException& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const CF::FileException& in, JNIEnv* env);

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
      FileException();
      ~FileException();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID fid_[2];
    };

    class DeviceSequence
    {
      public:
      static inline void fromJObject (CF::DeviceSequence& out, JNIEnv* env, jobject obj)
      {
        omnijni::fromJObject(out, env, obj);
      }
      static inline jobject toJObject (CF::DeviceSequence in, JNIEnv* env)
      {
        return omnijni::toJObject(in, env);
      }
    };

    class DeviceSequenceHolder
    {
      public:
      static void fromJObject (CF::DeviceSequence& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const CF::DeviceSequence& in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, const CF::DeviceSequence& value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      DeviceSequenceHolder();
      ~DeviceSequenceHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class AggregateDevicePOA : public virtual omnijni::Servant, public virtual POA_CF::AggregateDevice
    {
      public:
      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      CF::DeviceSequence* devices ();
      void addDevice (CF::Device_ptr associatedDevice);
      void removeDevice (CF::Device_ptr associatedDevice);

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
      static jmethodID mid_[3];
    };

    class AggregateDevice
    {
      public:
      static void fromJObject (CF::AggregateDevice_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CF::AggregateDevice_ptr in, JNIEnv* env);

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
      AggregateDevice();
      ~AggregateDevice();
      static jclass cls_;
      static jmethodID ctor_;
    };

    class AggregateDeviceHolder
    {
      public:
      static void fromJObject (CF::AggregateDevice_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CF::AggregateDevice_ptr in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, CF::AggregateDevice_ptr value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      AggregateDeviceHolder();
      ~AggregateDeviceHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class FileSystemPOA : public virtual omnijni::Servant, public virtual POA_CF::FileSystem
    {
      public:
      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      void remove (const char* fileName);
      void copy (const char* sourceFileName, const char* destinationFileName);
      void move (const char* sourceFileName, const char* destinationFileName);
      CORBA::Boolean exists (const char* fileName);
      CF::FileSystem::FileInformationSequence* list (const char* pattern);
      CF::File_ptr create (const char* fileName);
      CF::File_ptr open (const char* fileName, CORBA::Boolean read_Only);
      void mkdir (const char* directoryName);
      void rmdir (const char* directoryName);
      void query (CF::Properties& fileSystemProperties);

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
      static jmethodID mid_[10];
    };

    class FileSystem
    {
      public:
      class UnknownFileSystemProperties
      {
        public:
        static void fromJObject (CF::FileSystem::UnknownFileSystemProperties& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::FileSystem::UnknownFileSystemProperties& in, JNIEnv* env);

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
        UnknownFileSystemProperties();
        ~UnknownFileSystemProperties();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID fid_[1];
      };

      class FileType
      {
        public:
        static void fromJObject (CF::FileSystem::FileType& out, JNIEnv* env, jobject obj);
        static jobject toJObject (CF::FileSystem::FileType in, JNIEnv* env);

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
        FileType();
        ~FileType();
        static jclass cls_;
        static jmethodID from_int_;
        static jmethodID value_;
      };

      class FileInformationType
      {
        public:
        static void fromJObject (CF::FileSystem::FileInformationType& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::FileSystem::FileInformationType& in, JNIEnv* env);

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
        FileInformationType();
        ~FileInformationType();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID fid_[4];
      };

      class FileInformationTypeHolder
      {
        public:
        static void fromJObject (CF::FileSystem::FileInformationType& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::FileSystem::FileInformationType& in, JNIEnv* env);

        static jclass getJClass (JNIEnv* env)
        {
          return cls_;
        }

        static void setValue (JNIEnv* env, jobject holder, const CF::FileSystem::FileInformationType& value);
        static jobject newInstance (JNIEnv* env);

        static void Load (JNIEnv* env)
        {
          omni_mutex_lock lock_(omnijni::sharedMutex());
          OnLoad(env);
        }

        static void OnLoad (JNIEnv* env);
        static void OnUnload (JNIEnv* env);

        private:
        FileInformationTypeHolder();
        ~FileInformationTypeHolder();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID value_;
      };

      class FileInformationSequence
      {
        public:
        static inline void fromJObject (CF::FileSystem::FileInformationSequence& out, JNIEnv* env, jobject obj)
        {
          omnijni::fromJObject(out, env, obj);
        }
        static inline jobject toJObject (CF::FileSystem::FileInformationSequence in, JNIEnv* env)
        {
          return omnijni::toJObject(in, env);
        }
      };

      class FileInformationSequenceHolder
      {
        public:
        static void fromJObject (CF::FileSystem::FileInformationSequence& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::FileSystem::FileInformationSequence& in, JNIEnv* env);

        static jclass getJClass (JNIEnv* env)
        {
          return cls_;
        }

        static void setValue (JNIEnv* env, jobject holder, const CF::FileSystem::FileInformationSequence& value);
        static jobject newInstance (JNIEnv* env);

        static void Load (JNIEnv* env)
        {
          omni_mutex_lock lock_(omnijni::sharedMutex());
          OnLoad(env);
        }

        static void OnLoad (JNIEnv* env);
        static void OnUnload (JNIEnv* env);

        private:
        FileInformationSequenceHolder();
        ~FileInformationSequenceHolder();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID value_;
      };

      static void fromJObject (CF::FileSystem_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CF::FileSystem_ptr in, JNIEnv* env);

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
      FileSystem();
      ~FileSystem();
      static jclass cls_;
      static jmethodID ctor_;
    };

    class FileSystemHolder
    {
      public:
      static void fromJObject (CF::FileSystem_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CF::FileSystem_ptr in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, CF::FileSystem_ptr value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      FileSystemHolder();
      ~FileSystemHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class FilePOA : public virtual omnijni::Servant, public virtual POA_CF::File
    {
      public:
      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      char* fileName ();
      CORBA::ULong filePointer ();
      void read (CF::OctetSequence_out data, CORBA::ULong length);
      void write (const CF::OctetSequence& data);
      CORBA::ULong sizeOf ();
      void close ();
      void setFilePointer (CORBA::ULong filePointer);

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
      static jmethodID mid_[7];
    };

    class File
    {
      public:
      class IOException
      {
        public:
        static void fromJObject (CF::File::IOException& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::File::IOException& in, JNIEnv* env);

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
        IOException();
        ~IOException();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID fid_[2];
      };

      class InvalidFilePointer
      {
        public:
        static void fromJObject (CF::File::InvalidFilePointer& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::File::InvalidFilePointer& in, JNIEnv* env);

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
        InvalidFilePointer();
        ~InvalidFilePointer();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID fid_[0];
      };

      static void fromJObject (CF::File_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CF::File_ptr in, JNIEnv* env);

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
      File();
      ~File();
      static jclass cls_;
      static jmethodID ctor_;
    };

    class FileHolder
    {
      public:
      static void fromJObject (CF::File_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CF::File_ptr in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, CF::File_ptr value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      FileHolder();
      ~FileHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class ResourceFactoryPOA : public virtual omnijni::Servant, public virtual POA_CF::ResourceFactory
    {
      public:
      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      char* identifier ();
      CF::Resource_ptr createResource (const char* resourceId, const CF::Properties& qualifiers);
      void releaseResource (const char* resourceId);
      void shutdown ();

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
      static jmethodID mid_[4];
    };

    class ResourceFactory
    {
      public:
      class InvalidResourceId
      {
        public:
        static void fromJObject (CF::ResourceFactory::InvalidResourceId& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::ResourceFactory::InvalidResourceId& in, JNIEnv* env);

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
        InvalidResourceId();
        ~InvalidResourceId();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID fid_[0];
      };

      class ShutdownFailure
      {
        public:
        static void fromJObject (CF::ResourceFactory::ShutdownFailure& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::ResourceFactory::ShutdownFailure& in, JNIEnv* env);

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
        ShutdownFailure();
        ~ShutdownFailure();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID fid_[1];
      };

      class CreateResourceFailure
      {
        public:
        static void fromJObject (CF::ResourceFactory::CreateResourceFailure& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::ResourceFactory::CreateResourceFailure& in, JNIEnv* env);

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
        CreateResourceFailure();
        ~CreateResourceFailure();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID fid_[2];
      };

      static void fromJObject (CF::ResourceFactory_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CF::ResourceFactory_ptr in, JNIEnv* env);

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
      ResourceFactory();
      ~ResourceFactory();
      static jclass cls_;
      static jmethodID ctor_;
    };

    class ResourceFactoryHolder
    {
      public:
      static void fromJObject (CF::ResourceFactory_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CF::ResourceFactory_ptr in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, CF::ResourceFactory_ptr value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      ResourceFactoryHolder();
      ~ResourceFactoryHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class FileManagerPOA : public virtual omnijni::Servant, public virtual POA_CF::FileManager, public virtual CF::jni::FileSystemPOA
    {
      public:
      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      void mount (const char* mountPoint, CF::FileSystem_ptr file_System);
      void unmount (const char* mountPoint);
      CF::FileManager::MountSequence* getMounts ();

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
      static jmethodID mid_[3];
    };

    class FileManager
    {
      public:
      class MountType
      {
        public:
        static void fromJObject (CF::FileManager::MountType& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::FileManager::MountType& in, JNIEnv* env);

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
        MountType();
        ~MountType();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID fid_[2];
      };

      class MountTypeHolder
      {
        public:
        static void fromJObject (CF::FileManager::MountType& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::FileManager::MountType& in, JNIEnv* env);

        static jclass getJClass (JNIEnv* env)
        {
          return cls_;
        }

        static void setValue (JNIEnv* env, jobject holder, const CF::FileManager::MountType& value);
        static jobject newInstance (JNIEnv* env);

        static void Load (JNIEnv* env)
        {
          omni_mutex_lock lock_(omnijni::sharedMutex());
          OnLoad(env);
        }

        static void OnLoad (JNIEnv* env);
        static void OnUnload (JNIEnv* env);

        private:
        MountTypeHolder();
        ~MountTypeHolder();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID value_;
      };

      class MountSequence
      {
        public:
        static inline void fromJObject (CF::FileManager::MountSequence& out, JNIEnv* env, jobject obj)
        {
          omnijni::fromJObject(out, env, obj);
        }
        static inline jobject toJObject (CF::FileManager::MountSequence in, JNIEnv* env)
        {
          return omnijni::toJObject(in, env);
        }
      };

      class MountSequenceHolder
      {
        public:
        static void fromJObject (CF::FileManager::MountSequence& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::FileManager::MountSequence& in, JNIEnv* env);

        static jclass getJClass (JNIEnv* env)
        {
          return cls_;
        }

        static void setValue (JNIEnv* env, jobject holder, const CF::FileManager::MountSequence& value);
        static jobject newInstance (JNIEnv* env);

        static void Load (JNIEnv* env)
        {
          omni_mutex_lock lock_(omnijni::sharedMutex());
          OnLoad(env);
        }

        static void OnLoad (JNIEnv* env);
        static void OnUnload (JNIEnv* env);

        private:
        MountSequenceHolder();
        ~MountSequenceHolder();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID value_;
      };

      class NonExistentMount
      {
        public:
        static void fromJObject (CF::FileManager::NonExistentMount& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::FileManager::NonExistentMount& in, JNIEnv* env);

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
        NonExistentMount();
        ~NonExistentMount();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID fid_[0];
      };

      class InvalidFileSystem
      {
        public:
        static void fromJObject (CF::FileManager::InvalidFileSystem& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::FileManager::InvalidFileSystem& in, JNIEnv* env);

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
        InvalidFileSystem();
        ~InvalidFileSystem();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID fid_[0];
      };

      class MountPointAlreadyExists
      {
        public:
        static void fromJObject (CF::FileManager::MountPointAlreadyExists& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::FileManager::MountPointAlreadyExists& in, JNIEnv* env);

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
        MountPointAlreadyExists();
        ~MountPointAlreadyExists();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID fid_[0];
      };

      static void fromJObject (CF::FileManager_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CF::FileManager_ptr in, JNIEnv* env);

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
      FileManager();
      ~FileManager();
      static jclass cls_;
      static jmethodID ctor_;
    };

    class FileManagerHolder
    {
      public:
      static void fromJObject (CF::FileManager_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CF::FileManager_ptr in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, CF::FileManager_ptr value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      FileManagerHolder();
      ~FileManagerHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class LifeCyclePOA : public virtual omnijni::Servant, public virtual POA_CF::LifeCycle
    {
      public:
      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      void initialize ();
      void releaseObject ();

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

    class LifeCycle
    {
      public:
      class InitializeError
      {
        public:
        static void fromJObject (CF::LifeCycle::InitializeError& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::LifeCycle::InitializeError& in, JNIEnv* env);

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
        InitializeError();
        ~InitializeError();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID fid_[1];
      };

      class ReleaseError
      {
        public:
        static void fromJObject (CF::LifeCycle::ReleaseError& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::LifeCycle::ReleaseError& in, JNIEnv* env);

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
        ReleaseError();
        ~ReleaseError();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID fid_[1];
      };

      static void fromJObject (CF::LifeCycle_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CF::LifeCycle_ptr in, JNIEnv* env);

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
      LifeCycle();
      ~LifeCycle();
      static jclass cls_;
      static jmethodID ctor_;
    };

    class LifeCycleHolder
    {
      public:
      static void fromJObject (CF::LifeCycle_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CF::LifeCycle_ptr in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, CF::LifeCycle_ptr value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      LifeCycleHolder();
      ~LifeCycleHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class TestableObjectPOA : public virtual omnijni::Servant, public virtual POA_CF::TestableObject
    {
      public:
      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      void runTest (CORBA::ULong testid, CF::Properties& testValues);

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

    class TestableObject
    {
      public:
      class UnknownTest
      {
        public:
        static void fromJObject (CF::TestableObject::UnknownTest& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::TestableObject::UnknownTest& in, JNIEnv* env);

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
        UnknownTest();
        ~UnknownTest();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID fid_[0];
      };

      static void fromJObject (CF::TestableObject_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CF::TestableObject_ptr in, JNIEnv* env);

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
      TestableObject();
      ~TestableObject();
      static jclass cls_;
      static jmethodID ctor_;
    };

    class TestableObjectHolder
    {
      public:
      static void fromJObject (CF::TestableObject_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CF::TestableObject_ptr in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, CF::TestableObject_ptr value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      TestableObjectHolder();
      ~TestableObjectHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class PropertyChangeListenerPOA : public virtual omnijni::Servant, public virtual POA_CF::PropertyChangeListener
    {
      public:
      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      void propertyChange (const CF::PropertyChangeListener::PropertyChangeEvent& prop_event);

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

    class PropertyChangeListener
    {
      public:
      class PropertyChangeEvent
      {
        public:
        static void fromJObject (CF::PropertyChangeListener::PropertyChangeEvent& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::PropertyChangeListener::PropertyChangeEvent& in, JNIEnv* env);

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
        PropertyChangeEvent();
        ~PropertyChangeEvent();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID fid_[5];
      };

      class PropertyChangeEventHolder
      {
        public:
        static void fromJObject (CF::PropertyChangeListener::PropertyChangeEvent& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::PropertyChangeListener::PropertyChangeEvent& in, JNIEnv* env);

        static jclass getJClass (JNIEnv* env)
        {
          return cls_;
        }

        static void setValue (JNIEnv* env, jobject holder, const CF::PropertyChangeListener::PropertyChangeEvent& value);
        static jobject newInstance (JNIEnv* env);

        static void Load (JNIEnv* env)
        {
          omni_mutex_lock lock_(omnijni::sharedMutex());
          OnLoad(env);
        }

        static void OnLoad (JNIEnv* env);
        static void OnUnload (JNIEnv* env);

        private:
        PropertyChangeEventHolder();
        ~PropertyChangeEventHolder();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID value_;
      };

      static void fromJObject (CF::PropertyChangeListener_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CF::PropertyChangeListener_ptr in, JNIEnv* env);

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
      PropertyChangeListener();
      ~PropertyChangeListener();
      static jclass cls_;
      static jmethodID ctor_;
    };

    class PropertyChangeListenerHolder
    {
      public:
      static void fromJObject (CF::PropertyChangeListener_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CF::PropertyChangeListener_ptr in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, CF::PropertyChangeListener_ptr value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      PropertyChangeListenerHolder();
      ~PropertyChangeListenerHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class PropertySetPOA : public virtual omnijni::Servant, public virtual POA_CF::PropertySet
    {
      public:
      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      void configure (const CF::Properties& configProperties);
      void query (CF::Properties& configProperties);

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

    class PropertySet
    {
      public:
      class InvalidConfiguration
      {
        public:
        static void fromJObject (CF::PropertySet::InvalidConfiguration& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::PropertySet::InvalidConfiguration& in, JNIEnv* env);

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
        InvalidConfiguration();
        ~InvalidConfiguration();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID fid_[2];
      };

      class PartialConfiguration
      {
        public:
        static void fromJObject (CF::PropertySet::PartialConfiguration& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::PropertySet::PartialConfiguration& in, JNIEnv* env);

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
        PartialConfiguration();
        ~PartialConfiguration();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID fid_[1];
      };

      static void fromJObject (CF::PropertySet_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CF::PropertySet_ptr in, JNIEnv* env);

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
      PropertySet();
      ~PropertySet();
      static jclass cls_;
      static jmethodID ctor_;
    };

    class PropertySetHolder
    {
      public:
      static void fromJObject (CF::PropertySet_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CF::PropertySet_ptr in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, CF::PropertySet_ptr value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      PropertySetHolder();
      ~PropertySetHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class PropertyEmitterPOA : public virtual omnijni::Servant, public virtual POA_CF::PropertyEmitter, public virtual CF::jni::PropertySetPOA
    {
      public:
      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      void initializeProperties (const CF::Properties& initialProperties);
      char* registerPropertyListener (CORBA::Object_ptr obj, const CF::StringSequence& prop_ids, CORBA::Float interval);
      void unregisterPropertyListener (const char* id);

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
      static jmethodID mid_[3];
    };

    class PropertyEmitter
    {
      public:
      class AlreadyInitialized
      {
        public:
        static void fromJObject (CF::PropertyEmitter::AlreadyInitialized& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::PropertyEmitter::AlreadyInitialized& in, JNIEnv* env);

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
        AlreadyInitialized();
        ~AlreadyInitialized();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID fid_[0];
      };

      static void fromJObject (CF::PropertyEmitter_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CF::PropertyEmitter_ptr in, JNIEnv* env);

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
      PropertyEmitter();
      ~PropertyEmitter();
      static jclass cls_;
      static jmethodID ctor_;
    };

    class PropertyEmitterHolder
    {
      public:
      static void fromJObject (CF::PropertyEmitter_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CF::PropertyEmitter_ptr in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, CF::PropertyEmitter_ptr value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      PropertyEmitterHolder();
      ~PropertyEmitterHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class AllocationManagerPOA : public virtual omnijni::Servant, public virtual POA_CF::AllocationManager
    {
      public:
      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      CF::AllocationManager::DeviceLocationSequence* allDevices ();
      CF::AllocationManager::DeviceLocationSequence* authorizedDevices ();
      CF::AllocationManager::DeviceLocationSequence* localDevices ();
      void listDevices (CF::AllocationManager::DeviceScopeType deviceScope, CORBA::ULong count, CF::AllocationManager::DeviceLocationSequence_out devices, CF::DeviceLocationIterator_out dl);
      CF::DomainManager_ptr domainMgr ();
      CF::AllocationManager::AllocationResponseSequence* allocate (const CF::AllocationManager::AllocationRequestSequence& requests);
      CF::AllocationManager::AllocationResponseSequence* allocateLocal (const CF::AllocationManager::AllocationRequestSequence& requests, const char* domainName);
      void deallocate (const CF::AllocationManager::allocationIDSequence& allocationIDs);
      CF::AllocationManager::AllocationStatusSequence* allocations (const CF::AllocationManager::allocationIDSequence& allocationIDs);
      CF::AllocationManager::AllocationStatusSequence* localAllocations (const CF::AllocationManager::allocationIDSequence& allocationIDs);
      void listAllocations (CF::AllocationManager::AllocationScopeType allocScope, CORBA::ULong how_many, CF::AllocationManager::AllocationStatusSequence_out allocs, CF::AllocationStatusIterator_out ai);

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
      static jmethodID mid_[11];
    };

    class AllocationManager
    {
      public:
      class DevicePoolNames
      {
        public:
        static inline void fromJObject (CF::AllocationManager::DevicePoolNames& out, JNIEnv* env, jobject obj)
        {
          omnijni::fromJObject(out, env, obj);
        }
        static inline jobject toJObject (CF::AllocationManager::DevicePoolNames in, JNIEnv* env)
        {
          return omnijni::toJObject(in, env);
        }
      };

      class DevicePoolNamesHolder
      {
        public:
        static void fromJObject (CF::AllocationManager::DevicePoolNames& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::AllocationManager::DevicePoolNames& in, JNIEnv* env);

        static jclass getJClass (JNIEnv* env)
        {
          return cls_;
        }

        static void setValue (JNIEnv* env, jobject holder, const CF::AllocationManager::DevicePoolNames& value);
        static jobject newInstance (JNIEnv* env);

        static void Load (JNIEnv* env)
        {
          omni_mutex_lock lock_(omnijni::sharedMutex());
          OnLoad(env);
        }

        static void OnLoad (JNIEnv* env);
        static void OnUnload (JNIEnv* env);

        private:
        DevicePoolNamesHolder();
        ~DevicePoolNamesHolder();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID value_;
      };

      class AllocationRequestType
      {
        public:
        static void fromJObject (CF::AllocationManager::AllocationRequestType& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::AllocationManager::AllocationRequestType& in, JNIEnv* env);

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
        AllocationRequestType();
        ~AllocationRequestType();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID fid_[5];
      };

      class AllocationRequestTypeHolder
      {
        public:
        static void fromJObject (CF::AllocationManager::AllocationRequestType& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::AllocationManager::AllocationRequestType& in, JNIEnv* env);

        static jclass getJClass (JNIEnv* env)
        {
          return cls_;
        }

        static void setValue (JNIEnv* env, jobject holder, const CF::AllocationManager::AllocationRequestType& value);
        static jobject newInstance (JNIEnv* env);

        static void Load (JNIEnv* env)
        {
          omni_mutex_lock lock_(omnijni::sharedMutex());
          OnLoad(env);
        }

        static void OnLoad (JNIEnv* env);
        static void OnUnload (JNIEnv* env);

        private:
        AllocationRequestTypeHolder();
        ~AllocationRequestTypeHolder();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID value_;
      };

      class AllocationResponseType
      {
        public:
        static void fromJObject (CF::AllocationManager::AllocationResponseType& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::AllocationManager::AllocationResponseType& in, JNIEnv* env);

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
        AllocationResponseType();
        ~AllocationResponseType();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID fid_[5];
      };

      class AllocationResponseTypeHolder
      {
        public:
        static void fromJObject (CF::AllocationManager::AllocationResponseType& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::AllocationManager::AllocationResponseType& in, JNIEnv* env);

        static jclass getJClass (JNIEnv* env)
        {
          return cls_;
        }

        static void setValue (JNIEnv* env, jobject holder, const CF::AllocationManager::AllocationResponseType& value);
        static jobject newInstance (JNIEnv* env);

        static void Load (JNIEnv* env)
        {
          omni_mutex_lock lock_(omnijni::sharedMutex());
          OnLoad(env);
        }

        static void OnLoad (JNIEnv* env);
        static void OnUnload (JNIEnv* env);

        private:
        AllocationResponseTypeHolder();
        ~AllocationResponseTypeHolder();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID value_;
      };

      class AllocationStatusType
      {
        public:
        static void fromJObject (CF::AllocationManager::AllocationStatusType& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::AllocationManager::AllocationStatusType& in, JNIEnv* env);

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
        AllocationStatusType();
        ~AllocationStatusType();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID fid_[6];
      };

      class AllocationStatusTypeHolder
      {
        public:
        static void fromJObject (CF::AllocationManager::AllocationStatusType& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::AllocationManager::AllocationStatusType& in, JNIEnv* env);

        static jclass getJClass (JNIEnv* env)
        {
          return cls_;
        }

        static void setValue (JNIEnv* env, jobject holder, const CF::AllocationManager::AllocationStatusType& value);
        static jobject newInstance (JNIEnv* env);

        static void Load (JNIEnv* env)
        {
          omni_mutex_lock lock_(omnijni::sharedMutex());
          OnLoad(env);
        }

        static void OnLoad (JNIEnv* env);
        static void OnUnload (JNIEnv* env);

        private:
        AllocationStatusTypeHolder();
        ~AllocationStatusTypeHolder();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID value_;
      };

      class DeviceLocationType
      {
        public:
        static void fromJObject (CF::AllocationManager::DeviceLocationType& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::AllocationManager::DeviceLocationType& in, JNIEnv* env);

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
        DeviceLocationType();
        ~DeviceLocationType();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID fid_[4];
      };

      class DeviceLocationTypeHolder
      {
        public:
        static void fromJObject (CF::AllocationManager::DeviceLocationType& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::AllocationManager::DeviceLocationType& in, JNIEnv* env);

        static jclass getJClass (JNIEnv* env)
        {
          return cls_;
        }

        static void setValue (JNIEnv* env, jobject holder, const CF::AllocationManager::DeviceLocationType& value);
        static jobject newInstance (JNIEnv* env);

        static void Load (JNIEnv* env)
        {
          omni_mutex_lock lock_(omnijni::sharedMutex());
          OnLoad(env);
        }

        static void OnLoad (JNIEnv* env);
        static void OnUnload (JNIEnv* env);

        private:
        DeviceLocationTypeHolder();
        ~DeviceLocationTypeHolder();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID value_;
      };

      class AllocationRequestSequence
      {
        public:
        static inline void fromJObject (CF::AllocationManager::AllocationRequestSequence& out, JNIEnv* env, jobject obj)
        {
          omnijni::fromJObject(out, env, obj);
        }
        static inline jobject toJObject (CF::AllocationManager::AllocationRequestSequence in, JNIEnv* env)
        {
          return omnijni::toJObject(in, env);
        }
      };

      class AllocationRequestSequenceHolder
      {
        public:
        static void fromJObject (CF::AllocationManager::AllocationRequestSequence& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::AllocationManager::AllocationRequestSequence& in, JNIEnv* env);

        static jclass getJClass (JNIEnv* env)
        {
          return cls_;
        }

        static void setValue (JNIEnv* env, jobject holder, const CF::AllocationManager::AllocationRequestSequence& value);
        static jobject newInstance (JNIEnv* env);

        static void Load (JNIEnv* env)
        {
          omni_mutex_lock lock_(omnijni::sharedMutex());
          OnLoad(env);
        }

        static void OnLoad (JNIEnv* env);
        static void OnUnload (JNIEnv* env);

        private:
        AllocationRequestSequenceHolder();
        ~AllocationRequestSequenceHolder();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID value_;
      };

      class AllocationResponseSequence
      {
        public:
        static inline void fromJObject (CF::AllocationManager::AllocationResponseSequence& out, JNIEnv* env, jobject obj)
        {
          omnijni::fromJObject(out, env, obj);
        }
        static inline jobject toJObject (CF::AllocationManager::AllocationResponseSequence in, JNIEnv* env)
        {
          return omnijni::toJObject(in, env);
        }
      };

      class AllocationResponseSequenceHolder
      {
        public:
        static void fromJObject (CF::AllocationManager::AllocationResponseSequence& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::AllocationManager::AllocationResponseSequence& in, JNIEnv* env);

        static jclass getJClass (JNIEnv* env)
        {
          return cls_;
        }

        static void setValue (JNIEnv* env, jobject holder, const CF::AllocationManager::AllocationResponseSequence& value);
        static jobject newInstance (JNIEnv* env);

        static void Load (JNIEnv* env)
        {
          omni_mutex_lock lock_(omnijni::sharedMutex());
          OnLoad(env);
        }

        static void OnLoad (JNIEnv* env);
        static void OnUnload (JNIEnv* env);

        private:
        AllocationResponseSequenceHolder();
        ~AllocationResponseSequenceHolder();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID value_;
      };

      class AllocationStatusSequence
      {
        public:
        static inline void fromJObject (CF::AllocationManager::AllocationStatusSequence& out, JNIEnv* env, jobject obj)
        {
          omnijni::fromJObject(out, env, obj);
        }
        static inline jobject toJObject (CF::AllocationManager::AllocationStatusSequence in, JNIEnv* env)
        {
          return omnijni::toJObject(in, env);
        }
      };

      class AllocationStatusSequenceHolder
      {
        public:
        static void fromJObject (CF::AllocationManager::AllocationStatusSequence& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::AllocationManager::AllocationStatusSequence& in, JNIEnv* env);

        static jclass getJClass (JNIEnv* env)
        {
          return cls_;
        }

        static void setValue (JNIEnv* env, jobject holder, const CF::AllocationManager::AllocationStatusSequence& value);
        static jobject newInstance (JNIEnv* env);

        static void Load (JNIEnv* env)
        {
          omni_mutex_lock lock_(omnijni::sharedMutex());
          OnLoad(env);
        }

        static void OnLoad (JNIEnv* env);
        static void OnUnload (JNIEnv* env);

        private:
        AllocationStatusSequenceHolder();
        ~AllocationStatusSequenceHolder();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID value_;
      };

      class DeviceLocationSequence
      {
        public:
        static inline void fromJObject (CF::AllocationManager::DeviceLocationSequence& out, JNIEnv* env, jobject obj)
        {
          omnijni::fromJObject(out, env, obj);
        }
        static inline jobject toJObject (CF::AllocationManager::DeviceLocationSequence in, JNIEnv* env)
        {
          return omnijni::toJObject(in, env);
        }
      };

      class DeviceLocationSequenceHolder
      {
        public:
        static void fromJObject (CF::AllocationManager::DeviceLocationSequence& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::AllocationManager::DeviceLocationSequence& in, JNIEnv* env);

        static jclass getJClass (JNIEnv* env)
        {
          return cls_;
        }

        static void setValue (JNIEnv* env, jobject holder, const CF::AllocationManager::DeviceLocationSequence& value);
        static jobject newInstance (JNIEnv* env);

        static void Load (JNIEnv* env)
        {
          omni_mutex_lock lock_(omnijni::sharedMutex());
          OnLoad(env);
        }

        static void OnLoad (JNIEnv* env);
        static void OnUnload (JNIEnv* env);

        private:
        DeviceLocationSequenceHolder();
        ~DeviceLocationSequenceHolder();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID value_;
      };

      class allocationIDSequence
      {
        public:
        static inline void fromJObject (CF::AllocationManager::allocationIDSequence& out, JNIEnv* env, jobject obj)
        {
          omnijni::fromJObject(out, env, obj);
        }
        static inline jobject toJObject (CF::AllocationManager::allocationIDSequence in, JNIEnv* env)
        {
          return omnijni::toJObject(in, env);
        }
      };

      class allocationIDSequenceHolder
      {
        public:
        static void fromJObject (CF::AllocationManager::allocationIDSequence& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::AllocationManager::allocationIDSequence& in, JNIEnv* env);

        static jclass getJClass (JNIEnv* env)
        {
          return cls_;
        }

        static void setValue (JNIEnv* env, jobject holder, const CF::AllocationManager::allocationIDSequence& value);
        static jobject newInstance (JNIEnv* env);

        static void Load (JNIEnv* env)
        {
          omni_mutex_lock lock_(omnijni::sharedMutex());
          OnLoad(env);
        }

        static void OnLoad (JNIEnv* env);
        static void OnUnload (JNIEnv* env);

        private:
        allocationIDSequenceHolder();
        ~allocationIDSequenceHolder();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID value_;
      };

      class AllocationError
      {
        public:
        static void fromJObject (CF::AllocationManager::AllocationError& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::AllocationManager::AllocationError& in, JNIEnv* env);

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
        AllocationError();
        ~AllocationError();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID fid_[2];
      };

      class InvalidAllocationId
      {
        public:
        static void fromJObject (CF::AllocationManager::InvalidAllocationId& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::AllocationManager::InvalidAllocationId& in, JNIEnv* env);

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
        InvalidAllocationId();
        ~InvalidAllocationId();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID fid_[1];
      };

      class DeviceScopeType
      {
        public:
        static void fromJObject (CF::AllocationManager::DeviceScopeType& out, JNIEnv* env, jobject obj);
        static jobject toJObject (CF::AllocationManager::DeviceScopeType in, JNIEnv* env);

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
        DeviceScopeType();
        ~DeviceScopeType();
        static jclass cls_;
        static jmethodID from_int_;
        static jmethodID value_;
      };

      class AllocationScopeType
      {
        public:
        static void fromJObject (CF::AllocationManager::AllocationScopeType& out, JNIEnv* env, jobject obj);
        static jobject toJObject (CF::AllocationManager::AllocationScopeType in, JNIEnv* env);

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
        AllocationScopeType();
        ~AllocationScopeType();
        static jclass cls_;
        static jmethodID from_int_;
        static jmethodID value_;
      };

      static void fromJObject (CF::AllocationManager_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CF::AllocationManager_ptr in, JNIEnv* env);

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
      AllocationManager();
      ~AllocationManager();
      static jclass cls_;
      static jmethodID ctor_;
    };

    class AllocationManagerHolder
    {
      public:
      static void fromJObject (CF::AllocationManager_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CF::AllocationManager_ptr in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, CF::AllocationManager_ptr value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      AllocationManagerHolder();
      ~AllocationManagerHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class AllocationStatusIteratorPOA : public virtual omnijni::Servant, public virtual POA_CF::AllocationStatusIterator
    {
      public:
      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      CORBA::Boolean next_one (CF::AllocationManager::AllocationStatusType_out allocation);
      CORBA::Boolean next_n (CORBA::ULong count, CF::AllocationManager::AllocationStatusSequence_out allocations);
      void destroy ();

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
      static jmethodID mid_[3];
    };

    class AllocationStatusIterator
    {
      public:
      static void fromJObject (CF::AllocationStatusIterator_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CF::AllocationStatusIterator_ptr in, JNIEnv* env);

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
      AllocationStatusIterator();
      ~AllocationStatusIterator();
      static jclass cls_;
      static jmethodID ctor_;
    };

    class AllocationStatusIteratorHolder
    {
      public:
      static void fromJObject (CF::AllocationStatusIterator_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CF::AllocationStatusIterator_ptr in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, CF::AllocationStatusIterator_ptr value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      AllocationStatusIteratorHolder();
      ~AllocationStatusIteratorHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class DeviceLocationIteratorPOA : public virtual omnijni::Servant, public virtual POA_CF::DeviceLocationIterator
    {
      public:
      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      CORBA::Boolean next_one (CF::AllocationManager::DeviceLocationType_out deviceLocation);
      CORBA::Boolean next_n (CORBA::ULong count, CF::AllocationManager::DeviceLocationSequence_out deviceLocations);
      void destroy ();

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
      static jmethodID mid_[3];
    };

    class DeviceLocationIterator
    {
      public:
      static void fromJObject (CF::DeviceLocationIterator_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CF::DeviceLocationIterator_ptr in, JNIEnv* env);

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
      DeviceLocationIterator();
      ~DeviceLocationIterator();
      static jclass cls_;
      static jmethodID ctor_;
    };

    class DeviceLocationIteratorHolder
    {
      public:
      static void fromJObject (CF::DeviceLocationIterator_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CF::DeviceLocationIterator_ptr in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, CF::DeviceLocationIterator_ptr value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      DeviceLocationIteratorHolder();
      ~DeviceLocationIteratorHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class ConnectionManagerPOA : public virtual omnijni::Servant, public virtual POA_CF::ConnectionManager
    {
      public:
      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      char* connect (const CF::ConnectionManager::EndpointRequest& usesEndpoint, const CF::ConnectionManager::EndpointRequest& providesEndpoint, const char* requesterId, const char* connectionId);
      void disconnect (const char* connectionRecordId);
      CF::ConnectionManager::ConnectionStatusSequence* connections ();
      void listConnections (CORBA::ULong how_many, CF::ConnectionManager::ConnectionStatusSequence_out connections, CF::ConnectionStatusIterator_out iter);

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
      static jmethodID mid_[4];
    };

    class ConnectionManager
    {
      public:
      class EndpointKind
      {
        public:
        static void fromJObject (CF::ConnectionManager::EndpointKind& out, JNIEnv* env, jobject obj);
        static jobject toJObject (CF::ConnectionManager::EndpointKind in, JNIEnv* env);

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
        EndpointKind();
        ~EndpointKind();
        static jclass cls_;
        static jmethodID from_int_;
        static jmethodID value_;
      };

      class EndpointResolutionType
      {
        public:
        static void fromJObject (CF::ConnectionManager::EndpointResolutionType& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::ConnectionManager::EndpointResolutionType& in, JNIEnv* env);

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
        EndpointResolutionType();
        ~EndpointResolutionType();
        static jclass cls_;
        static jmethodID ctor_;
        static jmethodID disc_;
        static jmethodID get_[7];
        static jmethodID set_[7];
      };

      class EndpointRequest
      {
        public:
        static void fromJObject (CF::ConnectionManager::EndpointRequest& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::ConnectionManager::EndpointRequest& in, JNIEnv* env);

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
        EndpointRequest();
        ~EndpointRequest();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID fid_[2];
      };

      class EndpointRequestHolder
      {
        public:
        static void fromJObject (CF::ConnectionManager::EndpointRequest& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::ConnectionManager::EndpointRequest& in, JNIEnv* env);

        static jclass getJClass (JNIEnv* env)
        {
          return cls_;
        }

        static void setValue (JNIEnv* env, jobject holder, const CF::ConnectionManager::EndpointRequest& value);
        static jobject newInstance (JNIEnv* env);

        static void Load (JNIEnv* env)
        {
          omni_mutex_lock lock_(omnijni::sharedMutex());
          OnLoad(env);
        }

        static void OnLoad (JNIEnv* env);
        static void OnUnload (JNIEnv* env);

        private:
        EndpointRequestHolder();
        ~EndpointRequestHolder();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID value_;
      };

      class EndpointStatusType
      {
        public:
        static void fromJObject (CF::ConnectionManager::EndpointStatusType& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::ConnectionManager::EndpointStatusType& in, JNIEnv* env);

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
        EndpointStatusType();
        ~EndpointStatusType();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID fid_[4];
      };

      class EndpointStatusTypeHolder
      {
        public:
        static void fromJObject (CF::ConnectionManager::EndpointStatusType& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::ConnectionManager::EndpointStatusType& in, JNIEnv* env);

        static jclass getJClass (JNIEnv* env)
        {
          return cls_;
        }

        static void setValue (JNIEnv* env, jobject holder, const CF::ConnectionManager::EndpointStatusType& value);
        static jobject newInstance (JNIEnv* env);

        static void Load (JNIEnv* env)
        {
          omni_mutex_lock lock_(omnijni::sharedMutex());
          OnLoad(env);
        }

        static void OnLoad (JNIEnv* env);
        static void OnUnload (JNIEnv* env);

        private:
        EndpointStatusTypeHolder();
        ~EndpointStatusTypeHolder();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID value_;
      };

      class ConnectionStatusType
      {
        public:
        static void fromJObject (CF::ConnectionManager::ConnectionStatusType& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::ConnectionManager::ConnectionStatusType& in, JNIEnv* env);

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
        ConnectionStatusType();
        ~ConnectionStatusType();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID fid_[6];
      };

      class ConnectionStatusTypeHolder
      {
        public:
        static void fromJObject (CF::ConnectionManager::ConnectionStatusType& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::ConnectionManager::ConnectionStatusType& in, JNIEnv* env);

        static jclass getJClass (JNIEnv* env)
        {
          return cls_;
        }

        static void setValue (JNIEnv* env, jobject holder, const CF::ConnectionManager::ConnectionStatusType& value);
        static jobject newInstance (JNIEnv* env);

        static void Load (JNIEnv* env)
        {
          omni_mutex_lock lock_(omnijni::sharedMutex());
          OnLoad(env);
        }

        static void OnLoad (JNIEnv* env);
        static void OnUnload (JNIEnv* env);

        private:
        ConnectionStatusTypeHolder();
        ~ConnectionStatusTypeHolder();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID value_;
      };

      class ConnectionStatusSequence
      {
        public:
        static inline void fromJObject (CF::ConnectionManager::ConnectionStatusSequence& out, JNIEnv* env, jobject obj)
        {
          omnijni::fromJObject(out, env, obj);
        }
        static inline jobject toJObject (CF::ConnectionManager::ConnectionStatusSequence in, JNIEnv* env)
        {
          return omnijni::toJObject(in, env);
        }
      };

      class ConnectionStatusSequenceHolder
      {
        public:
        static void fromJObject (CF::ConnectionManager::ConnectionStatusSequence& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::ConnectionManager::ConnectionStatusSequence& in, JNIEnv* env);

        static jclass getJClass (JNIEnv* env)
        {
          return cls_;
        }

        static void setValue (JNIEnv* env, jobject holder, const CF::ConnectionManager::ConnectionStatusSequence& value);
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

      static void fromJObject (CF::ConnectionManager_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CF::ConnectionManager_ptr in, JNIEnv* env);

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
      ConnectionManager();
      ~ConnectionManager();
      static jclass cls_;
      static jmethodID ctor_;
    };

    class ConnectionManagerHolder
    {
      public:
      static void fromJObject (CF::ConnectionManager_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CF::ConnectionManager_ptr in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, CF::ConnectionManager_ptr value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      ConnectionManagerHolder();
      ~ConnectionManagerHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class ConnectionStatusIteratorPOA : public virtual omnijni::Servant, public virtual POA_CF::ConnectionStatusIterator
    {
      public:
      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      CORBA::Boolean next_one (CF::ConnectionManager::ConnectionStatusType_out connection);
      CORBA::Boolean next_n (CORBA::ULong count, CF::ConnectionManager::ConnectionStatusSequence_out connections);
      void destroy ();

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
      static jmethodID mid_[3];
    };

    class ConnectionStatusIterator
    {
      public:
      static void fromJObject (CF::ConnectionStatusIterator_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CF::ConnectionStatusIterator_ptr in, JNIEnv* env);

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
      ConnectionStatusIterator();
      ~ConnectionStatusIterator();
      static jclass cls_;
      static jmethodID ctor_;
    };

    class ConnectionStatusIteratorHolder
    {
      public:
      static void fromJObject (CF::ConnectionStatusIterator_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CF::ConnectionStatusIterator_ptr in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, CF::ConnectionStatusIterator_ptr value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      ConnectionStatusIteratorHolder();
      ~ConnectionStatusIteratorHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class ApplicationFactoryPOA : public virtual omnijni::Servant, public virtual POA_CF::ApplicationFactory
    {
      public:
      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      char* name ();
      char* identifier ();
      char* softwareProfile ();
      CF::Application_ptr create (const char* name, const CF::Properties& initConfiguration, const CF::DeviceAssignmentSequence& deviceAssignments);

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
      static jmethodID mid_[4];
    };

    class ApplicationFactory
    {
      public:
      class CreateApplicationRequestError
      {
        public:
        static void fromJObject (CF::ApplicationFactory::CreateApplicationRequestError& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::ApplicationFactory::CreateApplicationRequestError& in, JNIEnv* env);

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
        CreateApplicationRequestError();
        ~CreateApplicationRequestError();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID fid_[1];
      };

      class CreateApplicationError
      {
        public:
        static void fromJObject (CF::ApplicationFactory::CreateApplicationError& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::ApplicationFactory::CreateApplicationError& in, JNIEnv* env);

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
        CreateApplicationError();
        ~CreateApplicationError();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID fid_[2];
      };

      class CreateApplicationInsufficientCapacityError
      {
        public:
        static void fromJObject (CF::ApplicationFactory::CreateApplicationInsufficientCapacityError& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::ApplicationFactory::CreateApplicationInsufficientCapacityError& in, JNIEnv* env);

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
        CreateApplicationInsufficientCapacityError();
        ~CreateApplicationInsufficientCapacityError();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID fid_[2];
      };

      class InvalidInitConfiguration
      {
        public:
        static void fromJObject (CF::ApplicationFactory::InvalidInitConfiguration& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::ApplicationFactory::InvalidInitConfiguration& in, JNIEnv* env);

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
        InvalidInitConfiguration();
        ~InvalidInitConfiguration();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID fid_[1];
      };

      static void fromJObject (CF::ApplicationFactory_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CF::ApplicationFactory_ptr in, JNIEnv* env);

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
      ApplicationFactory();
      ~ApplicationFactory();
      static jclass cls_;
      static jmethodID ctor_;
    };

    class ApplicationFactoryHolder
    {
      public:
      static void fromJObject (CF::ApplicationFactory_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CF::ApplicationFactory_ptr in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, CF::ApplicationFactory_ptr value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      ApplicationFactoryHolder();
      ~ApplicationFactoryHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class DomainManagerPOA : public virtual omnijni::Servant, public virtual POA_CF::DomainManager, public virtual CF::jni::PropertyEmitterPOA, public virtual CF::jni::LoggingPOA
    {
      public:
      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      char* domainManagerProfile ();
      CF::DomainManager::DeviceManagerSequence* deviceManagers ();
      CF::DomainManager::ApplicationSequence* applications ();
      CF::DomainManager::ApplicationFactorySequence* applicationFactories ();
      CF::FileManager_ptr fileMgr ();
      CF::AllocationManager_ptr allocationMgr ();
      CF::ConnectionManager_ptr connectionMgr ();
      CF::EventChannelManager_ptr eventChannelMgr ();
      char* identifier ();
      char* name ();
      CF::DomainManager::DomainManagerSequence* remoteDomainManagers ();
      void registerDevice (CF::Device_ptr registeringDevice, CF::DeviceManager_ptr registeredDeviceMgr);
      void registerDeviceManager (CF::DeviceManager_ptr deviceMgr);
      void unregisterDeviceManager (CF::DeviceManager_ptr deviceMgr);
      void unregisterDevice (CF::Device_ptr unregisteringDevice);
      CF::Application_ptr createApplication (const char* profileFileName, const char* name, const CF::Properties& initConfiguration, const CF::DeviceAssignmentSequence& deviceAssignments);
      void installApplication (const char* profileFileName);
      void uninstallApplication (const char* applicationId);
      void registerService (CORBA::Object_ptr registeringService, CF::DeviceManager_ptr registeredDeviceMgr, const char* name);
      void unregisterService (CORBA::Object_ptr unregisteringService, const char* name);
      void registerWithEventChannel (CORBA::Object_ptr registeringObject, const char* registeringId, const char* eventChannelName);
      void unregisterFromEventChannel (const char* unregisteringId, const char* eventChannelName);
      void registerRemoteDomainManager (CF::DomainManager_ptr registeringDomainManager);
      void unregisterRemoteDomainManager (CF::DomainManager_ptr unregisteringDomainManager);

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
      static jmethodID mid_[24];
    };

    class DomainManager
    {
      public:
      class ApplicationInstallationError
      {
        public:
        static void fromJObject (CF::DomainManager::ApplicationInstallationError& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::DomainManager::ApplicationInstallationError& in, JNIEnv* env);

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
        ApplicationInstallationError();
        ~ApplicationInstallationError();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID fid_[2];
      };

      class ApplicationAlreadyInstalled
      {
        public:
        static void fromJObject (CF::DomainManager::ApplicationAlreadyInstalled& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::DomainManager::ApplicationAlreadyInstalled& in, JNIEnv* env);

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
        ApplicationAlreadyInstalled();
        ~ApplicationAlreadyInstalled();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID fid_[0];
      };

      class ApplicationSequence
      {
        public:
        static inline void fromJObject (CF::DomainManager::ApplicationSequence& out, JNIEnv* env, jobject obj)
        {
          omnijni::fromJObject(out, env, obj);
        }
        static inline jobject toJObject (CF::DomainManager::ApplicationSequence in, JNIEnv* env)
        {
          return omnijni::toJObject(in, env);
        }
      };

      class ApplicationSequenceHolder
      {
        public:
        static void fromJObject (CF::DomainManager::ApplicationSequence& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::DomainManager::ApplicationSequence& in, JNIEnv* env);

        static jclass getJClass (JNIEnv* env)
        {
          return cls_;
        }

        static void setValue (JNIEnv* env, jobject holder, const CF::DomainManager::ApplicationSequence& value);
        static jobject newInstance (JNIEnv* env);

        static void Load (JNIEnv* env)
        {
          omni_mutex_lock lock_(omnijni::sharedMutex());
          OnLoad(env);
        }

        static void OnLoad (JNIEnv* env);
        static void OnUnload (JNIEnv* env);

        private:
        ApplicationSequenceHolder();
        ~ApplicationSequenceHolder();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID value_;
      };

      class ApplicationFactorySequence
      {
        public:
        static inline void fromJObject (CF::DomainManager::ApplicationFactorySequence& out, JNIEnv* env, jobject obj)
        {
          omnijni::fromJObject(out, env, obj);
        }
        static inline jobject toJObject (CF::DomainManager::ApplicationFactorySequence in, JNIEnv* env)
        {
          return omnijni::toJObject(in, env);
        }
      };

      class ApplicationFactorySequenceHolder
      {
        public:
        static void fromJObject (CF::DomainManager::ApplicationFactorySequence& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::DomainManager::ApplicationFactorySequence& in, JNIEnv* env);

        static jclass getJClass (JNIEnv* env)
        {
          return cls_;
        }

        static void setValue (JNIEnv* env, jobject holder, const CF::DomainManager::ApplicationFactorySequence& value);
        static jobject newInstance (JNIEnv* env);

        static void Load (JNIEnv* env)
        {
          omni_mutex_lock lock_(omnijni::sharedMutex());
          OnLoad(env);
        }

        static void OnLoad (JNIEnv* env);
        static void OnUnload (JNIEnv* env);

        private:
        ApplicationFactorySequenceHolder();
        ~ApplicationFactorySequenceHolder();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID value_;
      };

      class DeviceManagerSequence
      {
        public:
        static inline void fromJObject (CF::DomainManager::DeviceManagerSequence& out, JNIEnv* env, jobject obj)
        {
          omnijni::fromJObject(out, env, obj);
        }
        static inline jobject toJObject (CF::DomainManager::DeviceManagerSequence in, JNIEnv* env)
        {
          return omnijni::toJObject(in, env);
        }
      };

      class DeviceManagerSequenceHolder
      {
        public:
        static void fromJObject (CF::DomainManager::DeviceManagerSequence& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::DomainManager::DeviceManagerSequence& in, JNIEnv* env);

        static jclass getJClass (JNIEnv* env)
        {
          return cls_;
        }

        static void setValue (JNIEnv* env, jobject holder, const CF::DomainManager::DeviceManagerSequence& value);
        static jobject newInstance (JNIEnv* env);

        static void Load (JNIEnv* env)
        {
          omni_mutex_lock lock_(omnijni::sharedMutex());
          OnLoad(env);
        }

        static void OnLoad (JNIEnv* env);
        static void OnUnload (JNIEnv* env);

        private:
        DeviceManagerSequenceHolder();
        ~DeviceManagerSequenceHolder();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID value_;
      };

      class DomainManagerSequence
      {
        public:
        static inline void fromJObject (CF::DomainManager::DomainManagerSequence& out, JNIEnv* env, jobject obj)
        {
          omnijni::fromJObject(out, env, obj);
        }
        static inline jobject toJObject (CF::DomainManager::DomainManagerSequence in, JNIEnv* env)
        {
          return omnijni::toJObject(in, env);
        }
      };

      class DomainManagerSequenceHolder
      {
        public:
        static void fromJObject (CF::DomainManager::DomainManagerSequence& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::DomainManager::DomainManagerSequence& in, JNIEnv* env);

        static jclass getJClass (JNIEnv* env)
        {
          return cls_;
        }

        static void setValue (JNIEnv* env, jobject holder, const CF::DomainManager::DomainManagerSequence& value);
        static jobject newInstance (JNIEnv* env);

        static void Load (JNIEnv* env)
        {
          omni_mutex_lock lock_(omnijni::sharedMutex());
          OnLoad(env);
        }

        static void OnLoad (JNIEnv* env);
        static void OnUnload (JNIEnv* env);

        private:
        DomainManagerSequenceHolder();
        ~DomainManagerSequenceHolder();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID value_;
      };

      class InvalidIdentifier
      {
        public:
        static void fromJObject (CF::DomainManager::InvalidIdentifier& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::DomainManager::InvalidIdentifier& in, JNIEnv* env);

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
        InvalidIdentifier();
        ~InvalidIdentifier();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID fid_[0];
      };

      class DeviceManagerNotRegistered
      {
        public:
        static void fromJObject (CF::DomainManager::DeviceManagerNotRegistered& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::DomainManager::DeviceManagerNotRegistered& in, JNIEnv* env);

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
        DeviceManagerNotRegistered();
        ~DeviceManagerNotRegistered();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID fid_[0];
      };

      class ApplicationUninstallationError
      {
        public:
        static void fromJObject (CF::DomainManager::ApplicationUninstallationError& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::DomainManager::ApplicationUninstallationError& in, JNIEnv* env);

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
        ApplicationUninstallationError();
        ~ApplicationUninstallationError();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID fid_[2];
      };

      class RegisterError
      {
        public:
        static void fromJObject (CF::DomainManager::RegisterError& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::DomainManager::RegisterError& in, JNIEnv* env);

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
        RegisterError();
        ~RegisterError();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID fid_[2];
      };

      class UnregisterError
      {
        public:
        static void fromJObject (CF::DomainManager::UnregisterError& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::DomainManager::UnregisterError& in, JNIEnv* env);

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
        UnregisterError();
        ~UnregisterError();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID fid_[2];
      };

      class AlreadyConnected
      {
        public:
        static void fromJObject (CF::DomainManager::AlreadyConnected& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::DomainManager::AlreadyConnected& in, JNIEnv* env);

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
        AlreadyConnected();
        ~AlreadyConnected();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID fid_[0];
      };

      class InvalidEventChannelName
      {
        public:
        static void fromJObject (CF::DomainManager::InvalidEventChannelName& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::DomainManager::InvalidEventChannelName& in, JNIEnv* env);

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
        InvalidEventChannelName();
        ~InvalidEventChannelName();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID fid_[0];
      };

      class NotConnected
      {
        public:
        static void fromJObject (CF::DomainManager::NotConnected& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::DomainManager::NotConnected& in, JNIEnv* env);

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
        NotConnected();
        ~NotConnected();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID fid_[0];
      };

      static void fromJObject (CF::DomainManager_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CF::DomainManager_ptr in, JNIEnv* env);

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
      DomainManager();
      ~DomainManager();
      static jclass cls_;
      static jmethodID ctor_;
    };

    class DomainManagerHolder
    {
      public:
      static void fromJObject (CF::DomainManager_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CF::DomainManager_ptr in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, CF::DomainManager_ptr value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      DomainManagerHolder();
      ~DomainManagerHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class PortSupplierPOA : public virtual omnijni::Servant, public virtual POA_CF::PortSupplier
    {
      public:
      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      CORBA::Object_ptr getPort (const char* name);

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

    class PortSupplier
    {
      public:
      class UnknownPort
      {
        public:
        static void fromJObject (CF::PortSupplier::UnknownPort& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::PortSupplier::UnknownPort& in, JNIEnv* env);

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
        UnknownPort();
        ~UnknownPort();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID fid_[0];
      };

      static void fromJObject (CF::PortSupplier_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CF::PortSupplier_ptr in, JNIEnv* env);

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
      PortSupplier();
      ~PortSupplier();
      static jclass cls_;
      static jmethodID ctor_;
    };

    class PortSupplierHolder
    {
      public:
      static void fromJObject (CF::PortSupplier_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CF::PortSupplier_ptr in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, CF::PortSupplier_ptr value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      PortSupplierHolder();
      ~PortSupplierHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class PortSetPOA : public virtual omnijni::Servant, public virtual POA_CF::PortSet, public virtual CF::jni::PortSupplierPOA
    {
      public:
      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      CF::PortSet::PortInfoSequence* getPortSet ();

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

    class PortSet
    {
      public:
      class PortInfoType
      {
        public:
        static void fromJObject (CF::PortSet::PortInfoType& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::PortSet::PortInfoType& in, JNIEnv* env);

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
        PortInfoType();
        ~PortInfoType();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID fid_[5];
      };

      class PortInfoTypeHolder
      {
        public:
        static void fromJObject (CF::PortSet::PortInfoType& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::PortSet::PortInfoType& in, JNIEnv* env);

        static jclass getJClass (JNIEnv* env)
        {
          return cls_;
        }

        static void setValue (JNIEnv* env, jobject holder, const CF::PortSet::PortInfoType& value);
        static jobject newInstance (JNIEnv* env);

        static void Load (JNIEnv* env)
        {
          omni_mutex_lock lock_(omnijni::sharedMutex());
          OnLoad(env);
        }

        static void OnLoad (JNIEnv* env);
        static void OnUnload (JNIEnv* env);

        private:
        PortInfoTypeHolder();
        ~PortInfoTypeHolder();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID value_;
      };

      class PortInfoSequence
      {
        public:
        static inline void fromJObject (CF::PortSet::PortInfoSequence& out, JNIEnv* env, jobject obj)
        {
          omnijni::fromJObject(out, env, obj);
        }
        static inline jobject toJObject (CF::PortSet::PortInfoSequence in, JNIEnv* env)
        {
          return omnijni::toJObject(in, env);
        }
      };

      class PortInfoSequenceHolder
      {
        public:
        static void fromJObject (CF::PortSet::PortInfoSequence& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::PortSet::PortInfoSequence& in, JNIEnv* env);

        static jclass getJClass (JNIEnv* env)
        {
          return cls_;
        }

        static void setValue (JNIEnv* env, jobject holder, const CF::PortSet::PortInfoSequence& value);
        static jobject newInstance (JNIEnv* env);

        static void Load (JNIEnv* env)
        {
          omni_mutex_lock lock_(omnijni::sharedMutex());
          OnLoad(env);
        }

        static void OnLoad (JNIEnv* env);
        static void OnUnload (JNIEnv* env);

        private:
        PortInfoSequenceHolder();
        ~PortInfoSequenceHolder();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID value_;
      };

      static void fromJObject (CF::PortSet_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CF::PortSet_ptr in, JNIEnv* env);

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
      PortSet();
      ~PortSet();
      static jclass cls_;
      static jmethodID ctor_;
    };

    class PortSetHolder
    {
      public:
      static void fromJObject (CF::PortSet_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CF::PortSet_ptr in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, CF::PortSet_ptr value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      PortSetHolder();
      ~PortSetHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class ResourcePOA : public virtual omnijni::Servant, public virtual POA_CF::Resource, public virtual CF::jni::LifeCyclePOA, public virtual CF::jni::TestableObjectPOA, public virtual CF::jni::PropertyEmitterPOA, public virtual CF::jni::PortSetPOA, public virtual CF::jni::LoggingPOA
    {
      public:
      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      char* identifier ();
      CORBA::Boolean started ();
      char* softwareProfile ();
      void start ();
      void stop ();

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
      static jmethodID mid_[5];
    };

    class Resource
    {
      public:
      class StartError
      {
        public:
        static void fromJObject (CF::Resource::StartError& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::Resource::StartError& in, JNIEnv* env);

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
        StartError();
        ~StartError();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID fid_[2];
      };

      class StopError
      {
        public:
        static void fromJObject (CF::Resource::StopError& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::Resource::StopError& in, JNIEnv* env);

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
        StopError();
        ~StopError();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID fid_[2];
      };

      static void fromJObject (CF::Resource_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CF::Resource_ptr in, JNIEnv* env);

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
      Resource();
      ~Resource();
      static jclass cls_;
      static jmethodID ctor_;
    };

    class ResourceHolder
    {
      public:
      static void fromJObject (CF::Resource_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CF::Resource_ptr in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, CF::Resource_ptr value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      ResourceHolder();
      ~ResourceHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class DevicePOA : public virtual omnijni::Servant, public virtual POA_CF::Device, public virtual CF::jni::ResourcePOA
    {
      public:
      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      CF::Device::UsageType usageState ();
      CF::Device::AdminType adminState ();
      void adminState (CF::Device::AdminType value);
      CF::Device::OperationalType operationalState ();
      char* label ();
      CF::AggregateDevice_ptr compositeDevice ();
      CORBA::Boolean allocateCapacity (const CF::Properties& capacities);
      void deallocateCapacity (const CF::Properties& capacities);

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
      static jmethodID mid_[8];
    };

    class Device
    {
      public:
      class InvalidState
      {
        public:
        static void fromJObject (CF::Device::InvalidState& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::Device::InvalidState& in, JNIEnv* env);

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
        InvalidState();
        ~InvalidState();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID fid_[1];
      };

      class InvalidCapacity
      {
        public:
        static void fromJObject (CF::Device::InvalidCapacity& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::Device::InvalidCapacity& in, JNIEnv* env);

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
        InvalidCapacity();
        ~InvalidCapacity();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID fid_[2];
      };

      class InsufficientCapacity
      {
        public:
        static void fromJObject (CF::Device::InsufficientCapacity& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::Device::InsufficientCapacity& in, JNIEnv* env);

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
        InsufficientCapacity();
        ~InsufficientCapacity();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID fid_[2];
      };

      class AdminType
      {
        public:
        static void fromJObject (CF::Device::AdminType& out, JNIEnv* env, jobject obj);
        static jobject toJObject (CF::Device::AdminType in, JNIEnv* env);

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
        AdminType();
        ~AdminType();
        static jclass cls_;
        static jmethodID from_int_;
        static jmethodID value_;
      };

      class OperationalType
      {
        public:
        static void fromJObject (CF::Device::OperationalType& out, JNIEnv* env, jobject obj);
        static jobject toJObject (CF::Device::OperationalType in, JNIEnv* env);

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
        OperationalType();
        ~OperationalType();
        static jclass cls_;
        static jmethodID from_int_;
        static jmethodID value_;
      };

      class UsageType
      {
        public:
        static void fromJObject (CF::Device::UsageType& out, JNIEnv* env, jobject obj);
        static jobject toJObject (CF::Device::UsageType in, JNIEnv* env);

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
        UsageType();
        ~UsageType();
        static jclass cls_;
        static jmethodID from_int_;
        static jmethodID value_;
      };

      static void fromJObject (CF::Device_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CF::Device_ptr in, JNIEnv* env);

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
      Device();
      ~Device();
      static jclass cls_;
      static jmethodID ctor_;
    };

    class DeviceHolder
    {
      public:
      static void fromJObject (CF::Device_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CF::Device_ptr in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, CF::Device_ptr value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      DeviceHolder();
      ~DeviceHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class ApplicationRegistrarPOA : public virtual omnijni::Servant, public virtual POA_CF::ApplicationRegistrar, public virtual CosNaming::jni::NamingContextPOA
    {
      public:
      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      CF::Application_ptr app ();
      CF::DomainManager_ptr domMgr ();
      void registerComponent (const char* Name, CF::Resource_ptr obj);

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
      static jmethodID mid_[3];
    };

    class ApplicationRegistrar
    {
      public:
      static void fromJObject (CF::ApplicationRegistrar_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CF::ApplicationRegistrar_ptr in, JNIEnv* env);

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
      ApplicationRegistrar();
      ~ApplicationRegistrar();
      static jclass cls_;
      static jmethodID ctor_;
    };

    class ApplicationRegistrarHolder
    {
      public:
      static void fromJObject (CF::ApplicationRegistrar_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CF::ApplicationRegistrar_ptr in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, CF::ApplicationRegistrar_ptr value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      ApplicationRegistrarHolder();
      ~ApplicationRegistrarHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class ApplicationPOA : public virtual omnijni::Servant, public virtual POA_CF::Application, public virtual CF::jni::ResourcePOA
    {
      public:
      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      CF::Components* registeredComponents ();
      CF::Application::ComponentElementSequence* componentNamingContexts ();
      CF::Application::ComponentProcessIdSequence* componentProcessIds ();
      CF::DeviceAssignmentSequence* componentDevices ();
      CF::Application::ComponentElementSequence* componentImplementations ();
      char* profile ();
      char* name ();
      CORBA::Boolean aware ();
      CORBA::Float stopTimeout ();
      void stopTimeout (CORBA::Float value);
      CF::Properties* metrics (const CF::StringSequence& components, const CF::StringSequence& attributes);

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
      static jmethodID mid_[11];
    };

    class Application
    {
      public:
      class ComponentProcessIdType
      {
        public:
        static void fromJObject (CF::Application::ComponentProcessIdType& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::Application::ComponentProcessIdType& in, JNIEnv* env);

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
        ComponentProcessIdType();
        ~ComponentProcessIdType();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID fid_[2];
      };

      class ComponentProcessIdTypeHolder
      {
        public:
        static void fromJObject (CF::Application::ComponentProcessIdType& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::Application::ComponentProcessIdType& in, JNIEnv* env);

        static jclass getJClass (JNIEnv* env)
        {
          return cls_;
        }

        static void setValue (JNIEnv* env, jobject holder, const CF::Application::ComponentProcessIdType& value);
        static jobject newInstance (JNIEnv* env);

        static void Load (JNIEnv* env)
        {
          omni_mutex_lock lock_(omnijni::sharedMutex());
          OnLoad(env);
        }

        static void OnLoad (JNIEnv* env);
        static void OnUnload (JNIEnv* env);

        private:
        ComponentProcessIdTypeHolder();
        ~ComponentProcessIdTypeHolder();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID value_;
      };

      class ComponentProcessIdSequence
      {
        public:
        static inline void fromJObject (CF::Application::ComponentProcessIdSequence& out, JNIEnv* env, jobject obj)
        {
          omnijni::fromJObject(out, env, obj);
        }
        static inline jobject toJObject (CF::Application::ComponentProcessIdSequence in, JNIEnv* env)
        {
          return omnijni::toJObject(in, env);
        }
      };

      class ComponentProcessIdSequenceHolder
      {
        public:
        static void fromJObject (CF::Application::ComponentProcessIdSequence& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::Application::ComponentProcessIdSequence& in, JNIEnv* env);

        static jclass getJClass (JNIEnv* env)
        {
          return cls_;
        }

        static void setValue (JNIEnv* env, jobject holder, const CF::Application::ComponentProcessIdSequence& value);
        static jobject newInstance (JNIEnv* env);

        static void Load (JNIEnv* env)
        {
          omni_mutex_lock lock_(omnijni::sharedMutex());
          OnLoad(env);
        }

        static void OnLoad (JNIEnv* env);
        static void OnUnload (JNIEnv* env);

        private:
        ComponentProcessIdSequenceHolder();
        ~ComponentProcessIdSequenceHolder();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID value_;
      };

      class ComponentElementType
      {
        public:
        static void fromJObject (CF::Application::ComponentElementType& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::Application::ComponentElementType& in, JNIEnv* env);

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
        ComponentElementType();
        ~ComponentElementType();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID fid_[2];
      };

      class ComponentElementTypeHolder
      {
        public:
        static void fromJObject (CF::Application::ComponentElementType& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::Application::ComponentElementType& in, JNIEnv* env);

        static jclass getJClass (JNIEnv* env)
        {
          return cls_;
        }

        static void setValue (JNIEnv* env, jobject holder, const CF::Application::ComponentElementType& value);
        static jobject newInstance (JNIEnv* env);

        static void Load (JNIEnv* env)
        {
          omni_mutex_lock lock_(omnijni::sharedMutex());
          OnLoad(env);
        }

        static void OnLoad (JNIEnv* env);
        static void OnUnload (JNIEnv* env);

        private:
        ComponentElementTypeHolder();
        ~ComponentElementTypeHolder();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID value_;
      };

      class ComponentElementSequence
      {
        public:
        static inline void fromJObject (CF::Application::ComponentElementSequence& out, JNIEnv* env, jobject obj)
        {
          omnijni::fromJObject(out, env, obj);
        }
        static inline jobject toJObject (CF::Application::ComponentElementSequence in, JNIEnv* env)
        {
          return omnijni::toJObject(in, env);
        }
      };

      class ComponentElementSequenceHolder
      {
        public:
        static void fromJObject (CF::Application::ComponentElementSequence& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::Application::ComponentElementSequence& in, JNIEnv* env);

        static jclass getJClass (JNIEnv* env)
        {
          return cls_;
        }

        static void setValue (JNIEnv* env, jobject holder, const CF::Application::ComponentElementSequence& value);
        static jobject newInstance (JNIEnv* env);

        static void Load (JNIEnv* env)
        {
          omni_mutex_lock lock_(omnijni::sharedMutex());
          OnLoad(env);
        }

        static void OnLoad (JNIEnv* env);
        static void OnUnload (JNIEnv* env);

        private:
        ComponentElementSequenceHolder();
        ~ComponentElementSequenceHolder();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID value_;
      };

      class InvalidMetric
      {
        public:
        static void fromJObject (CF::Application::InvalidMetric& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::Application::InvalidMetric& in, JNIEnv* env);

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
        InvalidMetric();
        ~InvalidMetric();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID fid_[2];
      };

      static void fromJObject (CF::Application_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CF::Application_ptr in, JNIEnv* env);

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
      Application();
      ~Application();
      static jclass cls_;
      static jmethodID ctor_;
    };

    class ApplicationHolder
    {
      public:
      static void fromJObject (CF::Application_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CF::Application_ptr in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, CF::Application_ptr value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      ApplicationHolder();
      ~ApplicationHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class LoadableDevicePOA : public virtual omnijni::Servant, public virtual POA_CF::LoadableDevice, public virtual CF::jni::DevicePOA
    {
      public:
      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      void load (CF::FileSystem_ptr fs, const char* fileName, CF::LoadableDevice::LoadType loadKind);
      void unload (const char* fileName);

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

    class LoadableDevice
    {
      public:
      class LoadType
      {
        public:
        static void fromJObject (CF::LoadableDevice::LoadType& out, JNIEnv* env, jobject obj);
        static jobject toJObject (CF::LoadableDevice::LoadType in, JNIEnv* env);

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
        LoadType();
        ~LoadType();
        static jclass cls_;
        static jmethodID from_int_;
        static jmethodID value_;
      };

      class InvalidLoadKind
      {
        public:
        static void fromJObject (CF::LoadableDevice::InvalidLoadKind& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::LoadableDevice::InvalidLoadKind& in, JNIEnv* env);

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
        InvalidLoadKind();
        ~InvalidLoadKind();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID fid_[0];
      };

      class LoadFail
      {
        public:
        static void fromJObject (CF::LoadableDevice::LoadFail& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::LoadableDevice::LoadFail& in, JNIEnv* env);

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
        LoadFail();
        ~LoadFail();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID fid_[2];
      };

      static void fromJObject (CF::LoadableDevice_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CF::LoadableDevice_ptr in, JNIEnv* env);

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
      LoadableDevice();
      ~LoadableDevice();
      static jclass cls_;
      static jmethodID ctor_;
    };

    class LoadableDeviceHolder
    {
      public:
      static void fromJObject (CF::LoadableDevice_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CF::LoadableDevice_ptr in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, CF::LoadableDevice_ptr value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      LoadableDeviceHolder();
      ~LoadableDeviceHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class ExecutableDevicePOA : public virtual omnijni::Servant, public virtual POA_CF::ExecutableDevice, public virtual CF::jni::LoadableDevicePOA
    {
      public:
      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      void terminate (CORBA::Long processId);
      CORBA::Long execute (const char* name, const CF::Properties& options, const CF::Properties& parameters);
      CORBA::Long executeLinked (const char* name, const CF::Properties& options, const CF::Properties& parameters, const CF::StringSequence& deps);

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
      static jmethodID mid_[3];
    };

    class ExecutableDevice
    {
      public:
      class InvalidProcess
      {
        public:
        static void fromJObject (CF::ExecutableDevice::InvalidProcess& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::ExecutableDevice::InvalidProcess& in, JNIEnv* env);

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
        InvalidProcess();
        ~InvalidProcess();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID fid_[2];
      };

      class InvalidFunction
      {
        public:
        static void fromJObject (CF::ExecutableDevice::InvalidFunction& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::ExecutableDevice::InvalidFunction& in, JNIEnv* env);

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
        InvalidFunction();
        ~InvalidFunction();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID fid_[0];
      };

      class InvalidParameters
      {
        public:
        static void fromJObject (CF::ExecutableDevice::InvalidParameters& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::ExecutableDevice::InvalidParameters& in, JNIEnv* env);

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
        InvalidParameters();
        ~InvalidParameters();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID fid_[1];
      };

      class InvalidOptions
      {
        public:
        static void fromJObject (CF::ExecutableDevice::InvalidOptions& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::ExecutableDevice::InvalidOptions& in, JNIEnv* env);

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
        InvalidOptions();
        ~InvalidOptions();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID fid_[1];
      };

      class ExecuteFail
      {
        public:
        static void fromJObject (CF::ExecutableDevice::ExecuteFail& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::ExecutableDevice::ExecuteFail& in, JNIEnv* env);

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
        ExecuteFail();
        ~ExecuteFail();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID fid_[2];
      };

      static void fromJObject (CF::ExecutableDevice_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CF::ExecutableDevice_ptr in, JNIEnv* env);

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
      ExecutableDevice();
      ~ExecutableDevice();
      static jclass cls_;
      static jmethodID ctor_;
    };

    class ExecutableDeviceHolder
    {
      public:
      static void fromJObject (CF::ExecutableDevice_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CF::ExecutableDevice_ptr in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, CF::ExecutableDevice_ptr value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      ExecutableDeviceHolder();
      ~ExecutableDeviceHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class DeviceManagerPOA : public virtual omnijni::Servant, public virtual POA_CF::DeviceManager, public virtual CF::jni::PropertyEmitterPOA, public virtual CF::jni::PortSetPOA, public virtual CF::jni::LoggingPOA
    {
      public:
      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      char* deviceConfigurationProfile ();
      CF::FileSystem_ptr fileSys ();
      char* identifier ();
      char* label ();
      CF::DomainManager_ptr domMgr ();
      CF::DeviceSequence* registeredDevices ();
      CF::DeviceManager::ServiceSequence* registeredServices ();
      void registerDevice (CF::Device_ptr registeringDevice);
      void unregisterDevice (CF::Device_ptr registeredDevice);
      void shutdown ();
      void registerService (CORBA::Object_ptr registeringService, const char* name);
      void unregisterService (CORBA::Object_ptr unregisteringService, const char* name);
      char* getComponentImplementationId (const char* componentInstantiationId);

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
      static jmethodID mid_[13];
    };

    class DeviceManager
    {
      public:
      class ServiceType
      {
        public:
        static void fromJObject (CF::DeviceManager::ServiceType& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::DeviceManager::ServiceType& in, JNIEnv* env);

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
        ServiceType();
        ~ServiceType();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID fid_[2];
      };

      class ServiceTypeHolder
      {
        public:
        static void fromJObject (CF::DeviceManager::ServiceType& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::DeviceManager::ServiceType& in, JNIEnv* env);

        static jclass getJClass (JNIEnv* env)
        {
          return cls_;
        }

        static void setValue (JNIEnv* env, jobject holder, const CF::DeviceManager::ServiceType& value);
        static jobject newInstance (JNIEnv* env);

        static void Load (JNIEnv* env)
        {
          omni_mutex_lock lock_(omnijni::sharedMutex());
          OnLoad(env);
        }

        static void OnLoad (JNIEnv* env);
        static void OnUnload (JNIEnv* env);

        private:
        ServiceTypeHolder();
        ~ServiceTypeHolder();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID value_;
      };

      class ServiceSequence
      {
        public:
        static inline void fromJObject (CF::DeviceManager::ServiceSequence& out, JNIEnv* env, jobject obj)
        {
          omnijni::fromJObject(out, env, obj);
        }
        static inline jobject toJObject (CF::DeviceManager::ServiceSequence in, JNIEnv* env)
        {
          return omnijni::toJObject(in, env);
        }
      };

      class ServiceSequenceHolder
      {
        public:
        static void fromJObject (CF::DeviceManager::ServiceSequence& out, JNIEnv* env, jobject obj);
        static jobject toJObject (const CF::DeviceManager::ServiceSequence& in, JNIEnv* env);

        static jclass getJClass (JNIEnv* env)
        {
          return cls_;
        }

        static void setValue (JNIEnv* env, jobject holder, const CF::DeviceManager::ServiceSequence& value);
        static jobject newInstance (JNIEnv* env);

        static void Load (JNIEnv* env)
        {
          omni_mutex_lock lock_(omnijni::sharedMutex());
          OnLoad(env);
        }

        static void OnLoad (JNIEnv* env);
        static void OnUnload (JNIEnv* env);

        private:
        ServiceSequenceHolder();
        ~ServiceSequenceHolder();
        static jclass cls_;
        static jmethodID ctor_;
        static jfieldID value_;
      };

      static void fromJObject (CF::DeviceManager_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CF::DeviceManager_ptr in, JNIEnv* env);

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
      DeviceManager();
      ~DeviceManager();
      static jclass cls_;
      static jmethodID ctor_;
    };

    class DeviceManagerHolder
    {
      public:
      static void fromJObject (CF::DeviceManager_out out, JNIEnv* env, jobject obj);
      static jobject toJObject (CF::DeviceManager_ptr in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, CF::DeviceManager_ptr value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      DeviceManagerHolder();
      ~DeviceManagerHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class complexDouble
    {
      public:
      static void fromJObject (CF::complexDouble& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const CF::complexDouble& in, JNIEnv* env);

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
      complexDouble();
      ~complexDouble();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID fid_[2];
    };

    class complexDoubleHolder
    {
      public:
      static void fromJObject (CF::complexDouble& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const CF::complexDouble& in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, const CF::complexDouble& value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      complexDoubleHolder();
      ~complexDoubleHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class complexDoubleSeq
    {
      public:
      static inline void fromJObject (CF::complexDoubleSeq& out, JNIEnv* env, jobject obj)
      {
        omnijni::fromJObject(out, env, obj);
      }
      static inline jobject toJObject (CF::complexDoubleSeq in, JNIEnv* env)
      {
        return omnijni::toJObject(in, env);
      }
    };

    class complexDoubleSeqHolder
    {
      public:
      static void fromJObject (CF::complexDoubleSeq& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const CF::complexDoubleSeq& in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, const CF::complexDoubleSeq& value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      complexDoubleSeqHolder();
      ~complexDoubleSeqHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class complexFloat
    {
      public:
      static void fromJObject (CF::complexFloat& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const CF::complexFloat& in, JNIEnv* env);

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
      complexFloat();
      ~complexFloat();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID fid_[2];
    };

    class complexFloatHolder
    {
      public:
      static void fromJObject (CF::complexFloat& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const CF::complexFloat& in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, const CF::complexFloat& value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      complexFloatHolder();
      ~complexFloatHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class complexFloatSeq
    {
      public:
      static inline void fromJObject (CF::complexFloatSeq& out, JNIEnv* env, jobject obj)
      {
        omnijni::fromJObject(out, env, obj);
      }
      static inline jobject toJObject (CF::complexFloatSeq in, JNIEnv* env)
      {
        return omnijni::toJObject(in, env);
      }
    };

    class complexFloatSeqHolder
    {
      public:
      static void fromJObject (CF::complexFloatSeq& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const CF::complexFloatSeq& in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, const CF::complexFloatSeq& value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      complexFloatSeqHolder();
      ~complexFloatSeqHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class complexBoolean
    {
      public:
      static void fromJObject (CF::complexBoolean& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const CF::complexBoolean& in, JNIEnv* env);

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
      complexBoolean();
      ~complexBoolean();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID fid_[2];
    };

    class complexBooleanHolder
    {
      public:
      static void fromJObject (CF::complexBoolean& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const CF::complexBoolean& in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, const CF::complexBoolean& value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      complexBooleanHolder();
      ~complexBooleanHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class complexBooleanSeq
    {
      public:
      static inline void fromJObject (CF::complexBooleanSeq& out, JNIEnv* env, jobject obj)
      {
        omnijni::fromJObject(out, env, obj);
      }
      static inline jobject toJObject (CF::complexBooleanSeq in, JNIEnv* env)
      {
        return omnijni::toJObject(in, env);
      }
    };

    class complexBooleanSeqHolder
    {
      public:
      static void fromJObject (CF::complexBooleanSeq& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const CF::complexBooleanSeq& in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, const CF::complexBooleanSeq& value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      complexBooleanSeqHolder();
      ~complexBooleanSeqHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class complexULong
    {
      public:
      static void fromJObject (CF::complexULong& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const CF::complexULong& in, JNIEnv* env);

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
      complexULong();
      ~complexULong();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID fid_[2];
    };

    class complexULongHolder
    {
      public:
      static void fromJObject (CF::complexULong& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const CF::complexULong& in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, const CF::complexULong& value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      complexULongHolder();
      ~complexULongHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class complexULongSeq
    {
      public:
      static inline void fromJObject (CF::complexULongSeq& out, JNIEnv* env, jobject obj)
      {
        omnijni::fromJObject(out, env, obj);
      }
      static inline jobject toJObject (CF::complexULongSeq in, JNIEnv* env)
      {
        return omnijni::toJObject(in, env);
      }
    };

    class complexULongSeqHolder
    {
      public:
      static void fromJObject (CF::complexULongSeq& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const CF::complexULongSeq& in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, const CF::complexULongSeq& value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      complexULongSeqHolder();
      ~complexULongSeqHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class complexShort
    {
      public:
      static void fromJObject (CF::complexShort& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const CF::complexShort& in, JNIEnv* env);

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
      complexShort();
      ~complexShort();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID fid_[2];
    };

    class complexShortHolder
    {
      public:
      static void fromJObject (CF::complexShort& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const CF::complexShort& in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, const CF::complexShort& value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      complexShortHolder();
      ~complexShortHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class complexShortSeq
    {
      public:
      static inline void fromJObject (CF::complexShortSeq& out, JNIEnv* env, jobject obj)
      {
        omnijni::fromJObject(out, env, obj);
      }
      static inline jobject toJObject (CF::complexShortSeq in, JNIEnv* env)
      {
        return omnijni::toJObject(in, env);
      }
    };

    class complexShortSeqHolder
    {
      public:
      static void fromJObject (CF::complexShortSeq& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const CF::complexShortSeq& in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, const CF::complexShortSeq& value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      complexShortSeqHolder();
      ~complexShortSeqHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class complexOctet
    {
      public:
      static void fromJObject (CF::complexOctet& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const CF::complexOctet& in, JNIEnv* env);

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
      complexOctet();
      ~complexOctet();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID fid_[2];
    };

    class complexOctetHolder
    {
      public:
      static void fromJObject (CF::complexOctet& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const CF::complexOctet& in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, const CF::complexOctet& value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      complexOctetHolder();
      ~complexOctetHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class complexOctetSeq
    {
      public:
      static inline void fromJObject (CF::complexOctetSeq& out, JNIEnv* env, jobject obj)
      {
        omnijni::fromJObject(out, env, obj);
      }
      static inline jobject toJObject (CF::complexOctetSeq in, JNIEnv* env)
      {
        return omnijni::toJObject(in, env);
      }
    };

    class complexOctetSeqHolder
    {
      public:
      static void fromJObject (CF::complexOctetSeq& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const CF::complexOctetSeq& in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, const CF::complexOctetSeq& value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      complexOctetSeqHolder();
      ~complexOctetSeqHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class complexChar
    {
      public:
      static void fromJObject (CF::complexChar& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const CF::complexChar& in, JNIEnv* env);

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
      complexChar();
      ~complexChar();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID fid_[2];
    };

    class complexCharHolder
    {
      public:
      static void fromJObject (CF::complexChar& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const CF::complexChar& in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, const CF::complexChar& value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      complexCharHolder();
      ~complexCharHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class complexCharSeq
    {
      public:
      static inline void fromJObject (CF::complexCharSeq& out, JNIEnv* env, jobject obj)
      {
        omnijni::fromJObject(out, env, obj);
      }
      static inline jobject toJObject (CF::complexCharSeq in, JNIEnv* env)
      {
        return omnijni::toJObject(in, env);
      }
    };

    class complexCharSeqHolder
    {
      public:
      static void fromJObject (CF::complexCharSeq& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const CF::complexCharSeq& in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, const CF::complexCharSeq& value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      complexCharSeqHolder();
      ~complexCharSeqHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class complexUShort
    {
      public:
      static void fromJObject (CF::complexUShort& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const CF::complexUShort& in, JNIEnv* env);

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
      complexUShort();
      ~complexUShort();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID fid_[2];
    };

    class complexUShortHolder
    {
      public:
      static void fromJObject (CF::complexUShort& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const CF::complexUShort& in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, const CF::complexUShort& value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      complexUShortHolder();
      ~complexUShortHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class complexUShortSeq
    {
      public:
      static inline void fromJObject (CF::complexUShortSeq& out, JNIEnv* env, jobject obj)
      {
        omnijni::fromJObject(out, env, obj);
      }
      static inline jobject toJObject (CF::complexUShortSeq in, JNIEnv* env)
      {
        return omnijni::toJObject(in, env);
      }
    };

    class complexUShortSeqHolder
    {
      public:
      static void fromJObject (CF::complexUShortSeq& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const CF::complexUShortSeq& in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, const CF::complexUShortSeq& value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      complexUShortSeqHolder();
      ~complexUShortSeqHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class complexLong
    {
      public:
      static void fromJObject (CF::complexLong& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const CF::complexLong& in, JNIEnv* env);

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
      complexLong();
      ~complexLong();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID fid_[2];
    };

    class complexLongHolder
    {
      public:
      static void fromJObject (CF::complexLong& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const CF::complexLong& in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, const CF::complexLong& value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      complexLongHolder();
      ~complexLongHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class complexLongSeq
    {
      public:
      static inline void fromJObject (CF::complexLongSeq& out, JNIEnv* env, jobject obj)
      {
        omnijni::fromJObject(out, env, obj);
      }
      static inline jobject toJObject (CF::complexLongSeq in, JNIEnv* env)
      {
        return omnijni::toJObject(in, env);
      }
    };

    class complexLongSeqHolder
    {
      public:
      static void fromJObject (CF::complexLongSeq& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const CF::complexLongSeq& in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, const CF::complexLongSeq& value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      complexLongSeqHolder();
      ~complexLongSeqHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class complexLongLong
    {
      public:
      static void fromJObject (CF::complexLongLong& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const CF::complexLongLong& in, JNIEnv* env);

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
      complexLongLong();
      ~complexLongLong();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID fid_[2];
    };

    class complexLongLongHolder
    {
      public:
      static void fromJObject (CF::complexLongLong& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const CF::complexLongLong& in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, const CF::complexLongLong& value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      complexLongLongHolder();
      ~complexLongLongHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class complexLongLongSeq
    {
      public:
      static inline void fromJObject (CF::complexLongLongSeq& out, JNIEnv* env, jobject obj)
      {
        omnijni::fromJObject(out, env, obj);
      }
      static inline jobject toJObject (CF::complexLongLongSeq in, JNIEnv* env)
      {
        return omnijni::toJObject(in, env);
      }
    };

    class complexLongLongSeqHolder
    {
      public:
      static void fromJObject (CF::complexLongLongSeq& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const CF::complexLongLongSeq& in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, const CF::complexLongLongSeq& value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      complexLongLongSeqHolder();
      ~complexLongLongSeqHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class complexULongLong
    {
      public:
      static void fromJObject (CF::complexULongLong& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const CF::complexULongLong& in, JNIEnv* env);

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
      complexULongLong();
      ~complexULongLong();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID fid_[2];
    };

    class complexULongLongHolder
    {
      public:
      static void fromJObject (CF::complexULongLong& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const CF::complexULongLong& in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, const CF::complexULongLong& value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      complexULongLongHolder();
      ~complexULongLongHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

    class complexULongLongSeq
    {
      public:
      static inline void fromJObject (CF::complexULongLongSeq& out, JNIEnv* env, jobject obj)
      {
        omnijni::fromJObject(out, env, obj);
      }
      static inline jobject toJObject (CF::complexULongLongSeq in, JNIEnv* env)
      {
        return omnijni::toJObject(in, env);
      }
    };

    class complexULongLongSeqHolder
    {
      public:
      static void fromJObject (CF::complexULongLongSeq& out, JNIEnv* env, jobject obj);
      static jobject toJObject (const CF::complexULongLongSeq& in, JNIEnv* env);

      static jclass getJClass (JNIEnv* env)
      {
        return cls_;
      }

      static void setValue (JNIEnv* env, jobject holder, const CF::complexULongLongSeq& value);
      static jobject newInstance (JNIEnv* env);

      static void Load (JNIEnv* env)
      {
        omni_mutex_lock lock_(omnijni::sharedMutex());
        OnLoad(env);
      }

      static void OnLoad (JNIEnv* env);
      static void OnUnload (JNIEnv* env);

      private:
      complexULongLongSeqHolder();
      ~complexULongLongSeqHolder();
      static jclass cls_;
      static jmethodID ctor_;
      static jfieldID value_;
    };

  }
}

inline void fromJObject (CF::FailedCapacityType& out, JNIEnv* env, jobject obj)
{
  CF::jni::FailedCapacityType::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::FailedCapacityType& in, JNIEnv* env)
{
  return CF::jni::FailedCapacityType::toJObject(in, env);
}

template<>
inline jclass getJClass<CF::FailedCapacityType> (JNIEnv* env)
{
  return CF::jni::FailedCapacityType::getJClass(env);
}

inline void fromJObject (CF::FailedCapacities& out, JNIEnv* env, jobject obj)
{
  omnijni::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::FailedCapacities& in, JNIEnv* env)
{
  return omnijni::toJObject(in, env);
}

inline void fromJObject (CF::DeviceAssignmentType& out, JNIEnv* env, jobject obj)
{
  CF::jni::DeviceAssignmentType::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::DeviceAssignmentType& in, JNIEnv* env)
{
  return CF::jni::DeviceAssignmentType::toJObject(in, env);
}

template<>
inline jclass getJClass<CF::DeviceAssignmentType> (JNIEnv* env)
{
  return CF::jni::DeviceAssignmentType::getJClass(env);
}

inline void fromJObject (CF::DeviceAssignmentSequence& out, JNIEnv* env, jobject obj)
{
  omnijni::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::DeviceAssignmentSequence& in, JNIEnv* env)
{
  return omnijni::toJObject(in, env);
}

inline void fromJObject (CF::ErrorNumberType& out, JNIEnv* env, jobject obj)
{
  CF::jni::ErrorNumberType::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::ErrorNumberType in, JNIEnv* env)
{
  return CF::jni::ErrorNumberType::toJObject(in, env);
}

template<>
inline jclass getJClass<CF::ErrorNumberType> (JNIEnv* env)
{
  return CF::jni::ErrorNumberType::getJClass(env);
}

inline void fromJObject (CF::PortType& out, JNIEnv* env, jobject obj)
{
  CF::jni::PortType::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::PortType& in, JNIEnv* env)
{
  return CF::jni::PortType::toJObject(in, env);
}

template<>
inline jclass getJClass<CF::PortType> (JNIEnv* env)
{
  return CF::jni::PortType::getJClass(env);
}

inline void fromJObject (CF::Ports& out, JNIEnv* env, jobject obj)
{
  omnijni::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::Ports& in, JNIEnv* env)
{
  return omnijni::toJObject(in, env);
}

inline void fromJObject (CF::ComponentEnumType& out, JNIEnv* env, jobject obj)
{
  CF::jni::ComponentEnumType::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::ComponentEnumType in, JNIEnv* env)
{
  return CF::jni::ComponentEnumType::toJObject(in, env);
}

template<>
inline jclass getJClass<CF::ComponentEnumType> (JNIEnv* env)
{
  return CF::jni::ComponentEnumType::getJClass(env);
}

inline void fromJObject (CF::ComponentType& out, JNIEnv* env, jobject obj)
{
  CF::jni::ComponentType::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::ComponentType& in, JNIEnv* env)
{
  return CF::jni::ComponentType::toJObject(in, env);
}

template<>
inline jclass getJClass<CF::ComponentType> (JNIEnv* env)
{
  return CF::jni::ComponentType::getJClass(env);
}

inline void fromJObject (CF::Components& out, JNIEnv* env, jobject obj)
{
  omnijni::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::Components& in, JNIEnv* env)
{
  return omnijni::toJObject(in, env);
}

inline void fromJObject (CF::DeviceSequence& out, JNIEnv* env, jobject obj)
{
  omnijni::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::DeviceSequence& in, JNIEnv* env)
{
  return omnijni::toJObject(in, env);
}

inline void fromJObject (CF::AggregateDevice_out out, JNIEnv* env, jobject obj)
{
  CF::jni::AggregateDevice::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::AggregateDevice_ptr in, JNIEnv* env)
{
  return CF::jni::AggregateDevice::toJObject(in, env);
}

template<>
inline jclass getJClass<CF::AggregateDeviceRef> (JNIEnv* env)
{
  return CF::jni::AggregateDevice::getJClass(env);
}

inline void fromJObject (CF::FileSystem::FileType& out, JNIEnv* env, jobject obj)
{
  CF::jni::FileSystem::FileType::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::FileSystem::FileType in, JNIEnv* env)
{
  return CF::jni::FileSystem::FileType::toJObject(in, env);
}

template<>
inline jclass getJClass<CF::FileSystem::FileType> (JNIEnv* env)
{
  return CF::jni::FileSystem::FileType::getJClass(env);
}

inline void fromJObject (CF::FileSystem::FileInformationType& out, JNIEnv* env, jobject obj)
{
  CF::jni::FileSystem::FileInformationType::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::FileSystem::FileInformationType& in, JNIEnv* env)
{
  return CF::jni::FileSystem::FileInformationType::toJObject(in, env);
}

template<>
inline jclass getJClass<CF::FileSystem::FileInformationType> (JNIEnv* env)
{
  return CF::jni::FileSystem::FileInformationType::getJClass(env);
}

inline void fromJObject (CF::FileSystem::FileInformationSequence& out, JNIEnv* env, jobject obj)
{
  omnijni::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::FileSystem::FileInformationSequence& in, JNIEnv* env)
{
  return omnijni::toJObject(in, env);
}

inline void fromJObject (CF::FileSystem_out out, JNIEnv* env, jobject obj)
{
  CF::jni::FileSystem::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::FileSystem_ptr in, JNIEnv* env)
{
  return CF::jni::FileSystem::toJObject(in, env);
}

template<>
inline jclass getJClass<CF::FileSystemRef> (JNIEnv* env)
{
  return CF::jni::FileSystem::getJClass(env);
}

inline void fromJObject (CF::File_out out, JNIEnv* env, jobject obj)
{
  CF::jni::File::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::File_ptr in, JNIEnv* env)
{
  return CF::jni::File::toJObject(in, env);
}

template<>
inline jclass getJClass<CF::FileRef> (JNIEnv* env)
{
  return CF::jni::File::getJClass(env);
}

inline void fromJObject (CF::ResourceFactory_out out, JNIEnv* env, jobject obj)
{
  CF::jni::ResourceFactory::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::ResourceFactory_ptr in, JNIEnv* env)
{
  return CF::jni::ResourceFactory::toJObject(in, env);
}

template<>
inline jclass getJClass<CF::ResourceFactoryRef> (JNIEnv* env)
{
  return CF::jni::ResourceFactory::getJClass(env);
}

inline void fromJObject (CF::FileManager::MountType& out, JNIEnv* env, jobject obj)
{
  CF::jni::FileManager::MountType::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::FileManager::MountType& in, JNIEnv* env)
{
  return CF::jni::FileManager::MountType::toJObject(in, env);
}

template<>
inline jclass getJClass<CF::FileManager::MountType> (JNIEnv* env)
{
  return CF::jni::FileManager::MountType::getJClass(env);
}

inline void fromJObject (CF::FileManager::MountSequence& out, JNIEnv* env, jobject obj)
{
  omnijni::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::FileManager::MountSequence& in, JNIEnv* env)
{
  return omnijni::toJObject(in, env);
}

inline void fromJObject (CF::FileManager_out out, JNIEnv* env, jobject obj)
{
  CF::jni::FileManager::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::FileManager_ptr in, JNIEnv* env)
{
  return CF::jni::FileManager::toJObject(in, env);
}

template<>
inline jclass getJClass<CF::FileManagerRef> (JNIEnv* env)
{
  return CF::jni::FileManager::getJClass(env);
}

inline void fromJObject (CF::LifeCycle_out out, JNIEnv* env, jobject obj)
{
  CF::jni::LifeCycle::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::LifeCycle_ptr in, JNIEnv* env)
{
  return CF::jni::LifeCycle::toJObject(in, env);
}

template<>
inline jclass getJClass<CF::LifeCycleRef> (JNIEnv* env)
{
  return CF::jni::LifeCycle::getJClass(env);
}

inline void fromJObject (CF::TestableObject_out out, JNIEnv* env, jobject obj)
{
  CF::jni::TestableObject::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::TestableObject_ptr in, JNIEnv* env)
{
  return CF::jni::TestableObject::toJObject(in, env);
}

template<>
inline jclass getJClass<CF::TestableObjectRef> (JNIEnv* env)
{
  return CF::jni::TestableObject::getJClass(env);
}

inline void fromJObject (CF::PropertyChangeListener::PropertyChangeEvent& out, JNIEnv* env, jobject obj)
{
  CF::jni::PropertyChangeListener::PropertyChangeEvent::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::PropertyChangeListener::PropertyChangeEvent& in, JNIEnv* env)
{
  return CF::jni::PropertyChangeListener::PropertyChangeEvent::toJObject(in, env);
}

template<>
inline jclass getJClass<CF::PropertyChangeListener::PropertyChangeEvent> (JNIEnv* env)
{
  return CF::jni::PropertyChangeListener::PropertyChangeEvent::getJClass(env);
}

inline void fromJObject (CF::PropertyChangeListener_out out, JNIEnv* env, jobject obj)
{
  CF::jni::PropertyChangeListener::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::PropertyChangeListener_ptr in, JNIEnv* env)
{
  return CF::jni::PropertyChangeListener::toJObject(in, env);
}

template<>
inline jclass getJClass<CF::PropertyChangeListenerRef> (JNIEnv* env)
{
  return CF::jni::PropertyChangeListener::getJClass(env);
}

inline void fromJObject (CF::PropertySet_out out, JNIEnv* env, jobject obj)
{
  CF::jni::PropertySet::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::PropertySet_ptr in, JNIEnv* env)
{
  return CF::jni::PropertySet::toJObject(in, env);
}

template<>
inline jclass getJClass<CF::PropertySetRef> (JNIEnv* env)
{
  return CF::jni::PropertySet::getJClass(env);
}

inline void fromJObject (CF::PropertyEmitter_out out, JNIEnv* env, jobject obj)
{
  CF::jni::PropertyEmitter::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::PropertyEmitter_ptr in, JNIEnv* env)
{
  return CF::jni::PropertyEmitter::toJObject(in, env);
}

template<>
inline jclass getJClass<CF::PropertyEmitterRef> (JNIEnv* env)
{
  return CF::jni::PropertyEmitter::getJClass(env);
}

inline void fromJObject (CF::AllocationManager::DevicePoolNames& out, JNIEnv* env, jobject obj)
{
  omnijni::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::AllocationManager::DevicePoolNames& in, JNIEnv* env)
{
  return omnijni::toJObject(in, env);
}

inline void fromJObject (CF::AllocationManager::AllocationRequestType& out, JNIEnv* env, jobject obj)
{
  CF::jni::AllocationManager::AllocationRequestType::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::AllocationManager::AllocationRequestType& in, JNIEnv* env)
{
  return CF::jni::AllocationManager::AllocationRequestType::toJObject(in, env);
}

template<>
inline jclass getJClass<CF::AllocationManager::AllocationRequestType> (JNIEnv* env)
{
  return CF::jni::AllocationManager::AllocationRequestType::getJClass(env);
}

inline void fromJObject (CF::AllocationManager::AllocationResponseType& out, JNIEnv* env, jobject obj)
{
  CF::jni::AllocationManager::AllocationResponseType::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::AllocationManager::AllocationResponseType& in, JNIEnv* env)
{
  return CF::jni::AllocationManager::AllocationResponseType::toJObject(in, env);
}

template<>
inline jclass getJClass<CF::AllocationManager::AllocationResponseType> (JNIEnv* env)
{
  return CF::jni::AllocationManager::AllocationResponseType::getJClass(env);
}

inline void fromJObject (CF::AllocationManager::AllocationStatusType& out, JNIEnv* env, jobject obj)
{
  CF::jni::AllocationManager::AllocationStatusType::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::AllocationManager::AllocationStatusType& in, JNIEnv* env)
{
  return CF::jni::AllocationManager::AllocationStatusType::toJObject(in, env);
}

template<>
inline jclass getJClass<CF::AllocationManager::AllocationStatusType> (JNIEnv* env)
{
  return CF::jni::AllocationManager::AllocationStatusType::getJClass(env);
}

inline void fromJObject (CF::AllocationManager::DeviceLocationType& out, JNIEnv* env, jobject obj)
{
  CF::jni::AllocationManager::DeviceLocationType::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::AllocationManager::DeviceLocationType& in, JNIEnv* env)
{
  return CF::jni::AllocationManager::DeviceLocationType::toJObject(in, env);
}

template<>
inline jclass getJClass<CF::AllocationManager::DeviceLocationType> (JNIEnv* env)
{
  return CF::jni::AllocationManager::DeviceLocationType::getJClass(env);
}

inline void fromJObject (CF::AllocationManager::AllocationRequestSequence& out, JNIEnv* env, jobject obj)
{
  omnijni::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::AllocationManager::AllocationRequestSequence& in, JNIEnv* env)
{
  return omnijni::toJObject(in, env);
}

inline void fromJObject (CF::AllocationManager::AllocationResponseSequence& out, JNIEnv* env, jobject obj)
{
  omnijni::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::AllocationManager::AllocationResponseSequence& in, JNIEnv* env)
{
  return omnijni::toJObject(in, env);
}

inline void fromJObject (CF::AllocationManager::AllocationStatusSequence& out, JNIEnv* env, jobject obj)
{
  omnijni::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::AllocationManager::AllocationStatusSequence& in, JNIEnv* env)
{
  return omnijni::toJObject(in, env);
}

inline void fromJObject (CF::AllocationManager::DeviceLocationSequence& out, JNIEnv* env, jobject obj)
{
  omnijni::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::AllocationManager::DeviceLocationSequence& in, JNIEnv* env)
{
  return omnijni::toJObject(in, env);
}

inline void fromJObject (CF::AllocationManager::allocationIDSequence& out, JNIEnv* env, jobject obj)
{
  omnijni::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::AllocationManager::allocationIDSequence& in, JNIEnv* env)
{
  return omnijni::toJObject(in, env);
}

inline void fromJObject (CF::AllocationManager::DeviceScopeType& out, JNIEnv* env, jobject obj)
{
  CF::jni::AllocationManager::DeviceScopeType::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::AllocationManager::DeviceScopeType in, JNIEnv* env)
{
  return CF::jni::AllocationManager::DeviceScopeType::toJObject(in, env);
}

template<>
inline jclass getJClass<CF::AllocationManager::DeviceScopeType> (JNIEnv* env)
{
  return CF::jni::AllocationManager::DeviceScopeType::getJClass(env);
}

inline void fromJObject (CF::AllocationManager::AllocationScopeType& out, JNIEnv* env, jobject obj)
{
  CF::jni::AllocationManager::AllocationScopeType::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::AllocationManager::AllocationScopeType in, JNIEnv* env)
{
  return CF::jni::AllocationManager::AllocationScopeType::toJObject(in, env);
}

template<>
inline jclass getJClass<CF::AllocationManager::AllocationScopeType> (JNIEnv* env)
{
  return CF::jni::AllocationManager::AllocationScopeType::getJClass(env);
}

inline void fromJObject (CF::AllocationManager_out out, JNIEnv* env, jobject obj)
{
  CF::jni::AllocationManager::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::AllocationManager_ptr in, JNIEnv* env)
{
  return CF::jni::AllocationManager::toJObject(in, env);
}

template<>
inline jclass getJClass<CF::AllocationManagerRef> (JNIEnv* env)
{
  return CF::jni::AllocationManager::getJClass(env);
}

inline void fromJObject (CF::AllocationStatusIterator_out out, JNIEnv* env, jobject obj)
{
  CF::jni::AllocationStatusIterator::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::AllocationStatusIterator_ptr in, JNIEnv* env)
{
  return CF::jni::AllocationStatusIterator::toJObject(in, env);
}

template<>
inline jclass getJClass<CF::AllocationStatusIteratorRef> (JNIEnv* env)
{
  return CF::jni::AllocationStatusIterator::getJClass(env);
}

inline void fromJObject (CF::DeviceLocationIterator_out out, JNIEnv* env, jobject obj)
{
  CF::jni::DeviceLocationIterator::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::DeviceLocationIterator_ptr in, JNIEnv* env)
{
  return CF::jni::DeviceLocationIterator::toJObject(in, env);
}

template<>
inline jclass getJClass<CF::DeviceLocationIteratorRef> (JNIEnv* env)
{
  return CF::jni::DeviceLocationIterator::getJClass(env);
}

inline void fromJObject (CF::ConnectionManager::EndpointKind& out, JNIEnv* env, jobject obj)
{
  CF::jni::ConnectionManager::EndpointKind::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::ConnectionManager::EndpointKind in, JNIEnv* env)
{
  return CF::jni::ConnectionManager::EndpointKind::toJObject(in, env);
}

template<>
inline jclass getJClass<CF::ConnectionManager::EndpointKind> (JNIEnv* env)
{
  return CF::jni::ConnectionManager::EndpointKind::getJClass(env);
}

inline void fromJObject (CF::ConnectionManager::EndpointResolutionType& out, JNIEnv* env, jobject obj)
{
  CF::jni::ConnectionManager::EndpointResolutionType::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::ConnectionManager::EndpointResolutionType& in, JNIEnv* env)
{
  return CF::jni::ConnectionManager::EndpointResolutionType::toJObject(in, env);
}

template<>
inline jclass getJClass<CF::ConnectionManager::EndpointResolutionType> (JNIEnv* env)
{
  return CF::jni::ConnectionManager::EndpointResolutionType::getJClass(env);
}

inline void fromJObject (CF::ConnectionManager::EndpointRequest& out, JNIEnv* env, jobject obj)
{
  CF::jni::ConnectionManager::EndpointRequest::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::ConnectionManager::EndpointRequest& in, JNIEnv* env)
{
  return CF::jni::ConnectionManager::EndpointRequest::toJObject(in, env);
}

template<>
inline jclass getJClass<CF::ConnectionManager::EndpointRequest> (JNIEnv* env)
{
  return CF::jni::ConnectionManager::EndpointRequest::getJClass(env);
}

inline void fromJObject (CF::ConnectionManager::EndpointStatusType& out, JNIEnv* env, jobject obj)
{
  CF::jni::ConnectionManager::EndpointStatusType::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::ConnectionManager::EndpointStatusType& in, JNIEnv* env)
{
  return CF::jni::ConnectionManager::EndpointStatusType::toJObject(in, env);
}

template<>
inline jclass getJClass<CF::ConnectionManager::EndpointStatusType> (JNIEnv* env)
{
  return CF::jni::ConnectionManager::EndpointStatusType::getJClass(env);
}

inline void fromJObject (CF::ConnectionManager::ConnectionStatusType& out, JNIEnv* env, jobject obj)
{
  CF::jni::ConnectionManager::ConnectionStatusType::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::ConnectionManager::ConnectionStatusType& in, JNIEnv* env)
{
  return CF::jni::ConnectionManager::ConnectionStatusType::toJObject(in, env);
}

template<>
inline jclass getJClass<CF::ConnectionManager::ConnectionStatusType> (JNIEnv* env)
{
  return CF::jni::ConnectionManager::ConnectionStatusType::getJClass(env);
}

inline void fromJObject (CF::ConnectionManager::ConnectionStatusSequence& out, JNIEnv* env, jobject obj)
{
  omnijni::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::ConnectionManager::ConnectionStatusSequence& in, JNIEnv* env)
{
  return omnijni::toJObject(in, env);
}

inline void fromJObject (CF::ConnectionManager_out out, JNIEnv* env, jobject obj)
{
  CF::jni::ConnectionManager::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::ConnectionManager_ptr in, JNIEnv* env)
{
  return CF::jni::ConnectionManager::toJObject(in, env);
}

template<>
inline jclass getJClass<CF::ConnectionManagerRef> (JNIEnv* env)
{
  return CF::jni::ConnectionManager::getJClass(env);
}

inline void fromJObject (CF::ConnectionStatusIterator_out out, JNIEnv* env, jobject obj)
{
  CF::jni::ConnectionStatusIterator::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::ConnectionStatusIterator_ptr in, JNIEnv* env)
{
  return CF::jni::ConnectionStatusIterator::toJObject(in, env);
}

template<>
inline jclass getJClass<CF::ConnectionStatusIteratorRef> (JNIEnv* env)
{
  return CF::jni::ConnectionStatusIterator::getJClass(env);
}

inline void fromJObject (CF::ApplicationFactory_out out, JNIEnv* env, jobject obj)
{
  CF::jni::ApplicationFactory::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::ApplicationFactory_ptr in, JNIEnv* env)
{
  return CF::jni::ApplicationFactory::toJObject(in, env);
}

template<>
inline jclass getJClass<CF::ApplicationFactoryRef> (JNIEnv* env)
{
  return CF::jni::ApplicationFactory::getJClass(env);
}

inline void fromJObject (CF::DomainManager::ApplicationSequence& out, JNIEnv* env, jobject obj)
{
  omnijni::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::DomainManager::ApplicationSequence& in, JNIEnv* env)
{
  return omnijni::toJObject(in, env);
}

inline void fromJObject (CF::DomainManager::ApplicationFactorySequence& out, JNIEnv* env, jobject obj)
{
  omnijni::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::DomainManager::ApplicationFactorySequence& in, JNIEnv* env)
{
  return omnijni::toJObject(in, env);
}

inline void fromJObject (CF::DomainManager::DeviceManagerSequence& out, JNIEnv* env, jobject obj)
{
  omnijni::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::DomainManager::DeviceManagerSequence& in, JNIEnv* env)
{
  return omnijni::toJObject(in, env);
}

inline void fromJObject (CF::DomainManager::DomainManagerSequence& out, JNIEnv* env, jobject obj)
{
  omnijni::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::DomainManager::DomainManagerSequence& in, JNIEnv* env)
{
  return omnijni::toJObject(in, env);
}

inline void fromJObject (CF::DomainManager_out out, JNIEnv* env, jobject obj)
{
  CF::jni::DomainManager::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::DomainManager_ptr in, JNIEnv* env)
{
  return CF::jni::DomainManager::toJObject(in, env);
}

template<>
inline jclass getJClass<CF::DomainManagerRef> (JNIEnv* env)
{
  return CF::jni::DomainManager::getJClass(env);
}

inline void fromJObject (CF::PortSupplier_out out, JNIEnv* env, jobject obj)
{
  CF::jni::PortSupplier::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::PortSupplier_ptr in, JNIEnv* env)
{
  return CF::jni::PortSupplier::toJObject(in, env);
}

template<>
inline jclass getJClass<CF::PortSupplierRef> (JNIEnv* env)
{
  return CF::jni::PortSupplier::getJClass(env);
}

inline void fromJObject (CF::PortSet::PortInfoType& out, JNIEnv* env, jobject obj)
{
  CF::jni::PortSet::PortInfoType::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::PortSet::PortInfoType& in, JNIEnv* env)
{
  return CF::jni::PortSet::PortInfoType::toJObject(in, env);
}

template<>
inline jclass getJClass<CF::PortSet::PortInfoType> (JNIEnv* env)
{
  return CF::jni::PortSet::PortInfoType::getJClass(env);
}

inline void fromJObject (CF::PortSet::PortInfoSequence& out, JNIEnv* env, jobject obj)
{
  omnijni::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::PortSet::PortInfoSequence& in, JNIEnv* env)
{
  return omnijni::toJObject(in, env);
}

inline void fromJObject (CF::PortSet_out out, JNIEnv* env, jobject obj)
{
  CF::jni::PortSet::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::PortSet_ptr in, JNIEnv* env)
{
  return CF::jni::PortSet::toJObject(in, env);
}

template<>
inline jclass getJClass<CF::PortSetRef> (JNIEnv* env)
{
  return CF::jni::PortSet::getJClass(env);
}

inline void fromJObject (CF::Resource_out out, JNIEnv* env, jobject obj)
{
  CF::jni::Resource::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::Resource_ptr in, JNIEnv* env)
{
  return CF::jni::Resource::toJObject(in, env);
}

template<>
inline jclass getJClass<CF::ResourceRef> (JNIEnv* env)
{
  return CF::jni::Resource::getJClass(env);
}

inline void fromJObject (CF::Device::AdminType& out, JNIEnv* env, jobject obj)
{
  CF::jni::Device::AdminType::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::Device::AdminType in, JNIEnv* env)
{
  return CF::jni::Device::AdminType::toJObject(in, env);
}

template<>
inline jclass getJClass<CF::Device::AdminType> (JNIEnv* env)
{
  return CF::jni::Device::AdminType::getJClass(env);
}

inline void fromJObject (CF::Device::OperationalType& out, JNIEnv* env, jobject obj)
{
  CF::jni::Device::OperationalType::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::Device::OperationalType in, JNIEnv* env)
{
  return CF::jni::Device::OperationalType::toJObject(in, env);
}

template<>
inline jclass getJClass<CF::Device::OperationalType> (JNIEnv* env)
{
  return CF::jni::Device::OperationalType::getJClass(env);
}

inline void fromJObject (CF::Device::UsageType& out, JNIEnv* env, jobject obj)
{
  CF::jni::Device::UsageType::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::Device::UsageType in, JNIEnv* env)
{
  return CF::jni::Device::UsageType::toJObject(in, env);
}

template<>
inline jclass getJClass<CF::Device::UsageType> (JNIEnv* env)
{
  return CF::jni::Device::UsageType::getJClass(env);
}

inline void fromJObject (CF::Device_out out, JNIEnv* env, jobject obj)
{
  CF::jni::Device::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::Device_ptr in, JNIEnv* env)
{
  return CF::jni::Device::toJObject(in, env);
}

template<>
inline jclass getJClass<CF::DeviceRef> (JNIEnv* env)
{
  return CF::jni::Device::getJClass(env);
}

inline void fromJObject (CF::ApplicationRegistrar_out out, JNIEnv* env, jobject obj)
{
  CF::jni::ApplicationRegistrar::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::ApplicationRegistrar_ptr in, JNIEnv* env)
{
  return CF::jni::ApplicationRegistrar::toJObject(in, env);
}

template<>
inline jclass getJClass<CF::ApplicationRegistrarRef> (JNIEnv* env)
{
  return CF::jni::ApplicationRegistrar::getJClass(env);
}

inline void fromJObject (CF::Application::ComponentProcessIdType& out, JNIEnv* env, jobject obj)
{
  CF::jni::Application::ComponentProcessIdType::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::Application::ComponentProcessIdType& in, JNIEnv* env)
{
  return CF::jni::Application::ComponentProcessIdType::toJObject(in, env);
}

template<>
inline jclass getJClass<CF::Application::ComponentProcessIdType> (JNIEnv* env)
{
  return CF::jni::Application::ComponentProcessIdType::getJClass(env);
}

inline void fromJObject (CF::Application::ComponentProcessIdSequence& out, JNIEnv* env, jobject obj)
{
  omnijni::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::Application::ComponentProcessIdSequence& in, JNIEnv* env)
{
  return omnijni::toJObject(in, env);
}

inline void fromJObject (CF::Application::ComponentElementType& out, JNIEnv* env, jobject obj)
{
  CF::jni::Application::ComponentElementType::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::Application::ComponentElementType& in, JNIEnv* env)
{
  return CF::jni::Application::ComponentElementType::toJObject(in, env);
}

template<>
inline jclass getJClass<CF::Application::ComponentElementType> (JNIEnv* env)
{
  return CF::jni::Application::ComponentElementType::getJClass(env);
}

inline void fromJObject (CF::Application::ComponentElementSequence& out, JNIEnv* env, jobject obj)
{
  omnijni::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::Application::ComponentElementSequence& in, JNIEnv* env)
{
  return omnijni::toJObject(in, env);
}

inline void fromJObject (CF::Application_out out, JNIEnv* env, jobject obj)
{
  CF::jni::Application::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::Application_ptr in, JNIEnv* env)
{
  return CF::jni::Application::toJObject(in, env);
}

template<>
inline jclass getJClass<CF::ApplicationRef> (JNIEnv* env)
{
  return CF::jni::Application::getJClass(env);
}

inline void fromJObject (CF::LoadableDevice::LoadType& out, JNIEnv* env, jobject obj)
{
  CF::jni::LoadableDevice::LoadType::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::LoadableDevice::LoadType in, JNIEnv* env)
{
  return CF::jni::LoadableDevice::LoadType::toJObject(in, env);
}

template<>
inline jclass getJClass<CF::LoadableDevice::LoadType> (JNIEnv* env)
{
  return CF::jni::LoadableDevice::LoadType::getJClass(env);
}

inline void fromJObject (CF::LoadableDevice_out out, JNIEnv* env, jobject obj)
{
  CF::jni::LoadableDevice::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::LoadableDevice_ptr in, JNIEnv* env)
{
  return CF::jni::LoadableDevice::toJObject(in, env);
}

template<>
inline jclass getJClass<CF::LoadableDeviceRef> (JNIEnv* env)
{
  return CF::jni::LoadableDevice::getJClass(env);
}

inline void fromJObject (CF::ExecutableDevice_out out, JNIEnv* env, jobject obj)
{
  CF::jni::ExecutableDevice::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::ExecutableDevice_ptr in, JNIEnv* env)
{
  return CF::jni::ExecutableDevice::toJObject(in, env);
}

template<>
inline jclass getJClass<CF::ExecutableDeviceRef> (JNIEnv* env)
{
  return CF::jni::ExecutableDevice::getJClass(env);
}

inline void fromJObject (CF::DeviceManager::ServiceType& out, JNIEnv* env, jobject obj)
{
  CF::jni::DeviceManager::ServiceType::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::DeviceManager::ServiceType& in, JNIEnv* env)
{
  return CF::jni::DeviceManager::ServiceType::toJObject(in, env);
}

template<>
inline jclass getJClass<CF::DeviceManager::ServiceType> (JNIEnv* env)
{
  return CF::jni::DeviceManager::ServiceType::getJClass(env);
}

inline void fromJObject (CF::DeviceManager::ServiceSequence& out, JNIEnv* env, jobject obj)
{
  omnijni::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::DeviceManager::ServiceSequence& in, JNIEnv* env)
{
  return omnijni::toJObject(in, env);
}

inline void fromJObject (CF::DeviceManager_out out, JNIEnv* env, jobject obj)
{
  CF::jni::DeviceManager::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::DeviceManager_ptr in, JNIEnv* env)
{
  return CF::jni::DeviceManager::toJObject(in, env);
}

template<>
inline jclass getJClass<CF::DeviceManagerRef> (JNIEnv* env)
{
  return CF::jni::DeviceManager::getJClass(env);
}

inline void fromJObject (CF::complexDouble& out, JNIEnv* env, jobject obj)
{
  CF::jni::complexDouble::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::complexDouble& in, JNIEnv* env)
{
  return CF::jni::complexDouble::toJObject(in, env);
}

template<>
inline jclass getJClass<CF::complexDouble> (JNIEnv* env)
{
  return CF::jni::complexDouble::getJClass(env);
}

inline void fromJObject (CF::complexDoubleSeq& out, JNIEnv* env, jobject obj)
{
  omnijni::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::complexDoubleSeq& in, JNIEnv* env)
{
  return omnijni::toJObject(in, env);
}

inline void fromJObject (CF::complexFloat& out, JNIEnv* env, jobject obj)
{
  CF::jni::complexFloat::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::complexFloat& in, JNIEnv* env)
{
  return CF::jni::complexFloat::toJObject(in, env);
}

template<>
inline jclass getJClass<CF::complexFloat> (JNIEnv* env)
{
  return CF::jni::complexFloat::getJClass(env);
}

inline void fromJObject (CF::complexFloatSeq& out, JNIEnv* env, jobject obj)
{
  omnijni::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::complexFloatSeq& in, JNIEnv* env)
{
  return omnijni::toJObject(in, env);
}

inline void fromJObject (CF::complexBoolean& out, JNIEnv* env, jobject obj)
{
  CF::jni::complexBoolean::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::complexBoolean& in, JNIEnv* env)
{
  return CF::jni::complexBoolean::toJObject(in, env);
}

template<>
inline jclass getJClass<CF::complexBoolean> (JNIEnv* env)
{
  return CF::jni::complexBoolean::getJClass(env);
}

inline void fromJObject (CF::complexBooleanSeq& out, JNIEnv* env, jobject obj)
{
  omnijni::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::complexBooleanSeq& in, JNIEnv* env)
{
  return omnijni::toJObject(in, env);
}

inline void fromJObject (CF::complexULong& out, JNIEnv* env, jobject obj)
{
  CF::jni::complexULong::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::complexULong& in, JNIEnv* env)
{
  return CF::jni::complexULong::toJObject(in, env);
}

template<>
inline jclass getJClass<CF::complexULong> (JNIEnv* env)
{
  return CF::jni::complexULong::getJClass(env);
}

inline void fromJObject (CF::complexULongSeq& out, JNIEnv* env, jobject obj)
{
  omnijni::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::complexULongSeq& in, JNIEnv* env)
{
  return omnijni::toJObject(in, env);
}

inline void fromJObject (CF::complexShort& out, JNIEnv* env, jobject obj)
{
  CF::jni::complexShort::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::complexShort& in, JNIEnv* env)
{
  return CF::jni::complexShort::toJObject(in, env);
}

template<>
inline jclass getJClass<CF::complexShort> (JNIEnv* env)
{
  return CF::jni::complexShort::getJClass(env);
}

inline void fromJObject (CF::complexShortSeq& out, JNIEnv* env, jobject obj)
{
  omnijni::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::complexShortSeq& in, JNIEnv* env)
{
  return omnijni::toJObject(in, env);
}

inline void fromJObject (CF::complexOctet& out, JNIEnv* env, jobject obj)
{
  CF::jni::complexOctet::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::complexOctet& in, JNIEnv* env)
{
  return CF::jni::complexOctet::toJObject(in, env);
}

template<>
inline jclass getJClass<CF::complexOctet> (JNIEnv* env)
{
  return CF::jni::complexOctet::getJClass(env);
}

inline void fromJObject (CF::complexOctetSeq& out, JNIEnv* env, jobject obj)
{
  omnijni::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::complexOctetSeq& in, JNIEnv* env)
{
  return omnijni::toJObject(in, env);
}

inline void fromJObject (CF::complexChar& out, JNIEnv* env, jobject obj)
{
  CF::jni::complexChar::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::complexChar& in, JNIEnv* env)
{
  return CF::jni::complexChar::toJObject(in, env);
}

template<>
inline jclass getJClass<CF::complexChar> (JNIEnv* env)
{
  return CF::jni::complexChar::getJClass(env);
}

inline void fromJObject (CF::complexCharSeq& out, JNIEnv* env, jobject obj)
{
  omnijni::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::complexCharSeq& in, JNIEnv* env)
{
  return omnijni::toJObject(in, env);
}

inline void fromJObject (CF::complexUShort& out, JNIEnv* env, jobject obj)
{
  CF::jni::complexUShort::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::complexUShort& in, JNIEnv* env)
{
  return CF::jni::complexUShort::toJObject(in, env);
}

template<>
inline jclass getJClass<CF::complexUShort> (JNIEnv* env)
{
  return CF::jni::complexUShort::getJClass(env);
}

inline void fromJObject (CF::complexUShortSeq& out, JNIEnv* env, jobject obj)
{
  omnijni::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::complexUShortSeq& in, JNIEnv* env)
{
  return omnijni::toJObject(in, env);
}

inline void fromJObject (CF::complexLong& out, JNIEnv* env, jobject obj)
{
  CF::jni::complexLong::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::complexLong& in, JNIEnv* env)
{
  return CF::jni::complexLong::toJObject(in, env);
}

template<>
inline jclass getJClass<CF::complexLong> (JNIEnv* env)
{
  return CF::jni::complexLong::getJClass(env);
}

inline void fromJObject (CF::complexLongSeq& out, JNIEnv* env, jobject obj)
{
  omnijni::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::complexLongSeq& in, JNIEnv* env)
{
  return omnijni::toJObject(in, env);
}

inline void fromJObject (CF::complexLongLong& out, JNIEnv* env, jobject obj)
{
  CF::jni::complexLongLong::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::complexLongLong& in, JNIEnv* env)
{
  return CF::jni::complexLongLong::toJObject(in, env);
}

template<>
inline jclass getJClass<CF::complexLongLong> (JNIEnv* env)
{
  return CF::jni::complexLongLong::getJClass(env);
}

inline void fromJObject (CF::complexLongLongSeq& out, JNIEnv* env, jobject obj)
{
  omnijni::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::complexLongLongSeq& in, JNIEnv* env)
{
  return omnijni::toJObject(in, env);
}

inline void fromJObject (CF::complexULongLong& out, JNIEnv* env, jobject obj)
{
  CF::jni::complexULongLong::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::complexULongLong& in, JNIEnv* env)
{
  return CF::jni::complexULongLong::toJObject(in, env);
}

template<>
inline jclass getJClass<CF::complexULongLong> (JNIEnv* env)
{
  return CF::jni::complexULongLong::getJClass(env);
}

inline void fromJObject (CF::complexULongLongSeq& out, JNIEnv* env, jobject obj)
{
  omnijni::fromJObject(out, env, obj);
}

inline jobject toJObject (const CF::complexULongLongSeq& in, JNIEnv* env)
{
  return omnijni::toJObject(in, env);
}


#endif // __JNI_CF_H__
