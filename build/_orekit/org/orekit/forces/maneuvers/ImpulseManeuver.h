#ifndef org_orekit_forces_maneuvers_ImpulseManeuver_H
#define org_orekit_forces_maneuvers_ImpulseManeuver_H

#include "org/orekit/propagation/events/AbstractDetector.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        class EventDetector;
      }
      class SpacecraftState;
    }
    namespace forces {
      namespace maneuvers {
        class ImpulseManeuver;
        class Control3DVectorCostType;
      }
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace attitudes {
      class AttitudeProvider;
    }
  }
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
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

        class ImpulseManeuver : public ::org::orekit::propagation::events::AbstractDetector {
         public:
          enum {
            mid_init$_a72590358f93cd86,
            mid_init$_63188daf92eb3db6,
            mid_init$_165edace01f52664,
            mid_g_1bbf81d80c47ecdd,
            mid_getAttitudeOverride_6df6b78ab9377151,
            mid_getControl3DVectorCostType_601f05e5d0c82ad9,
            mid_getDeltaVSat_f88961cca75a2c0a,
            mid_getIsp_557b8123390d8d0c,
            mid_getTrigger_0701b00b25822fff,
            mid_init_0472264ad6f40bc2,
            mid_create_3ed87803c90c6b84,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ImpulseManeuver(jobject obj) : ::org::orekit::propagation::events::AbstractDetector(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ImpulseManeuver(const ImpulseManeuver& obj) : ::org::orekit::propagation::events::AbstractDetector(obj) {}

          ImpulseManeuver(const ::org::orekit::propagation::events::EventDetector &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, jdouble);
          ImpulseManeuver(const ::org::orekit::propagation::events::EventDetector &, const ::org::orekit::attitudes::AttitudeProvider &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, jdouble);
          ImpulseManeuver(const ::org::orekit::propagation::events::EventDetector &, const ::org::orekit::attitudes::AttitudeProvider &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, jdouble, const ::org::orekit::forces::maneuvers::Control3DVectorCostType &);

          jdouble g(const ::org::orekit::propagation::SpacecraftState &) const;
          ::org::orekit::attitudes::AttitudeProvider getAttitudeOverride() const;
          ::org::orekit::forces::maneuvers::Control3DVectorCostType getControl3DVectorCostType() const;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D getDeltaVSat() const;
          jdouble getIsp() const;
          ::org::orekit::propagation::events::EventDetector getTrigger() const;
          void init(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::time::AbsoluteDate &) const;
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
        extern PyType_Def PY_TYPE_DEF(ImpulseManeuver);
        extern PyTypeObject *PY_TYPE(ImpulseManeuver);

        class t_ImpulseManeuver {
        public:
          PyObject_HEAD
          ImpulseManeuver object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_ImpulseManeuver *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const ImpulseManeuver&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const ImpulseManeuver&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
