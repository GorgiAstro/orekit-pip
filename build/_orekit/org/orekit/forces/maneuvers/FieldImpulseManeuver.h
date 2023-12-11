#ifndef org_orekit_forces_maneuvers_FieldImpulseManeuver_H
#define org_orekit_forces_maneuvers_FieldImpulseManeuver_H

#include "org/orekit/propagation/events/FieldAbstractDetector.h"

namespace org {
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
  namespace orekit {
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
    namespace attitudes {
      class AttitudeProvider;
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
            mid_init$_25d58fd2710268d2,
            mid_init$_baf08257bec4be06,
            mid_init$_51dd9d9720025d56,
            mid_g_de1c2d709eb2829c,
            mid_getAttitudeOverride_6df6b78ab9377151,
            mid_getControl3DVectorCostType_601f05e5d0c82ad9,
            mid_getDeltaVSat_2d64addf4c3391d9,
            mid_getIsp_613c8f46c659f636,
            mid_getTrigger_07d9256595c42b86,
            mid_init_811e49dad2467b67,
            mid_create_0258ce74068cec70,
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
