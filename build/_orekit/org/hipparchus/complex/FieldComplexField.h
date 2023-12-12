#ifndef org_hipparchus_complex_FieldComplexField_H
#define org_hipparchus_complex_FieldComplexField_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class Field;
    namespace complex {
      class FieldComplexField;
      class FieldComplex;
    }
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
          mid_equals_221e8e85cb385209,
          mid_getField_ce9ae1019f40cd7c,
          mid_getOne_bfc6d3bb8e8278b9,
          mid_getRuntimeClass_d4b191ff8147475d,
          mid_getZero_bfc6d3bb8e8278b9,
          mid_hashCode_412668abc8d889e9,
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
