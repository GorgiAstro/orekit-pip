#ifndef org_hipparchus_ode_nonstiff_AdamsIntegrator_H
#define org_hipparchus_ode_nonstiff_AdamsIntegrator_H

#include "org/hipparchus/ode/MultistepIntegrator.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      class ODEState;
      class ExpandableODE;
      class ODEStateAndDerivative;
    }
    namespace exception {
      class MathIllegalArgumentException;
      class MathIllegalStateException;
    }
    namespace linear {
      class Array2DRowRealMatrix;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class IllegalArgumentException;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        class AdamsIntegrator : public ::org::hipparchus::ode::MultistepIntegrator {
         public:
          enum {
            mid_init$_b5131bdc677927a0,
            mid_init$_11caa83b13f15278,
            mid_integrate_3b00c059d3ccb86d,
            mid_updateHighOrderDerivativesPhase1_afbfc3ddbfe58d51,
            mid_updateHighOrderDerivativesPhase2_e958729b32219ba2,
            mid_initializeHighOrderDerivatives_7145db39e893543c,
            mid_errorEstimation_37b70b019b7ede26,
            mid_finalizeStep_26e1f9270ed9200b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AdamsIntegrator(jobject obj) : ::org::hipparchus::ode::MultistepIntegrator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AdamsIntegrator(const AdamsIntegrator& obj) : ::org::hipparchus::ode::MultistepIntegrator(obj) {}

          AdamsIntegrator(const ::java::lang::String &, jint, jint, jdouble, jdouble, const JArray< jdouble > &, const JArray< jdouble > &);
          AdamsIntegrator(const ::java::lang::String &, jint, jint, jdouble, jdouble, jdouble, jdouble);

          ::org::hipparchus::ode::ODEStateAndDerivative integrate(const ::org::hipparchus::ode::ExpandableODE &, const ::org::hipparchus::ode::ODEState &, jdouble) const;
          ::org::hipparchus::linear::Array2DRowRealMatrix updateHighOrderDerivativesPhase1(const ::org::hipparchus::linear::Array2DRowRealMatrix &) const;
          void updateHighOrderDerivativesPhase2(const JArray< jdouble > &, const JArray< jdouble > &, const ::org::hipparchus::linear::Array2DRowRealMatrix &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {
        extern PyType_Def PY_TYPE_DEF(AdamsIntegrator);
        extern PyTypeObject *PY_TYPE(AdamsIntegrator);

        class t_AdamsIntegrator {
        public:
          PyObject_HEAD
          AdamsIntegrator object;
          static PyObject *wrap_Object(const AdamsIntegrator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
