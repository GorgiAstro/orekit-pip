#ifndef org_hipparchus_util_BigRealField_H
#define org_hipparchus_util_BigRealField_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace util {
      class BigReal;
      class BigRealField;
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

      class BigRealField : public ::java::lang::Object {
       public:
        enum {
          mid_equals_221e8e85cb385209,
          mid_getInstance_5a46ddf8e02ff43d,
          mid_getOne_2073e31f7b6bcf19,
          mid_getRuntimeClass_d4b191ff8147475d,
          mid_getZero_2073e31f7b6bcf19,
          mid_hashCode_412668abc8d889e9,
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
