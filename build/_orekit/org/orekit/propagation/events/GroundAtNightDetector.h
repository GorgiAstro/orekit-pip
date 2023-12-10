#ifndef org_orekit_propagation_events_GroundAtNightDetector_H
#define org_orekit_propagation_events_GroundAtNightDetector_H

#include "org/orekit/propagation/events/AbstractDetector.h"

namespace org {
  namespace orekit {
    namespace frames {
      class TopocentricFrame;
    }
    namespace propagation {
      class SpacecraftState;
      namespace events {
        class GroundAtNightDetector;
      }
    }
    namespace models {
      class AtmosphericRefractionModel;
    }
    namespace utils {
      class PVCoordinatesProvider;
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
      namespace events {

        class GroundAtNightDetector : public ::org::orekit::propagation::events::AbstractDetector {
         public:
          enum {
            mid_init$_575d478a4b5821ba,
            mid_g_66a2f071e6ed0c06,
            mid_create_2d23008c7e50057b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit GroundAtNightDetector(jobject obj) : ::org::orekit::propagation::events::AbstractDetector(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          GroundAtNightDetector(const GroundAtNightDetector& obj) : ::org::orekit::propagation::events::AbstractDetector(obj) {}

          static jdouble ASTRONOMICAL_DAWN_DUSK_ELEVATION;
          static jdouble CIVIL_DAWN_DUSK_ELEVATION;
          static jdouble NAUTICAL_DAWN_DUSK_ELEVATION;

          GroundAtNightDetector(const ::org::orekit::frames::TopocentricFrame &, const ::org::orekit::utils::PVCoordinatesProvider &, jdouble, const ::org::orekit::models::AtmosphericRefractionModel &);

          jdouble g(const ::org::orekit::propagation::SpacecraftState &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        extern PyType_Def PY_TYPE_DEF(GroundAtNightDetector);
        extern PyTypeObject *PY_TYPE(GroundAtNightDetector);

        class t_GroundAtNightDetector {
        public:
          PyObject_HEAD
          GroundAtNightDetector object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_GroundAtNightDetector *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const GroundAtNightDetector&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const GroundAtNightDetector&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif