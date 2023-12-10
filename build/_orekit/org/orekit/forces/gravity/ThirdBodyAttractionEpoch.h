#ifndef org_orekit_forces_gravity_ThirdBodyAttractionEpoch_H
#define org_orekit_forces_gravity_ThirdBodyAttractionEpoch_H

#include "org/orekit/forces/gravity/ThirdBodyAttraction.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace bodies {
      class CelestialBody;
    }
    namespace propagation {
      class SpacecraftState;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {

        class ThirdBodyAttractionEpoch : public ::org::orekit::forces::gravity::ThirdBodyAttraction {
         public:
          enum {
            mid_init$_6a22a7b4e14949e4,
            mid_getDerivativesToEpoch_bfa7a0d11c0ebcbf,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ThirdBodyAttractionEpoch(jobject obj) : ::org::orekit::forces::gravity::ThirdBodyAttraction(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ThirdBodyAttractionEpoch(const ThirdBodyAttractionEpoch& obj) : ::org::orekit::forces::gravity::ThirdBodyAttraction(obj) {}

          ThirdBodyAttractionEpoch(const ::org::orekit::bodies::CelestialBody &);

          JArray< jdouble > getDerivativesToEpoch(const ::org::orekit::propagation::SpacecraftState &, const JArray< jdouble > &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        extern PyType_Def PY_TYPE_DEF(ThirdBodyAttractionEpoch);
        extern PyTypeObject *PY_TYPE(ThirdBodyAttractionEpoch);

        class t_ThirdBodyAttractionEpoch {
        public:
          PyObject_HEAD
          ThirdBodyAttractionEpoch object;
          static PyObject *wrap_Object(const ThirdBodyAttractionEpoch&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
