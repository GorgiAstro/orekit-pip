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
        mid_add_013225ac340b432a,
        mid_divide_013225ac340b432a,
        mid_getField_5b28be2d3632a5dc,
        mid_getReal_dff5885c2c873297,
        mid_isZero_b108b35ef48e27bd,
        mid_multiply_ffcdb6600dc6671a,
        mid_multiply_013225ac340b432a,
        mid_negate_99097cb60cf2d774,
        mid_reciprocal_99097cb60cf2d774,
        mid_subtract_013225ac340b432a,
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
