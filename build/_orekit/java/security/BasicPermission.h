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
        mid_init$_d0bc48d5b00dc40c,
        mid_init$_6a2001eff0605f71,
        mid_equals_65c7d273e80d497a,
        mid_getActions_11b109bd155ca898,
        mid_hashCode_570ce0828f81a2c1,
        mid_implies_fd5914bb7b2ed7bc,
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
