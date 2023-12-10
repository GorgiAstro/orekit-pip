#ifndef org_hipparchus_ode_nonstiff_AdamsIntegrator_H
#define org_hipparchus_ode_nonstiff_AdamsIntegrator_H

#include "org/hipparchus/ode/MultistepIntegrator.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class Array2DRowRealMatrix;
    }
    namespace exception {
      class MathIllegalStateException;
      class MathIllegalArgumentException;
    }
    namespace ode {
      class ExpandableODE;
      class ODEState;
      class ODEStateAndDerivative;
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
            mid_init$_346aeec680764d4f,
            mid_init$_c3bfd79d1f705090,
            mid_integrate_7efcd57267e426c3,
            mid_updateHighOrderDerivativesPhase1_6bf0ab2b7bd27bc5,
            mid_updateHighOrderDerivativesPhase2_37b11fdf1f335fdb,
            mid_initializeHighOrderDerivatives_3307b1e87a2ed966,
            mid_errorEstimation_75ea1ed39c36d40d,
            mid_finalizeStep_dff8af8869f4d85a,
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
