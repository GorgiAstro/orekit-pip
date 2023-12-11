#ifndef org_hipparchus_analysis_differentiation_FieldDerivative_H
#define org_hipparchus_analysis_differentiation_FieldDerivative_H

#include "org/hipparchus/CalculusFieldElement.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        class FieldDerivative;
      }
    }
    namespace exception {
      class MathIllegalArgumentException;
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

        class FieldDerivative : public ::org::hipparchus::CalculusFieldElement {
         public:
          enum {
            mid_getFreeParameters_412668abc8d889e9,
            mid_getOrder_412668abc8d889e9,
            mid_getPartialDerivative_12d47fa54f2033ee,
            mid_getValue_613c8f46c659f636,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldDerivative(jobject obj) : ::org::hipparchus::CalculusFieldElement(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldDerivative(const FieldDerivative& obj) : ::org::hipparchus::CalculusFieldElement(obj) {}

          jint getFreeParameters() const;
          jint getOrder() const;
          ::org::hipparchus::CalculusFieldElement getPartialDerivative(const JArray< jint > &) const;
          ::org::hipparchus::CalculusFieldElement getValue() const;
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
        extern PyType_Def PY_TYPE_DEF(FieldDerivative);
        extern PyTypeObject *PY_TYPE(FieldDerivative);

        class t_FieldDerivative {
        public:
          PyObject_HEAD
          FieldDerivative object;
          PyTypeObject *parameters[2];
          static PyTypeObject **parameters_(t_FieldDerivative *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldDerivative&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldDerivative&, PyTypeObject *, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
