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
    class Field;
    namespace fraction {
      class FractionField;
      class Fraction;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace fraction {

      class FractionField : public ::java::lang::Object {
       public:
        enum {
          mid_equals_229c87223f486349,
          mid_getInstance_b8cb7e3975ac8fd2,
          mid_getOne_7847eacc50504e7f,
          mid_getRuntimeClass_8f66acc08d2a174c,
          mid_getZero_7847eacc50504e7f,
          mid_hashCode_f2f64475e4580546,
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
