#ifndef java_security_Permission_H
#define java_security_Permission_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class SecurityException;
    class Class;
    class String;
  }
  namespace io {
    class Serializable;
  }
  namespace security {
    class Permission;
  }
}
template<class T> class JArray;

namespace java {
  namespace security {

    class Permission : public ::java::lang::Object {
     public:
      enum {
        mid_init$_f5ffdf29129ef90a,
        mid_checkGuard_009757f2c0fd9090,
        mid_equals_221e8e85cb385209,
        mid_getActions_3cffd47377eca18a,
        mid_getName_3cffd47377eca18a,
        mid_hashCode_412668abc8d889e9,
        mid_implies_a8c459a5c587bd4f,
        mid_toString_3cffd47377eca18a,
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
