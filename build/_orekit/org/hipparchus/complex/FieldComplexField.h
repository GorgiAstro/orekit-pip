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
          mid_equals_229c87223f486349,
          mid_getField_903a1718777f286c,
          mid_getOne_fe347867d3dfbc81,
          mid_getRuntimeClass_8f66acc08d2a174c,
          mid_getZero_fe347867d3dfbc81,
          mid_hashCode_f2f64475e4580546,
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
