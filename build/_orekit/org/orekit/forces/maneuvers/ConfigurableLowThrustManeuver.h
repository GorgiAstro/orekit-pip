#ifndef org_orekit_forces_maneuvers_ConfigurableLowThrustManeuver_H
#define org_orekit_forces_maneuvers_ConfigurableLowThrustManeuver_H

#include "org/orekit/forces/maneuvers/Maneuver.h"

namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
    }
    namespace forces {
      namespace maneuvers {
        namespace propulsion {
          class ThrustDirectionAndAttitudeProvider;
        }
        namespace trigger {
          class ManeuverTriggers;
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
    namespace forces {
      namespace maneuvers {

        class ConfigurableLowThrustManeuver : public ::org::orekit::forces::maneuvers::Maneuver {
         public:
          enum {
            mid_init$_9f07a3a6f29a7aff,
            mid_getIsp_557b8123390d8d0c,
            mid_getIsp_b0b988f941da47d8,
            mid_getThrustDirectionProvider_8d737b557fa9f336,
            mid_getThrustMagnitude_557b8123390d8d0c,
            mid_getThrustMagnitude_b0b988f941da47d8,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ConfigurableLowThrustManeuver(jobject obj) : ::org::orekit::forces::maneuvers::Maneuver(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ConfigurableLowThrustManeuver(const ConfigurableLowThrustManeuver& obj) : ::org::orekit::forces::maneuvers::Maneuver(obj) {}

          ConfigurableLowThrustManeuver(const ::org::orekit::forces::maneuvers::propulsion::ThrustDirectionAndAttitudeProvider &, const ::org::orekit::forces::maneuvers::trigger::ManeuverTriggers &, jdouble, jdouble);

          jdouble getIsp() const;
          jdouble getIsp(const ::org::orekit::time::AbsoluteDate &) const;
          ::org::orekit::forces::maneuvers::propulsion::ThrustDirectionAndAttitudeProvider getThrustDirectionProvider() const;
          jdouble getThrustMagnitude() const;
          jdouble getThrustMagnitude(const ::org::orekit::time::AbsoluteDate &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        extern PyType_Def PY_TYPE_DEF(ConfigurableLowThrustManeuver);
        extern PyTypeObject *PY_TYPE(ConfigurableLowThrustManeuver);

        class t_ConfigurableLowThrustManeuver {
        public:
          PyObject_HEAD
          ConfigurableLowThrustManeuver object;
          static PyObject *wrap_Object(const ConfigurableLowThrustManeuver&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
