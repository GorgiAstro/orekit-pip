#ifndef org_orekit_propagation_analytical_tle_SDP4_H
#define org_orekit_propagation_analytical_tle_SDP4_H

#include "org/orekit/propagation/analytical/tle/TLEPropagator.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {

          class SDP4 : public ::org::orekit::propagation::analytical::tle::TLEPropagator {
           public:
            enum {
              mid_sxpInitialize_7ae3461a92a43152,
              mid_sxpPropagate_77e0f9a1f260e2e5,
              mid_luniSolarTermsComputation_7ae3461a92a43152,
              mid_deepSecularEffects_77e0f9a1f260e2e5,
              mid_deepPeriodicEffects_77e0f9a1f260e2e5,
              mid_thetaG_e912d21057defe63,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SDP4(jobject obj) : ::org::orekit::propagation::analytical::tle::TLEPropagator(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SDP4(const SDP4& obj) : ::org::orekit::propagation::analytical::tle::TLEPropagator(obj) {}
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {
          extern PyType_Def PY_TYPE_DEF(SDP4);
          extern PyTypeObject *PY_TYPE(SDP4);

          class t_SDP4 {
          public:
            PyObject_HEAD
            SDP4 object;
            static PyObject *wrap_Object(const SDP4&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
