#ifndef org_hipparchus_util_BigRealField_H
#define org_hipparchus_util_BigRealField_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace util {
      class BigRealField;
      class BigReal;
    }
    class Field;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace util {

      class BigRealField : public ::java::lang::Object {
       public:
        enum {
          mid_equals_460c5e2d9d51c6cc,
          mid_getInstance_ab1f2b526cc00b23,
          mid_getOne_152d3c51a3e6d94d,
          mid_getRuntimeClass_1aeb0737a960d371,
          mid_getZero_152d3c51a3e6d94d,
          mid_hashCode_55546ef6a647f39b,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit BigRealField(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        BigRealField(const BigRealField& obj) : ::java::lang::Object(obj) {}

        jboolean equals(const ::java::lang::Object &) const;
        static BigRealField getInstance();
        ::org::hipparchus::util::BigReal getOne() const;
        ::java::lang::Class getRuntimeClass() const;
        ::org::hipparchus::util::BigReal getZero() const;
        jint hashCode() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace util {
      extern PyType_Def PY_TYPE_DEF(BigRealField);
      extern PyTypeObject *PY_TYPE(BigRealField);

      class t_BigRealField {
      public:
        PyObject_HEAD
        BigRealField object;
        static PyObject *wrap_Object(const BigRealField&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
