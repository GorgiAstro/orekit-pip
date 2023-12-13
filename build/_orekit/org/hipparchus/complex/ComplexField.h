#ifndef org_hipparchus_complex_ComplexField_H
#define org_hipparchus_complex_ComplexField_H

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
    namespace complex {
      class Complex;
      class ComplexField;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace complex {

      class ComplexField : public ::java::lang::Object {
       public:
        enum {
          mid_equals_460c5e2d9d51c6cc,
          mid_getInstance_74589e1538dd146b,
          mid_getOne_2f0868cbf8c045d4,
          mid_getRuntimeClass_1aeb0737a960d371,
          mid_getZero_2f0868cbf8c045d4,
          mid_hashCode_55546ef6a647f39b,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit ComplexField(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        ComplexField(const ComplexField& obj) : ::java::lang::Object(obj) {}

        jboolean equals(const ::java::lang::Object &) const;
        static ComplexField getInstance();
        ::org::hipparchus::complex::Complex getOne() const;
        ::java::lang::Class getRuntimeClass() const;
        ::org::hipparchus::complex::Complex getZero() const;
        jint hashCode() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace complex {
      extern PyType_Def PY_TYPE_DEF(ComplexField);
      extern PyTypeObject *PY_TYPE(ComplexField);

      class t_ComplexField {
      public:
        PyObject_HEAD
        ComplexField object;
        static PyObject *wrap_Object(const ComplexField&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
