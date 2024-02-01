#ifndef org_orekit_propagation_analytical_tle_SGP4_H
#define org_orekit_propagation_analytical_tle_SGP4_H

#include "org/orekit/propagation/analytical/tle/TLEPropagator.h"

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

          class SGP4 : public ::org::orekit::propagation::analytical::tle::TLEPropagator {
           public:
            enum {
              mid_init$_40bdc63bf602b2a8,
              mid_init$_877f7a4f81da784a,
              mid_sxpInitialize_ff7cb6c242604316,
              mid_sxpPropagate_1ad26e8c8c0cd65b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SGP4(jobject obj) : ::org::orekit::propagation::analytical::tle::TLEPropagator(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SGP4(const SGP4& obj) : ::org::orekit::propagation::analytical::tle::TLEPropagator(obj) {}

            SGP4(const ::org::orekit::propagation::analytical::tle::TLE &, const ::org::orekit::attitudes::AttitudeProvider &, jdouble);
            SGP4(const ::org::orekit::propagation::analytical::tle::TLE &, const ::org::orekit::attitudes::AttitudeProvider &, jdouble, const ::org::orekit::frames::Frame &);
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
          extern PyType_Def PY_TYPE_DEF(SGP4);
          extern PyTypeObject *PY_TYPE(SGP4);

          class t_SGP4 {
          public:
            PyObject_HEAD
            SGP4 object;
            static PyObject *wrap_Object(const SGP4&);
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
