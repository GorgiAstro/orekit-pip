#ifndef org_hipparchus_analysis_differentiation_FieldUnivariateDerivative1Field_H
#define org_hipparchus_analysis_differentiation_FieldUnivariateDerivative1Field_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class Field;
    namespace analysis {
      namespace differentiation {
        class FieldUnivariateDerivative1Field;
        class FieldUnivariateDerivative1;
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

        class FieldUnivariateDerivative1Field : public ::java::lang::Object {
         public:
          enum {
            mid_equals_221e8e85cb385209,
            mid_getOne_b4ea14898e256f1c,
            mid_getRuntimeClass_d4b191ff8147475d,
            mid_getUnivariateDerivative1Field_4e6c8ebf6177b346,
            mid_getZero_b4ea14898e256f1c,
            mid_hashCode_412668abc8d889e9,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldUnivariateDerivative1Field(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldUnivariateDerivative1Field(const FieldUnivariateDerivative1Field& obj) : ::java::lang::Object(obj) {}

          jboolean equals(const ::java::lang::Object &) const;
          ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative1 getOne() const;
          ::java::lang::Class getRuntimeClass() const;
          static FieldUnivariateDerivative1Field getUnivariateDerivative1Field(const ::org::hipparchus::Field &);
          ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative1 getZero() const;
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
        extern PyType_Def PY_TYPE_DEF(FieldUnivariateDerivative1Field);
        extern PyTypeObject *PY_TYPE(FieldUnivariateDerivative1Field);

        class t_FieldUnivariateDerivative1Field {
        public:
          PyObject_HEAD
          FieldUnivariateDerivative1Field object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FieldUnivariateDerivative1Field *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldUnivariateDerivative1Field&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldUnivariateDerivative1Field&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
