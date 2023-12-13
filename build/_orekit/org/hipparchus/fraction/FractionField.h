#ifndef org_hipparchus_fraction_FractionField_H
#define org_hipparchus_fraction_FractionField_H

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
      class FractionField;
      class Fraction;
    }
    class Field;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace fraction {

      class FractionField : public ::java::lang::Object {
       public:
        enum {
          mid_equals_460c5e2d9d51c6cc,
          mid_getInstance_1e2decbb84e0a2b6,
          mid_getOne_7ab72bcbb3909669,
          mid_getRuntimeClass_1aeb0737a960d371,
          mid_getZero_7ab72bcbb3909669,
          mid_hashCode_55546ef6a647f39b,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FractionField(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FractionField(const FractionField& obj) : ::java::lang::Object(obj) {}

        jboolean equals(const ::java::lang::Object &) const;
        static FractionField getInstance();
        ::org::hipparchus::fraction::Fraction getOne() const;
        ::java::lang::Class getRuntimeClass() const;
        ::org::hipparchus::fraction::Fraction getZero() const;
        jint hashCode() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace fraction {
      extern PyType_Def PY_TYPE_DEF(FractionField);
      extern PyTypeObject *PY_TYPE(FractionField);

      class t_FractionField {
      public:
        PyObject_HEAD
        FractionField object;
        static PyObject *wrap_Object(const FractionField&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
