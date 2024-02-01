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
    namespace time {
      class FieldAbsoluteDate;
    }
    namespace forces {
      namespace maneuvers {
        class Control3DVectorCostType;
      }
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
            mid_init$_c90a3213a1e71249,
            mid_init$_719b627d41a71039,
            mid_init$_687234d408d4818f,
            mid_g_ac6fccc69d1b2d9e,
            mid_getAttitudeOverride_2f73d1f4460b8d6c,
            mid_getControl3DVectorCostType_fc9abda16ef946e0,
            mid_getDeltaVSat_d1b42a6748e907f9,
            mid_getIsp_08d37e3f77b7239d,
            mid_getTrigger_3146cd1129cf853c,
            mid_init_357211ab77703f3f,
            mid_create_7bc6fd9145d32828,
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
