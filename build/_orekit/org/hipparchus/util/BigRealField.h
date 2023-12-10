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
          mid_equals_229c87223f486349,
          mid_getInstance_b22318a83d56db5f,
          mid_getOne_032077e6380ada07,
          mid_getRuntimeClass_8f66acc08d2a174c,
          mid_getZero_032077e6380ada07,
          mid_hashCode_f2f64475e4580546,
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
