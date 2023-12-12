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
    namespace linear {
      class Array2DRowRealMatrix;
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
            mid_init$_4ea662c2602fc64a,
            mid_init$_3bb19a1b8982e276,
            mid_integrate_7b1e7ccc98e27149,
            mid_updateHighOrderDerivativesPhase1_f317c35d7d377fcb,
            mid_updateHighOrderDerivativesPhase2_8366e8011d6ccc43,
            mid_initializeHighOrderDerivatives_a72bdebc8d5fa5c2,
            mid_errorEstimation_e7930007697328a4,
            mid_finalizeStep_04cf5a46fd40d06d,
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
