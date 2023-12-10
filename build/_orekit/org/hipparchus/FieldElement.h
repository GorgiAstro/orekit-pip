#ifndef org_hipparchus_FieldElement_H
#define org_hipparchus_FieldElement_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class Field;
    namespace exception {
      class NullArgumentException;
      class MathRuntimeException;
    }
    class FieldElement;
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

    class FieldElement : public ::java::lang::Object {
     public:
      enum {
        mid_add_2ab3500f2b9ac35d,
        mid_divide_2ab3500f2b9ac35d,
        mid_getField_70b4bbd3fa378d6b,
        mid_getReal_456d9a2f64d6b28d,
        mid_isZero_e470b6d9e0d979db,
        mid_multiply_5e30662bac3edb02,
        mid_multiply_2ab3500f2b9ac35d,
        mid_negate_7e89936bdf79375b,
        mid_reciprocal_7e89936bdf79375b,
        mid_subtract_2ab3500f2b9ac35d,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit FieldElement(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      FieldElement(const FieldElement& obj) : ::java::lang::Object(obj) {}

      FieldElement add(const FieldElement &) const;
      FieldElement divide(const FieldElement &) const;
      ::org::hipparchus::Field getField() const;
      jdouble getReal() const;
      jboolean isZero() const;
      FieldElement multiply(jint) const;
      FieldElement multiply(const FieldElement &) const;
      FieldElement negate() const;
      FieldElement reciprocal() const;
      FieldElement subtract(const FieldElement &) const;
    };
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    extern PyType_Def PY_TYPE_DEF(FieldElement);
    extern PyTypeObject *PY_TYPE(FieldElement);

    class t_FieldElement {
    public:
      PyObject_HEAD
      FieldElement object;
      PyTypeObject *parameters[1];
      static PyTypeObject **parameters_(t_FieldElement *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const FieldElement&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const FieldElement&, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
