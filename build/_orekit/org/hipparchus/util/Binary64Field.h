#ifndef org_hipparchus_util_Binary64Field_H
#define org_hipparchus_util_Binary64Field_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace util {
      class Binary64;
      class Binary64Field;
    }
    class Field;
  }
}
namespace java {
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace util {

      class Binary64Field : public ::java::lang::Object {
       public:
        enum {
          mid_equals_229c87223f486349,
          mid_getInstance_8494a3ac3be399fe,
          mid_getOne_cd1f6a49ec3a1b51,
          mid_getRuntimeClass_8f66acc08d2a174c,
          mid_getZero_cd1f6a49ec3a1b51,
          mid_hashCode_f2f64475e4580546,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit Binary64Field(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        Binary64Field(const Binary64Field& obj) : ::java::lang::Object(obj) {}

        jboolean equals(const ::java::lang::Object &) const;
        static Binary64Field getInstance();
        ::org::hipparchus::util::Binary64 getOne() const;
        ::java::lang::Class getRuntimeClass() const;
        ::org::hipparchus::util::Binary64 getZero() const;
        jint hashCode() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace util {
      extern PyType_Def PY_TYPE_DEF(Binary64Field);
      extern PyTypeObject *PY_TYPE(Binary64Field);

      class t_Binary64Field {
      public:
        PyObject_HEAD
        Binary64Field object;
        static PyObject *wrap_Object(const Binary64Field&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
