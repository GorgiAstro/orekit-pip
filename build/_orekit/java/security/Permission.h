#ifndef java_security_Permission_H
#define java_security_Permission_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class Serializable;
  }
  namespace security {
    class Permission;
  }
  namespace lang {
    class Class;
    class String;
    class SecurityException;
  }
}
template<class T> class JArray;

namespace java {
  namespace security {

    class Permission : public ::java::lang::Object {
     public:
      enum {
        mid_init$_105e1eadb709d9ac,
        mid_checkGuard_83ee235bb1e64e94,
        mid_equals_72faff9b05f5ed5e,
        mid_getActions_d2c8eb4129821f0e,
        mid_getName_d2c8eb4129821f0e,
        mid_hashCode_d6ab429752e7c267,
        mid_implies_46638c4732e66dfd,
        mid_toString_d2c8eb4129821f0e,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Permission(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Permission(const Permission& obj) : ::java::lang::Object(obj) {}

      Permission(const ::java::lang::String &);

      void checkGuard(const ::java::lang::Object &) const;
      jboolean equals(const ::java::lang::Object &) const;
      ::java::lang::String getActions() const;
      ::java::lang::String getName() const;
      jint hashCode() const;
      jboolean implies(const Permission &) const;
      ::java::lang::String toString() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace security {
    extern PyType_Def PY_TYPE_DEF(Permission);
    extern PyTypeObject *PY_TYPE(Permission);

    class t_Permission {
    public:
      PyObject_HEAD
      Permission object;
      static PyObject *wrap_Object(const Permission&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
