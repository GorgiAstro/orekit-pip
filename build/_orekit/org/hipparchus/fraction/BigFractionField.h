#ifndef org_hipparchus_fraction_BigFractionField_H
#define org_hipparchus_fraction_BigFractionField_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace fraction {
      class BigFraction;
      class BigFractionField;
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
    namespace fraction {

      class BigFractionField : public ::java::lang::Object {
       public:
        enum {
          mid_equals_221e8e85cb385209,
          mid_getInstance_b141d0462bc50421,
          mid_getOne_92546681fd225453,
          mid_getRuntimeClass_d4b191ff8147475d,
          mid_getZero_92546681fd225453,
          mid_hashCode_412668abc8d889e9,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit BigFractionField(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        BigFractionField(const BigFractionField& obj) : ::java::lang::Object(obj) {}

        jboolean equals(const ::java::lang::Object &) const;
        static BigFractionField getInstance();
        ::org::hipparchus::fraction::BigFraction getOne() const;
        ::java::lang::Class getRuntimeClass() const;
        ::org::hipparchus::fraction::BigFraction getZero() const;
        jint hashCode() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace fraction {
      extern PyType_Def PY_TYPE_DEF(BigFractionField);
      extern PyTypeObject *PY_TYPE(BigFractionField);

      class t_BigFractionField {
      public:
        PyObject_HEAD
        BigFractionField object;
        static PyObject *wrap_Object(const BigFractionField&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
