#ifndef org_hipparchus_ode_nonstiff_GraggBulirschStoerIntegrator_H
#define org_hipparchus_ode_nonstiff_GraggBulirschStoerIntegrator_H

#include "org/hipparchus/ode/nonstiff/AdaptiveStepsizeIntegrator.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      class ODEStateAndDerivative;
      class ODEState;
      class ExpandableODE;
    }
    namespace exception {
      class MathIllegalStateException;
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
    namespace ode {
      namespace nonstiff {

        class GraggBulirschStoerIntegrator : public ::org::hipparchus::ode::nonstiff::AdaptiveStepsizeIntegrator {
         public:
          enum {
            mid_init$_aa31b8b89ee72c31,
            mid_init$_49f4b5153d696ea5,
            mid_integrate_8cb4bf2a0c64fd92,
            mid_setControlFactors_49f4b5153d696ea5,
            mid_setInterpolationControl_0c3d2833aead47e0,
            mid_setOrderControl_cdd9dee35d124091,
            mid_setStabilityCheck_b80334b524dca5c8,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit GraggBulirschStoerIntegrator(jobject obj) : ::org::hipparchus::ode::nonstiff::AdaptiveStepsizeIntegrator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          GraggBulirschStoerIntegrator(const GraggBulirschStoerIntegrator& obj) : ::org::hipparchus::ode::nonstiff::AdaptiveStepsizeIntegrator(obj) {}

          GraggBulirschStoerIntegrator(jdouble, jdouble, const JArray< jdouble > &, const JArray< jdouble > &);
          GraggBulirschStoerIntegrator(jdouble, jdouble, jdouble, jdouble);

          ::org::hipparchus::ode::ODEStateAndDerivative integrate(const ::org::hipparchus::ode::ExpandableODE &, const ::org::hipparchus::ode::ODEState &, jdouble) const;
          void setControlFactors(jdouble, jdouble, jdouble, jdouble) const;
          void setInterpolationControl(jboolean, jint) const;
          void setOrderControl(jint, jdouble, jdouble) const;
          void setStabilityCheck(jboolean, jint, jint, jdouble) const;
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
        extern PyType_Def PY_TYPE_DEF(GraggBulirschStoerIntegrator);
        extern PyTypeObject *PY_TYPE(GraggBulirschStoerIntegrator);

        class t_GraggBulirschStoerIntegrator {
        public:
          PyObject_HEAD
          GraggBulirschStoerIntegrator object;
          static PyObject *wrap_Object(const GraggBulirschStoerIntegrator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
