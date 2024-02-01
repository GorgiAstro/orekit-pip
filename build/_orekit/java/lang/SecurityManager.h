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
        mid_init$_ff7cb6c242604316,
        mid_checkAccept_409747bddf859341,
        mid_checkAccess_64babdd34ce90f76,
        mid_checkAccess_86cc064cb2f6d47d,
        mid_checkConnect_409747bddf859341,
        mid_checkConnect_fa2c8b3802d928db,
        mid_checkCreateClassLoader_ff7cb6c242604316,
        mid_checkDelete_105e1eadb709d9ac,
        mid_checkExec_105e1eadb709d9ac,
        mid_checkExit_8fd427ab23829bf5,
        mid_checkLink_105e1eadb709d9ac,
        mid_checkListen_8fd427ab23829bf5,
        mid_checkPackageAccess_105e1eadb709d9ac,
        mid_checkPackageDefinition_105e1eadb709d9ac,
        mid_checkPrintJobAccess_ff7cb6c242604316,
        mid_checkPropertiesAccess_ff7cb6c242604316,
        mid_checkPropertyAccess_105e1eadb709d9ac,
        mid_checkRead_2abbf5ab4dcb8447,
        mid_checkRead_105e1eadb709d9ac,
        mid_checkRead_8d1699d8ffa3b892,
        mid_checkSecurityAccess_105e1eadb709d9ac,
        mid_checkSetFactory_ff7cb6c242604316,
        mid_checkWrite_2abbf5ab4dcb8447,
        mid_checkWrite_105e1eadb709d9ac,
        mid_getSecurityContext_704a5bee58538972,
        mid_getThreadGroup_7b80b98e8a66c9f8,
        mid_getClassContext_43ba7a5d6b18fc61,
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
