#ifndef org_hipparchus_complex_FieldComplexField_H
#define org_hipparchus_complex_FieldComplexField_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace complex {
      class FieldComplexField;
      class FieldComplex;
    }
    class Field;
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace complex {

      class FieldComplexField : public ::java::lang::Object {
       public:
        enum {
          mid_equals_460c5e2d9d51c6cc,
          mid_getField_b5bb517c2cd2bcaf,
          mid_getOne_ba578f832ae965ef,
          mid_getRuntimeClass_1aeb0737a960d371,
          mid_getZero_ba578f832ae965ef,
          mid_hashCode_55546ef6a647f39b,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FieldComplexField(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FieldComplexField(const FieldComplexField& obj) : ::java::lang::Object(obj) {}

        jboolean equals(const ::java::lang::Object &) const;
        static FieldComplexField getField(const ::org::hipparchus::Field &);
        ::org::hipparchus::complex::FieldComplex getOne() const;
        ::java::lang::Class getRuntimeClass() const;
        ::org::hipparchus::complex::FieldComplex getZero() const;
        jint hashCode() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace complex {
      extern PyType_Def PY_TYPE_DEF(FieldComplexField);
      extern PyTypeObject *PY_TYPE(FieldComplexField);

      class t_FieldComplexField {
      public:
        PyObject_HEAD
        FieldComplexField object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_FieldComplexField *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const FieldComplexField&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const FieldComplexField&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
