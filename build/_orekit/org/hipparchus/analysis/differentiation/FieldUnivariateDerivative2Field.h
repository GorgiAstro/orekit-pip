#ifndef org_hipparchus_analysis_differentiation_FieldUnivariateDerivative2Field_H
#define org_hipparchus_analysis_differentiation_FieldUnivariateDerivative2Field_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        class FieldUnivariateDerivative2Field;
        class FieldUnivariateDerivative2;
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

        class FieldUnivariateDerivative2Field : public ::java::lang::Object {
         public:
          enum {
            mid_equals_221e8e85cb385209,
            mid_getOne_aee8d6ce5ed6f574,
            mid_getRuntimeClass_d4b191ff8147475d,
            mid_getUnivariateDerivative2Field_266461907de0091e,
            mid_getZero_aee8d6ce5ed6f574,
            mid_hashCode_412668abc8d889e9,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldUnivariateDerivative2Field(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldUnivariateDerivative2Field(const FieldUnivariateDerivative2Field& obj) : ::java::lang::Object(obj) {}

          jboolean equals(const ::java::lang::Object &) const;
          ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative2 getOne() const;
          ::java::lang::Class getRuntimeClass() const;
          static FieldUnivariateDerivative2Field getUnivariateDerivative2Field(const ::org::hipparchus::Field &);
          ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative2 getZero() const;
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
        extern PyType_Def PY_TYPE_DEF(FieldUnivariateDerivative2Field);
        extern PyTypeObject *PY_TYPE(FieldUnivariateDerivative2Field);

        class t_FieldUnivariateDerivative2Field {
        public:
          PyObject_HEAD
          FieldUnivariateDerivative2Field object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FieldUnivariateDerivative2Field *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldUnivariateDerivative2Field&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldUnivariateDerivative2Field&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
