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
        mid_init$_e939c6558ae8d313,
        mid_checkGuard_7ca0d9438822cb0b,
        mid_equals_229c87223f486349,
        mid_getActions_0090f7797e403f43,
        mid_getName_0090f7797e403f43,
        mid_hashCode_f2f64475e4580546,
        mid_implies_a24701876290d2d8,
        mid_toString_0090f7797e403f43,
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
