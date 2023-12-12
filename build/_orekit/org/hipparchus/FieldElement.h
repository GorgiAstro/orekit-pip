#ifndef org_hipparchus_FieldElement_H
#define org_hipparchus_FieldElement_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class FieldElement;
    namespace exception {
      class NullArgumentException;
      class MathRuntimeException;
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

    class FieldElement : public ::java::lang::Object {
     public:
      enum {
        mid_add_a6cf95a93b365fc9,
        mid_divide_a6cf95a93b365fc9,
        mid_getField_20f98801541dcec1,
        mid_getReal_557b8123390d8d0c,
        mid_isZero_89b302893bdbe1f1,
        mid_multiply_d40ba91356b6a058,
        mid_multiply_a6cf95a93b365fc9,
        mid_negate_ce0470d468f80a56,
        mid_reciprocal_ce0470d468f80a56,
        mid_subtract_a6cf95a93b365fc9,
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
