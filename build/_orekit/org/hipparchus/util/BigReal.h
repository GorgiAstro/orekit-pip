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
    namespace util {
      class BigReal;
    }
    class Field;
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
          mid_init$_819ed274952f967e,
          mid_init$_e939c6558ae8d313,
          mid_init$_77e0f9a1f260e2e5,
          mid_init$_0a2a1ac2721c0336,
          mid_init$_fefb08975c10f0a1,
          mid_init$_2df38be22737223f,
          mid_add_916d074b37ce122c,
          mid_compareTo_d6baeffb117a468b,
          mid_divide_916d074b37ce122c,
          mid_doubleValue_456d9a2f64d6b28d,
          mid_equals_229c87223f486349,
          mid_getField_70b4bbd3fa378d6b,
          mid_getReal_456d9a2f64d6b28d,
          mid_getScale_f2f64475e4580546,
          mid_hashCode_f2f64475e4580546,
          mid_multiply_916d074b37ce122c,
          mid_multiply_b29a900833a8d2ea,
          mid_negate_032077e6380ada07,
          mid_reciprocal_032077e6380ada07,
          mid_setScale_0a2a1ac2721c0336,
          mid_subtract_916d074b37ce122c,
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
