#ifndef org_hipparchus_analysis_differentiation_FieldGradientField_H
#define org_hipparchus_analysis_differentiation_FieldGradientField_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class Field;
    namespace analysis {
      namespace differentiation {
        class FieldGradientField;
        class FieldGradient;
      }
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
    namespace analysis {
      namespace differentiation {

        class FieldGradientField : public ::java::lang::Object {
         public:
          enum {
            mid_equals_221e8e85cb385209,
            mid_getField_b172e05bf38ec4f1,
            mid_getOne_fc34f2fa32af76f3,
            mid_getRuntimeClass_d4b191ff8147475d,
            mid_getZero_fc34f2fa32af76f3,
            mid_hashCode_412668abc8d889e9,
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
