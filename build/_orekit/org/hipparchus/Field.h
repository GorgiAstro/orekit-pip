#ifndef org_hipparchus_Field_H
#define org_hipparchus_Field_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    class FieldElement;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {

    class Field : public ::java::lang::Object {
     public:
      enum {
        mid_getOne_f6328613456309a1,
        mid_getRuntimeClass_d5247e4b166c4ce8,
        mid_getZero_f6328613456309a1,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Field(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Field(const Field& obj) : ::java::lang::Object(obj) {}

      ::org::hipparchus::FieldElement getOne() const;
      ::java::lang::Class getRuntimeClass() const;
      ::org::hipparchus::FieldElement getZero() const;
    };
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    extern PyType_Def PY_TYPE_DEF(Field);
    extern PyTypeObject *PY_TYPE(Field);

    class t_Field {
    public:
      PyObject_HEAD
      Field object;
      PyTypeObject *parameters[1];
      static PyTypeObject **parameters_(t_Field *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const Field&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const Field&, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
