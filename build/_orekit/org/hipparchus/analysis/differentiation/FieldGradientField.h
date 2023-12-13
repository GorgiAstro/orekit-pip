#ifndef org_hipparchus_analysis_differentiation_FieldGradientField_H
#define org_hipparchus_analysis_differentiation_FieldGradientField_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        class FieldGradient;
        class FieldGradientField;
      }
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
    namespace analysis {
      namespace differentiation {

        class FieldGradientField : public ::java::lang::Object {
         public:
          enum {
            mid_equals_460c5e2d9d51c6cc,
            mid_getField_93f57fcb2194069f,
            mid_getOne_f418c9d91aa473ef,
            mid_getRuntimeClass_1aeb0737a960d371,
            mid_getZero_f418c9d91aa473ef,
            mid_hashCode_55546ef6a647f39b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldGradientField(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldGradientField(const FieldGradientField& obj) : ::java::lang::Object(obj) {}

          jboolean equals(const ::java::lang::Object &) const;
          static FieldGradientField getField(const ::org::hipparchus::Field &, jint);
          ::org::hipparchus::analysis::differentiation::FieldGradient getOne() const;
          ::java::lang::Class getRuntimeClass() const;
          ::org::hipparchus::analysis::differentiation::FieldGradient getZero() const;
          jint hashCode() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        extern PyType_Def PY_TYPE_DEF(FieldGradientField);
        extern PyTypeObject *PY_TYPE(FieldGradientField);

        class t_FieldGradientField {
        public:
          PyObject_HEAD
          FieldGradientField object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FieldGradientField *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldGradientField&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldGradientField&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
