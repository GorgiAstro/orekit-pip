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
    namespace time {
      class AbsoluteDate;
    }
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace forces {
      namespace maneuvers {
        class Control3DVectorCostType;
        class ImpulseManeuver;
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
            mid_init$_33ff2531f6afe54b,
            mid_init$_6e35dd1e707d55ce,
            mid_init$_d5a1eb9188b4db60,
            mid_g_432f3d328c15ec82,
            mid_getAttitudeOverride_a904f3d015a354a0,
            mid_getControl3DVectorCostType_67739b20d9566a8c,
            mid_getDeltaVSat_d52645e0d4c07563,
            mid_getIsp_dff5885c2c873297,
            mid_getTrigger_d73bb985ffde4156,
            mid_init_826b4eda94da4e78,
            mid_create_6b5d818a71042d92,
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
