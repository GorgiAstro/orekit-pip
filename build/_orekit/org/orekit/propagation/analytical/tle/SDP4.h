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
              mid_sxpInitialize_ff7cb6c242604316,
              mid_sxpPropagate_1ad26e8c8c0cd65b,
              mid_luniSolarTermsComputation_ff7cb6c242604316,
              mid_deepSecularEffects_1ad26e8c8c0cd65b,
              mid_deepPeriodicEffects_1ad26e8c8c0cd65b,
              mid_thetaG_209f08246d708042,
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
