#ifndef org_hipparchus_fraction_FractionField_H
#define org_hipparchus_fraction_FractionField_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace fraction {
      class Fraction;
      class FractionField;
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

      class FractionField : public ::java::lang::Object {
       public:
        enum {
          mid_equals_65c7d273e80d497a,
          mid_getInstance_c92e44cc353119ce,
          mid_getOne_883007575ab78b44,
          mid_getRuntimeClass_7c16c5008b34b3db,
          mid_getZero_883007575ab78b44,
          mid_hashCode_570ce0828f81a2c1,
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
