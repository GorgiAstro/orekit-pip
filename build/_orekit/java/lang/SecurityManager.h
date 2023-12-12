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
        mid_init$_0640e6acf969ed28,
        mid_checkAccept_358501078068b45e,
        mid_checkAccess_574f9dad62c353dc,
        mid_checkAccess_84802e277a8287ee,
        mid_checkConnect_358501078068b45e,
        mid_checkConnect_094bd74fcac1628c,
        mid_checkCreateClassLoader_0640e6acf969ed28,
        mid_checkDelete_f5ffdf29129ef90a,
        mid_checkExec_f5ffdf29129ef90a,
        mid_checkExit_a3da1a935cb37f7b,
        mid_checkLink_f5ffdf29129ef90a,
        mid_checkListen_a3da1a935cb37f7b,
        mid_checkPackageAccess_f5ffdf29129ef90a,
        mid_checkPackageDefinition_f5ffdf29129ef90a,
        mid_checkPrintJobAccess_0640e6acf969ed28,
        mid_checkPropertiesAccess_0640e6acf969ed28,
        mid_checkPropertyAccess_f5ffdf29129ef90a,
        mid_checkRead_0a1c60be3a779b3b,
        mid_checkRead_f5ffdf29129ef90a,
        mid_checkRead_53d92541fcec0ec7,
        mid_checkSecurityAccess_f5ffdf29129ef90a,
        mid_checkSetFactory_0640e6acf969ed28,
        mid_checkWrite_0a1c60be3a779b3b,
        mid_checkWrite_f5ffdf29129ef90a,
        mid_getSecurityContext_e661fe3ba2fafb22,
        mid_getThreadGroup_33ca5756bd56429e,
        mid_getClassContext_c988485cdace3d64,
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
