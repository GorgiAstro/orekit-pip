#ifndef org_orekit_propagation_analytical_tle_DeepSDP4_H
#define org_orekit_propagation_analytical_tle_DeepSDP4_H

#include "org/orekit/propagation/analytical/tle/SDP4.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace frames {
      class Frame;
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
              mid_init$_40bdc63bf602b2a8,
              mid_init$_877f7a4f81da784a,
              mid_luniSolarTermsComputation_ff7cb6c242604316,
              mid_deepSecularEffects_1ad26e8c8c0cd65b,
              mid_deepPeriodicEffects_1ad26e8c8c0cd65b,
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
