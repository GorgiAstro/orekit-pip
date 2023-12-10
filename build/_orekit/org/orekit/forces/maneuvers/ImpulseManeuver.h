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
      class SpacecraftState;
      namespace events {
        class EventDetector;
      }
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
            mid_init$_cf7d4e015d41ac43,
            mid_init$_2ac32a31b9007a99,
            mid_init$_381dc84b05429e3b,
            mid_g_66a2f071e6ed0c06,
            mid_getAttitudeOverride_5cce95036ae870ba,
            mid_getControl3DVectorCostType_9fb96072e0d6dbf0,
            mid_getDeltaVSat_17a952530a808943,
            mid_getIsp_456d9a2f64d6b28d,
            mid_getTrigger_27b528e7858202ed,
            mid_init_3d13474d79f5e7bc,
            mid_create_a1dca21c41aedd19,
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
