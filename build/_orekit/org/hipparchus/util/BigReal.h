#ifndef org_hipparchus_util_BigReal_H
#define org_hipparchus_util_BigReal_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Class;
    class String;
    class Comparable;
  }
}
namespace org {
  namespace hipparchus {
    class Field;
    namespace util {
      class BigReal;
    }
    namespace exception {
      class MathRuntimeException;
    }
    class FieldElement;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace util {

      class BigReal : public ::java::lang::Object {
       public:
        enum {
          mid_init$_dd3f254991df5d48,
          mid_init$_734b91ac30d5f9b4,
          mid_init$_8ba9fe7a847cecad,
          mid_init$_44ed599e93e8a30c,
          mid_init$_3d7dd2314a0dd456,
          mid_init$_d23ba6c655e17478,
          mid_add_b1de32a042fbe7cc,
          mid_compareTo_95c7d95b3d60253f,
          mid_divide_b1de32a042fbe7cc,
          mid_doubleValue_b74f83833fdad017,
          mid_equals_460c5e2d9d51c6cc,
          mid_getField_04d1f63e17d5c5d4,
          mid_getReal_b74f83833fdad017,
          mid_getScale_55546ef6a647f39b,
          mid_hashCode_55546ef6a647f39b,
          mid_multiply_b1de32a042fbe7cc,
          mid_multiply_b4ff4a9d70ce8ddb,
          mid_negate_152d3c51a3e6d94d,
          mid_reciprocal_152d3c51a3e6d94d,
          mid_setScale_44ed599e93e8a30c,
          mid_subtract_b1de32a042fbe7cc,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit BigReal(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        BigReal(const BigReal& obj) : ::java::lang::Object(obj) {}

        static BigReal *ONE;
        static BigReal *ZERO;

        BigReal(const JArray< jchar > &);
        BigReal(const ::java::lang::String &);
        BigReal(jdouble);
        BigReal(jint);
        BigReal(jlong);
        BigReal(const JArray< jchar > &, jint, jint);

        BigReal add(const BigReal &) const;
        jint compareTo(const BigReal &) const;
        BigReal divide(const BigReal &) const;
        jdouble doubleValue() const;
        jboolean equals(const ::java::lang::Object &) const;
        ::org::hipparchus::Field getField() const;
        jdouble getReal() const;
        jint getScale() const;
        jint hashCode() const;
        BigReal multiply(const BigReal &) const;
        BigReal multiply(jint) const;
        BigReal negate() const;
        BigReal reciprocal() const;
        void setScale(jint) const;
        BigReal subtract(const BigReal &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace util {
      extern PyType_Def PY_TYPE_DEF(BigReal);
      extern PyTypeObject *PY_TYPE(BigReal);

      class t_BigReal {
      public:
        PyObject_HEAD
        BigReal object;
        static PyObject *wrap_Object(const BigReal&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
