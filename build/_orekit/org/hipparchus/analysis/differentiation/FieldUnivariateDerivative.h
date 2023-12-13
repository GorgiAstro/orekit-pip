#ifndef org_hipparchus_analysis_differentiation_FieldUnivariateDerivative_H
#define org_hipparchus_analysis_differentiation_FieldUnivariateDerivative_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        class FieldDerivativeStructure;
        class FieldDerivative;
        class FieldUnivariateDerivative;
      }
    }
    class CalculusFieldElement;
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

        class FieldUnivariateDerivative : public ::java::lang::Object {
         public:
          enum {
            mid_init$_a1fa5dae97ea5ed2,
            mid_getDerivative_21e6b3c521b9c768,
            mid_getFreeParameters_55546ef6a647f39b,
            mid_getPartialDerivative_8224159d85a4681d,
            mid_toDerivativeStructure_4b6e77c66fd622c3,
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
