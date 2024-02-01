#ifndef org_orekit_forces_maneuvers_ImpulseManeuver_H
#define org_orekit_forces_maneuvers_ImpulseManeuver_H

#include "org/orekit/propagation/events/AbstractDetector.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace forces {
      namespace maneuvers {
        class ImpulseManeuver;
        class Control3DVectorCostType;
      }
    }
    namespace propagation {
      class SpacecraftState;
      namespace events {
        class EventDetector;
      }
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
            mid_init$_a8adba5582913c96,
            mid_init$_2de4d267593a16a3,
            mid_init$_922c32c6eebbf23a,
            mid_g_b443ba1cc794b916,
            mid_getAttitudeOverride_2f73d1f4460b8d6c,
            mid_getControl3DVectorCostType_fc9abda16ef946e0,
            mid_getDeltaVSat_032312bdeb3f2f93,
            mid_getIsp_9981f74b2d109da6,
            mid_getTrigger_ebd847a60689999d,
            mid_init_14deaae988292d42,
            mid_create_1ad29cd39384bfba,
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
