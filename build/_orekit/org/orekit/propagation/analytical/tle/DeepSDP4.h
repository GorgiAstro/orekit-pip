#ifndef org_orekit_propagation_analytical_tle_DeepSDP4_H
#define org_orekit_propagation_analytical_tle_DeepSDP4_H

#include "org/orekit/propagation/analytical/tle/SDP4.h"

namespace org {
  namespace orekit {
    namespace frames {
      class Frame;
    }
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace propagation {
      namespace analytical {
        namespace tle {
          class TLE;
        }
      }
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
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {

          class DeepSDP4 : public ::org::orekit::propagation::analytical::tle::SDP4 {
           public:
            enum {
              mid_init$_c15edfeff3b77424,
              mid_init$_2f68d31a9dcd927c,
              mid_luniSolarTermsComputation_0640e6acf969ed28,
              mid_deepSecularEffects_10f281d777284cea,
              mid_deepPeriodicEffects_10f281d777284cea,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DeepSDP4(jobject obj) : ::org::orekit::propagation::analytical::tle::SDP4(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DeepSDP4(const DeepSDP4& obj) : ::org::orekit::propagation::analytical::tle::SDP4(obj) {}

            DeepSDP4(const ::org::orekit::propagation::analytical::tle::TLE &, const ::org::orekit::attitudes::AttitudeProvider &, jdouble);
            DeepSDP4(const ::org::orekit::propagation::analytical::tle::TLE &, const ::org::orekit::attitudes::AttitudeProvider &, jdouble, const ::org::orekit::frames::Frame &);
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
          extern PyType_Def PY_TYPE_DEF(DeepSDP4);
          extern PyTypeObject *PY_TYPE(DeepSDP4);

          class t_DeepSDP4 {
          public:
            PyObject_HEAD
            DeepSDP4 object;
            static PyObject *wrap_Object(const DeepSDP4&);
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
