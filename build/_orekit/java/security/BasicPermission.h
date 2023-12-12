#ifndef java_security_BasicPermission_H
#define java_security_BasicPermission_H

#include "java/security/Permission.h"

namespace java {
  namespace lang {
    class String;
    class Class;
    class Object;
  }
}
template<class T> class JArray;

namespace java {
  namespace security {

    class BasicPermission : public ::java::security::Permission {
     public:
      enum {
        mid_init$_f5ffdf29129ef90a,
        mid_init$_630071dd94c59169,
        mid_equals_221e8e85cb385209,
        mid_getActions_3cffd47377eca18a,
        mid_hashCode_412668abc8d889e9,
        mid_implies_a8c459a5c587bd4f,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit BasicPermission(jobject obj) : ::java::security::Permission(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      BasicPermission(const BasicPermission& obj) : ::java::security::Permission(obj) {}

      BasicPermission(const ::java::lang::String &);
      BasicPermission(const ::java::lang::String &, const ::java::lang::String &);

      jboolean equals(const ::java::lang::Object &) const;
      ::java::lang::String getActions() const;
      jint hashCode() const;
      jboolean implies(const ::java::security::Permission &) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace security {
    extern PyType_Def PY_TYPE_DEF(BasicPermission);
    extern PyTypeObject *PY_TYPE(BasicPermission);

    class t_BasicPermission {
    public:
      PyObject_HEAD
      BasicPermission object;
      static PyObject *wrap_Object(const BasicPermission&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
