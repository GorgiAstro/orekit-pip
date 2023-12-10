#ifndef org_orekit_forces_maneuvers_FieldImpulseManeuver_H
#define org_orekit_forces_maneuvers_FieldImpulseManeuver_H

#include "org/orekit/propagation/events/FieldAbstractDetector.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldVector3D;
        }
      }
    }
  }
  namespace orekit {
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace propagation {
      class FieldSpacecraftState;
      namespace events {
        class FieldEventDetector;
      }
    }
    namespace time {
      class FieldAbsoluteDate;
    }
    namespace forces {
      namespace maneuvers {
        class Control3DVectorCostType;
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

        class FieldImpulseManeuver : public ::org::orekit::propagation::events::FieldAbstractDetector {
         public:
          enum {
            mid_init$_9fd07713d88b584d,
            mid_init$_2e00d63537056507,
            mid_init$_d7504c83b8d83efa,
            mid_g_41a008afe53da855,
            mid_getAttitudeOverride_a904f3d015a354a0,
            mid_getControl3DVectorCostType_67739b20d9566a8c,
            mid_getDeltaVSat_716f50c86ffc8da7,
            mid_getIsp_eba8e72a22c984ac,
            mid_getTrigger_4fe06ecc019ea51d,
            mid_init_8e8de2be1664674a,
            mid_create_fb23fbb396cac7fb,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldImpulseManeuver(jobject obj) : ::org::orekit::propagation::events::FieldAbstractDetector(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldImpulseManeuver(const FieldImpulseManeuver& obj) : ::org::orekit::propagation::events::FieldAbstractDetector(obj) {}

          FieldImpulseManeuver(const ::org::orekit::propagation::events::FieldEventDetector &, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &, const ::org::hipparchus::CalculusFieldElement &);
          FieldImpulseManeuver(const ::org::orekit::propagation::events::FieldEventDetector &, const ::org::orekit::attitudes::AttitudeProvider &, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &, const ::org::hipparchus::CalculusFieldElement &);
          FieldImpulseManeuver(const ::org::orekit::propagation::events::FieldEventDetector &, const ::org::orekit::attitudes::AttitudeProvider &, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &, const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::forces::maneuvers::Control3DVectorCostType &);

          ::org::hipparchus::CalculusFieldElement g(const ::org::orekit::propagation::FieldSpacecraftState &) const;
          ::org::orekit::attitudes::AttitudeProvider getAttitudeOverride() const;
          ::org::orekit::forces::maneuvers::Control3DVectorCostType getControl3DVectorCostType() const;
          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D getDeltaVSat() const;
          ::org::hipparchus::CalculusFieldElement getIsp() const;
          ::org::orekit::propagation::events::FieldEventDetector getTrigger() const;
          void init(const ::org::orekit::propagation::FieldSpacecraftState &, const ::org::orekit::time::FieldAbsoluteDate &) const;
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
        extern PyType_Def PY_TYPE_DEF(FieldImpulseManeuver);
        extern PyTypeObject *PY_TYPE(FieldImpulseManeuver);

        class t_FieldImpulseManeuver {
        public:
          PyObject_HEAD
          FieldImpulseManeuver object;
          PyTypeObject *parameters[2];
          static PyTypeObject **parameters_(t_FieldImpulseManeuver *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldImpulseManeuver&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldImpulseManeuver&, PyTypeObject *, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
