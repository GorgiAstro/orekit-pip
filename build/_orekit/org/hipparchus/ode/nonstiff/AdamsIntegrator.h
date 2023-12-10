#ifndef org_hipparchus_ode_nonstiff_AdamsIntegrator_H
#define org_hipparchus_ode_nonstiff_AdamsIntegrator_H

#include "org/hipparchus/ode/MultistepIntegrator.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalStateException;
      class MathIllegalArgumentException;
    }
    namespace ode {
      class ODEState;
      class ExpandableODE;
      class ODEStateAndDerivative;
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
            mid_init$_e116bf0bc4dbdd71,
            mid_init$_1cc92cea9850434d,
            mid_integrate_3c1cc820e563e3e9,
            mid_updateHighOrderDerivativesPhase1_98f76adeb9727d30,
            mid_updateHighOrderDerivativesPhase2_a5e518d6a6618759,
            mid_initializeHighOrderDerivatives_05286ba32ad1612e,
            mid_errorEstimation_292da48f87a5db99,
            mid_finalizeStep_07f673992ff5deaf,
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
