#ifndef org_hipparchus_analysis_differentiation_FieldUnivariateDerivative_H
#define org_hipparchus_analysis_differentiation_FieldUnivariateDerivative_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
    }
    class CalculusFieldElement;
    namespace analysis {
      namespace differentiation {
        class FieldDerivativeStructure;
        class FieldUnivariateDerivative;
        class FieldDerivative;
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

        class FieldUnivariateDerivative : public ::java::lang::Object {
         public:
          enum {
            mid_init$_7ae3461a92a43152,
            mid_getDerivative_d0960d09d84b1c1d,
            mid_getFreeParameters_f2f64475e4580546,
            mid_getPartialDerivative_f622835d869c0081,
            mid_toDerivativeStructure_7208bb4259086f92,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldUnivariateDerivative(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldUnivariateDerivative(const FieldUnivariateDerivative& obj) : ::java::lang::Object(obj) {}

          FieldUnivariateDerivative();

          ::org::hipparchus::CalculusFieldElement getDerivative(jint) const;
          jint getFreeParameters() const;
          ::org::hipparchus::CalculusFieldElement getPartialDerivative(const JArray< jint > &) const;
          ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure toDerivativeStructure() const;
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
        extern PyType_Def PY_TYPE_DEF(FieldUnivariateDerivative);
        extern PyTypeObject *PY_TYPE(FieldUnivariateDerivative);

        class t_FieldUnivariateDerivative {
        public:
          PyObject_HEAD
          FieldUnivariateDerivative object;
          PyTypeObject *parameters[2];
          static PyTypeObject **parameters_(t_FieldUnivariateDerivative *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldUnivariateDerivative&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldUnivariateDerivative&, PyTypeObject *, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
