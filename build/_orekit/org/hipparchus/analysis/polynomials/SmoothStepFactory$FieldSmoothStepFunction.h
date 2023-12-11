#ifndef org_hipparchus_analysis_polynomials_SmoothStepFactory$FieldSmoothStepFunction_H
#define org_hipparchus_analysis_polynomials_SmoothStepFactory$FieldSmoothStepFunction_H

#include "org/hipparchus/analysis/polynomials/FieldPolynomialFunction.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
    }
    class CalculusFieldElement;
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
            mid_value_94d37e81a3238af8,
            mid_value_6672ad854985cb64,
            mid_value_f6144a4a13723d33,
            mid_checkInputEdges_ab23f4ae0fb33968,
            mid_clampInput_f6144a4a13723d33,
            mid_normalizeInput_f6144a4a13723d33,
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
