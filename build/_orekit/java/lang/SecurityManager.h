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
        mid_init$_7ae3461a92a43152,
        mid_checkAccept_cabf0c57aa55c764,
        mid_checkAccess_28b6e9ba57539e9f,
        mid_checkAccess_2e0869284097f0fc,
        mid_checkConnect_cabf0c57aa55c764,
        mid_checkConnect_beb1bf63a0ce4b7a,
        mid_checkCreateClassLoader_7ae3461a92a43152,
        mid_checkDelete_e939c6558ae8d313,
        mid_checkExec_e939c6558ae8d313,
        mid_checkExit_0a2a1ac2721c0336,
        mid_checkLink_e939c6558ae8d313,
        mid_checkListen_0a2a1ac2721c0336,
        mid_checkPackageAccess_e939c6558ae8d313,
        mid_checkPackageDefinition_e939c6558ae8d313,
        mid_checkPermission_482fc9108529f42a,
        mid_checkPermission_b8fcb42054b201a9,
        mid_checkPrintJobAccess_7ae3461a92a43152,
        mid_checkPropertiesAccess_7ae3461a92a43152,
        mid_checkPropertyAccess_e939c6558ae8d313,
        mid_checkRead_451cf111c3bab36d,
        mid_checkRead_e939c6558ae8d313,
        mid_checkRead_69697a1d09839056,
        mid_checkSecurityAccess_e939c6558ae8d313,
        mid_checkSetFactory_7ae3461a92a43152,
        mid_checkWrite_451cf111c3bab36d,
        mid_checkWrite_e939c6558ae8d313,
        mid_getSecurityContext_dfd7647d9110ac9f,
        mid_getThreadGroup_c5a0b769e930fe0b,
        mid_getClassContext_9fe3f453b1078a3c,
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
