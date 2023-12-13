#ifndef org_hipparchus_fraction_BigFractionField_H
#define org_hipparchus_fraction_BigFractionField_H

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
    namespace fraction {
      class BigFractionField;
      class BigFraction;
    }
    class Field;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace fraction {

      class BigFractionField : public ::java::lang::Object {
       public:
        enum {
          mid_equals_460c5e2d9d51c6cc,
          mid_getInstance_23be7e86283dd98a,
          mid_getOne_7369b54299dcf892,
          mid_getRuntimeClass_1aeb0737a960d371,
          mid_getZero_7369b54299dcf892,
          mid_hashCode_55546ef6a647f39b,
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
