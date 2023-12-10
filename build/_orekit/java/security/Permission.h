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
    class SecurityException;
    class String;
  }
}
template<class T> class JArray;

namespace java {
  namespace security {

    class Permission : public ::java::lang::Object {
     public:
      enum {
        mid_init$_d0bc48d5b00dc40c,
        mid_checkGuard_2990946c992aafed,
        mid_equals_65c7d273e80d497a,
        mid_getActions_11b109bd155ca898,
        mid_getName_11b109bd155ca898,
        mid_hashCode_570ce0828f81a2c1,
        mid_implies_fd5914bb7b2ed7bc,
        mid_toString_11b109bd155ca898,
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
