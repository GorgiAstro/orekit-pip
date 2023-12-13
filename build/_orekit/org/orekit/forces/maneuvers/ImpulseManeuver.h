#ifndef org_orekit_forces_maneuvers_ImpulseManeuver_H
#define org_orekit_forces_maneuvers_ImpulseManeuver_H

#include "org/orekit/propagation/events/AbstractDetector.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
        }
      }
    }
  }
  namespace orekit {
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace forces {
      namespace maneuvers {
        class Control3DVectorCostType;
        class ImpulseManeuver;
      }
    }
    namespace propagation {
      namespace events {
        class EventDetector;
      }
      class SpacecraftState;
    }
    namespace time {
      class AbsoluteDate;
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
            mid_init$_026e9c39f96053f1,
            mid_init$_438004526d4fc079,
            mid_init$_b94e00e001ca26d6,
            mid_g_a17ea857ce74d258,
            mid_getAttitudeOverride_331f12bb6017243b,
            mid_getControl3DVectorCostType_2eba60c257188b83,
            mid_getDeltaVSat_8b724f8b4fdad1a2,
            mid_getIsp_b74f83833fdad017,
            mid_getTrigger_9ada55f07f5a223c,
            mid_init_2d7f9a496c7e9781,
            mid_create_3a8f4feff9431f65,
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
