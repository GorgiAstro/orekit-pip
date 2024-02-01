#ifndef org_hipparchus_util_BigReal_H
#define org_hipparchus_util_BigReal_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathRuntimeException;
    }
    namespace util {
      class BigReal;
    }
    class Field;
    class FieldElement;
  }
}
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
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace util {

      class BigReal : public ::java::lang::Object {
       public:
        enum {
          mid_init$_e22e96b35f4145e4,
          mid_init$_105e1eadb709d9ac,
          mid_init$_1ad26e8c8c0cd65b,
          mid_init$_8fd427ab23829bf5,
          mid_init$_f5bbab7e97879358,
          mid_init$_6f10578448832e2a,
          mid_add_25c091a838b6e358,
          mid_compareTo_9b4c95dcdac4646b,
          mid_divide_25c091a838b6e358,
          mid_doubleValue_9981f74b2d109da6,
          mid_equals_72faff9b05f5ed5e,
          mid_getField_577649682b9910c1,
          mid_getReal_9981f74b2d109da6,
          mid_getScale_d6ab429752e7c267,
          mid_hashCode_d6ab429752e7c267,
          mid_multiply_25c091a838b6e358,
          mid_multiply_d985cb5e0f4ba91f,
          mid_negate_387b4b2d211c6e82,
          mid_reciprocal_387b4b2d211c6e82,
          mid_setScale_8fd427ab23829bf5,
          mid_subtract_25c091a838b6e358,
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
