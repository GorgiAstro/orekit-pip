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
  namespace security {
    class Permission;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class SecurityManager : public ::java::lang::Object {
     public:
      enum {
        mid_init$_0fa09c18fee449d5,
        mid_checkAccept_e227023543046618,
        mid_checkAccess_6fe64205f671d335,
        mid_checkAccess_cc95f01a6d9b6abb,
        mid_checkConnect_e227023543046618,
        mid_checkConnect_97d3bf06faca5afa,
        mid_checkCreateClassLoader_0fa09c18fee449d5,
        mid_checkDelete_d0bc48d5b00dc40c,
        mid_checkExec_d0bc48d5b00dc40c,
        mid_checkExit_99803b0791f320ff,
        mid_checkLink_d0bc48d5b00dc40c,
        mid_checkListen_99803b0791f320ff,
        mid_checkPackageAccess_d0bc48d5b00dc40c,
        mid_checkPackageDefinition_d0bc48d5b00dc40c,
        mid_checkPermission_7dbb217d272a752a,
        mid_checkPermission_ba67496e93cdae21,
        mid_checkPrintJobAccess_0fa09c18fee449d5,
        mid_checkPropertiesAccess_0fa09c18fee449d5,
        mid_checkPropertyAccess_d0bc48d5b00dc40c,
        mid_checkRead_9d90d2b41ddf88a5,
        mid_checkRead_d0bc48d5b00dc40c,
        mid_checkRead_562cf77ba0f3b1a4,
        mid_checkSecurityAccess_d0bc48d5b00dc40c,
        mid_checkSetFactory_0fa09c18fee449d5,
        mid_checkWrite_9d90d2b41ddf88a5,
        mid_checkWrite_d0bc48d5b00dc40c,
        mid_getSecurityContext_4d26fd885228c716,
        mid_getThreadGroup_b3b4aaae6d375f3d,
        mid_getClassContext_c7d92886d19dfecc,
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
      void checkPermission(const ::java::security::Permission &) const;
      void checkPermission(const ::java::security::Permission &, const ::java::lang::Object &) const;
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
