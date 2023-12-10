#ifndef org_orekit_forces_gravity_ThirdBodyAttractionEpoch_H
#define org_orekit_forces_gravity_ThirdBodyAttractionEpoch_H

#include "org/orekit/forces/gravity/ThirdBodyAttraction.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class SpacecraftState;
    }
    namespace bodies {
      class CelestialBody;
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
    namespace forces {
      namespace gravity {

        class ThirdBodyAttractionEpoch : public ::org::orekit::forces::gravity::ThirdBodyAttraction {
         public:
          enum {
            mid_init$_245df9da6b035d3e,
            mid_getDerivativesToEpoch_61fa92292630f739,
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
