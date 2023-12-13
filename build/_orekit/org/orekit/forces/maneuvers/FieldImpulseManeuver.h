#ifndef org_orekit_forces_maneuvers_FieldImpulseManeuver_H
#define org_orekit_forces_maneuvers_FieldImpulseManeuver_H

#include "org/orekit/propagation/events/FieldAbstractDetector.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace time {
      class FieldAbsoluteDate;
    }
    namespace forces {
      namespace maneuvers {
        class Control3DVectorCostType;
      }
    }
    namespace propagation {
      namespace events {
        class FieldEventDetector;
      }
      class FieldSpacecraftState;
    }
  }
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldVector3D;
        }
      }
    }
    class CalculusFieldElement;
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
            mid_init$_2fe057877dc3cacd,
            mid_init$_00e409c52b5011bd,
            mid_init$_5fa6baf09859d34e,
            mid_g_2203631097e94c79,
            mid_getAttitudeOverride_331f12bb6017243b,
            mid_getControl3DVectorCostType_2eba60c257188b83,
            mid_getDeltaVSat_ff5ac73a7b43eddd,
            mid_getIsp_81520b552cb3fa26,
            mid_getTrigger_e78af9d734a5fbe1,
            mid_init_96d019f392abf918,
            mid_create_353131f514daeb58,
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
