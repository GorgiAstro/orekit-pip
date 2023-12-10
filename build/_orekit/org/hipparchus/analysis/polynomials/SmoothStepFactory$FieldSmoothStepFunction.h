#ifndef org_hipparchus_analysis_polynomials_SmoothStepFactory$FieldSmoothStepFunction_H
#define org_hipparchus_analysis_polynomials_SmoothStepFactory$FieldSmoothStepFunction_H

#include "org/hipparchus/analysis/polynomials/FieldPolynomialFunction.h"

namespace org {
  namespace hipparchus {
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
      namespace polynomials {

        class SmoothStepFactory$FieldSmoothStepFunction : public ::org::hipparchus::analysis::polynomials::FieldPolynomialFunction {
         public:
          enum {
            mid_value_616c74807d7607b4,
            mid_value_a4b1871f4d29e58b,
            mid_value_51d6e6eb816495b3,
            mid_checkInputEdges_8f2e782d5278b131,
            mid_clampInput_51d6e6eb816495b3,
            mid_normalizeInput_51d6e6eb816495b3,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SmoothStepFactory$FieldSmoothStepFunction(jobject obj) : ::org::hipparchus::analysis::polynomials::FieldPolynomialFunction(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SmoothStepFactory$FieldSmoothStepFunction(const SmoothStepFactory$FieldSmoothStepFunction& obj) : ::org::hipparchus::analysis::polynomials::FieldPolynomialFunction(obj) {}

          ::org::hipparchus::CalculusFieldElement value(jdouble) const;
          ::org::hipparchus::CalculusFieldElement value(const ::org::hipparchus::CalculusFieldElement &) const;
          ::org::hipparchus::CalculusFieldElement value(jdouble, jdouble, const ::org::hipparchus::CalculusFieldElement &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace polynomials {
        extern PyType_Def PY_TYPE_DEF(SmoothStepFactory$FieldSmoothStepFunction);
        extern PyTypeObject *PY_TYPE(SmoothStepFactory$FieldSmoothStepFunction);

        class t_SmoothStepFactory$FieldSmoothStepFunction {
        public:
          PyObject_HEAD
          SmoothStepFactory$FieldSmoothStepFunction object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_SmoothStepFactory$FieldSmoothStepFunction *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const SmoothStepFactory$FieldSmoothStepFunction&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const SmoothStepFactory$FieldSmoothStepFunction&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
