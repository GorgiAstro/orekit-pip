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
          mid_equals_65c7d273e80d497a,
          mid_getInstance_bd5b8d6d09b3bc67,
          mid_getOne_785133ac6602777f,
          mid_getRuntimeClass_7c16c5008b34b3db,
          mid_getZero_785133ac6602777f,
          mid_hashCode_570ce0828f81a2c1,
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
