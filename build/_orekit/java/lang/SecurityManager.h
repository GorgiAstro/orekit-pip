#ifndef java_lang_SecurityManager_H
#define java_lang_SecurityManager_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Thread;
    class Class;
    class String;
    class ThreadGroup;
  }
  namespace io {
    class FileDescriptor;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class SecurityManager : public ::java::lang::Object {
     public:
      enum {
        mid_init$_a1fa5dae97ea5ed2,
        mid_checkAccept_02c6e5855745e0e2,
        mid_checkAccess_f3ba88cc49232adb,
        mid_checkAccess_7871e439a5e6f852,
        mid_checkConnect_02c6e5855745e0e2,
        mid_checkConnect_5e442dcec322093b,
        mid_checkCreateClassLoader_a1fa5dae97ea5ed2,
        mid_checkDelete_734b91ac30d5f9b4,
        mid_checkExec_734b91ac30d5f9b4,
        mid_checkExit_44ed599e93e8a30c,
        mid_checkLink_734b91ac30d5f9b4,
        mid_checkListen_44ed599e93e8a30c,
        mid_checkPackageAccess_734b91ac30d5f9b4,
        mid_checkPackageDefinition_734b91ac30d5f9b4,
        mid_checkPrintJobAccess_a1fa5dae97ea5ed2,
        mid_checkPropertiesAccess_a1fa5dae97ea5ed2,
        mid_checkPropertyAccess_734b91ac30d5f9b4,
        mid_checkRead_ce27f4372ce835a9,
        mid_checkRead_734b91ac30d5f9b4,
        mid_checkRead_2bd6b3882bcba51f,
        mid_checkSecurityAccess_734b91ac30d5f9b4,
        mid_checkSetFactory_a1fa5dae97ea5ed2,
        mid_checkWrite_ce27f4372ce835a9,
        mid_checkWrite_734b91ac30d5f9b4,
        mid_getSecurityContext_541690f9ee81d3ad,
        mid_getThreadGroup_4241f87211c845e3,
        mid_getClassContext_5aec5e13d1a5cd63,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit SecurityManager(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      SecurityManager(const SecurityManager& obj) : ::java::lang::Object(obj) {}

      SecurityManager();

      void checkAccept(const ::java::lang::String &, jint) const;
      void checkAccess(const ::java::lang::Thread &) const;
      void checkAccess(const ::java::lang::ThreadGroup &) const;
      void checkConnect(const ::java::lang::String &, jint) const;
      void checkConnect(const ::java::lang::String &, jint, const ::java::lang::Object &) const;
      void checkCreateClassLoader() const;
      void checkDelete(const ::java::lang::String &) const;
      void checkExec(const ::java::lang::String &) const;
      void checkExit(jint) const;
      void checkLink(const ::java::lang::String &) const;
      void checkListen(jint) const;
      void checkPackageAccess(const ::java::lang::String &) const;
      void checkPackageDefinition(const ::java::lang::String &) const;
      void checkPrintJobAccess() const;
      void checkPropertiesAccess() const;
      void checkPropertyAccess(const ::java::lang::String &) const;
      void checkRead(const ::java::io::FileDescriptor &) const;
      void checkRead(const ::java::lang::String &) const;
      void checkRead(const ::java::lang::String &, const ::java::lang::Object &) const;
      void checkSecurityAccess(const ::java::lang::String &) const;
      void checkSetFactory() const;
      void checkWrite(const ::java::io::FileDescriptor &) const;
      void checkWrite(const ::java::lang::String &) const;
      ::java::lang::Object getSecurityContext() const;
      ::java::lang::ThreadGroup getThreadGroup() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(SecurityManager);
    extern PyTypeObject *PY_TYPE(SecurityManager);

    class t_SecurityManager {
    public:
      PyObject_HEAD
      SecurityManager object;
      static PyObject *wrap_Object(const SecurityManager&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
