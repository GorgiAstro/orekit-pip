#ifndef org_hipparchus_fraction_BigFractionField_H
#define org_hipparchus_fraction_BigFractionField_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace fraction {
      class BigFractionField;
      class BigFraction;
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
          mid_equals_72faff9b05f5ed5e,
          mid_getInstance_31dd0998fe2402b3,
          mid_getOne_f9f39221bd88c021,
          mid_getRuntimeClass_d5247e4b166c4ce8,
          mid_getZero_f9f39221bd88c021,
          mid_hashCode_d6ab429752e7c267,
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
