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
    class SecurityException;
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace java {
  namespace security {

    class Permission : public ::java::lang::Object {
     public:
      enum {
        mid_init$_734b91ac30d5f9b4,
        mid_checkGuard_55f3c894852c27a3,
        mid_equals_460c5e2d9d51c6cc,
        mid_getActions_1c1fa1e935d6cdcf,
        mid_getName_1c1fa1e935d6cdcf,
        mid_hashCode_55546ef6a647f39b,
        mid_implies_ca9e753196b1e6bc,
        mid_toString_1c1fa1e935d6cdcf,
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
