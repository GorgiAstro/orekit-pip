#ifndef org_hipparchus_util_BigReal_H
#define org_hipparchus_util_BigReal_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace util {
      class BigReal;
    }
    namespace exception {
      class MathRuntimeException;
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
          mid_init$_3534e8e092c162a5,
          mid_init$_d0bc48d5b00dc40c,
          mid_init$_17db3a65980d3441,
          mid_init$_99803b0791f320ff,
          mid_init$_3a8e7649f31fdb20,
          mid_init$_44aecef33af91018,
          mid_add_2d1826a69b67e3b0,
          mid_compareTo_1ce8cbfef64aaf0d,
          mid_divide_2d1826a69b67e3b0,
          mid_doubleValue_dff5885c2c873297,
          mid_equals_65c7d273e80d497a,
          mid_getField_5b28be2d3632a5dc,
          mid_getReal_dff5885c2c873297,
          mid_getScale_570ce0828f81a2c1,
          mid_hashCode_570ce0828f81a2c1,
          mid_multiply_2d1826a69b67e3b0,
          mid_multiply_cd8e4f68673673f2,
          mid_negate_fd9d6080c6f729de,
          mid_reciprocal_fd9d6080c6f729de,
          mid_setScale_99803b0791f320ff,
          mid_subtract_2d1826a69b67e3b0,
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
