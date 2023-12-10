#ifndef org_orekit_forces_maneuvers_FieldImpulseManeuver_H
#define org_orekit_forces_maneuvers_FieldImpulseManeuver_H

#include "org/orekit/propagation/events/FieldAbstractDetector.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace propagation {
      namespace events {
        class FieldEventDetector;
      }
      class FieldSpacecraftState;
    }
    namespace forces {
      namespace maneuvers {
        class Control3DVectorCostType;
      }
    }
    namespace time {
      class FieldAbsoluteDate;
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
            mid_init$_51c66098ffd41132,
            mid_init$_7217c2ed7ac326fe,
            mid_init$_e08909fdaee52ce1,
            mid_g_cc79c2733879de35,
            mid_getAttitudeOverride_5cce95036ae870ba,
            mid_getControl3DVectorCostType_9fb96072e0d6dbf0,
            mid_getDeltaVSat_5791f80683b5227e,
            mid_getIsp_e6d4d3215c30992a,
            mid_getTrigger_9afb3f6694da2222,
            mid_init_acdd8180a5dc1a8d,
            mid_create_8c3de04b2e5d0bcb,
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
