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
          mid_equals_65c7d273e80d497a,
          mid_getInstance_e723739aa731d3cf,
          mid_getOne_fd9d6080c6f729de,
          mid_getRuntimeClass_7c16c5008b34b3db,
          mid_getZero_fd9d6080c6f729de,
          mid_hashCode_570ce0828f81a2c1,
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
