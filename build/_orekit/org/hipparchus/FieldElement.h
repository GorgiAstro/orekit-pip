#ifndef org_hipparchus_FieldElement_H
#define org_hipparchus_FieldElement_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class NullArgumentException;
      class MathRuntimeException;
    }
    class Field;
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
        mid_add_392eff94748018d4,
        mid_divide_392eff94748018d4,
        mid_getField_04d1f63e17d5c5d4,
        mid_getReal_b74f83833fdad017,
        mid_isZero_9ab94ac1dc23b105,
        mid_multiply_6c5caf579ccf9ce5,
        mid_multiply_392eff94748018d4,
        mid_negate_2ff8de927fda4153,
        mid_reciprocal_2ff8de927fda4153,
        mid_subtract_392eff94748018d4,
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
