#ifndef org_hipparchus_ode_nonstiff_AdamsIntegrator_H
#define org_hipparchus_ode_nonstiff_AdamsIntegrator_H

#include "org/hipparchus/ode/MultistepIntegrator.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class Array2DRowRealMatrix;
    }
    namespace ode {
      class ODEStateAndDerivative;
      class ODEState;
      class ExpandableODE;
    }
    namespace exception {
      class MathIllegalArgumentException;
      class MathIllegalStateException;
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
            mid_init$_134c07106b4f374f,
            mid_init$_b596f7b71fee7a1d,
            mid_integrate_8cb4bf2a0c64fd92,
            mid_updateHighOrderDerivativesPhase1_f7e2a664bf09ba0b,
            mid_updateHighOrderDerivativesPhase2_6416fb10fa003d60,
            mid_errorEstimation_68d979ce0da3570a,
            mid_finalizeStep_a753e4b9b86b52dc,
            mid_initializeHighOrderDerivatives_0830b1db869546c8,
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
