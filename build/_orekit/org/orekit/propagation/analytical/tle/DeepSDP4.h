#ifndef org_orekit_propagation_analytical_tle_DeepSDP4_H
#define org_orekit_propagation_analytical_tle_DeepSDP4_H

#include "org/orekit/propagation/analytical/tle/SDP4.h"

namespace org {
  namespace orekit {
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
    namespace frames {
      class Frame;
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
              mid_init$_3c209839d9f7d817,
              mid_init$_8edece06f32cbd33,
              mid_luniSolarTermsComputation_7ae3461a92a43152,
              mid_deepSecularEffects_77e0f9a1f260e2e5,
              mid_deepPeriodicEffects_77e0f9a1f260e2e5,
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
