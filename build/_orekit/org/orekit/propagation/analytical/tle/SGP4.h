#ifndef org_orekit_propagation_analytical_tle_SGP4_H
#define org_orekit_propagation_analytical_tle_SGP4_H

#include "org/orekit/propagation/analytical/tle/TLEPropagator.h"

namespace org {
  namespace orekit {
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
    namespace attitudes {
      class AttitudeProvider;
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
              mid_init$_11c826170d15cb79,
              mid_init$_2709a562b7f01856,
              mid_sxpInitialize_0fa09c18fee449d5,
              mid_sxpPropagate_17db3a65980d3441,
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
