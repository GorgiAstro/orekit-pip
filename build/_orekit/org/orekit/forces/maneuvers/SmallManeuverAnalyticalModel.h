#ifndef org_orekit_forces_maneuvers_SmallManeuverAnalyticalModel_H
#define org_orekit_forces_maneuvers_SmallManeuverAnalyticalModel_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        class AdapterPropagator$DifferentialEffect;
      }
      class SpacecraftState;
    }
    namespace orbits {
      class PositionAngleType;
      class Orbit;
    }
    namespace frames {
      class Frame;
    }
    namespace time {
      class AbsoluteDate;
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

        class SmallManeuverAnalyticalModel : public ::java::lang::Object {
         public:
          enum {
            mid_init$_2a6db53d6def3a34,
            mid_init$_665410d4e1a3356f,
            mid_apply_58efaeb159657907,
            mid_apply_f43130c50e9fafeb,
            mid_getDate_85703d13e302437e,
            mid_getInertialDV_d52645e0d4c07563,
            mid_getInertialFrame_b86f9f61d97a7244,
            mid_getJacobian_0743f2f4f7f34cc1,
            mid_updateMass_dcbc7ce2902fa136,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SmallManeuverAnalyticalModel(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SmallManeuverAnalyticalModel(const SmallManeuverAnalyticalModel& obj) : ::java::lang::Object(obj) {}

          SmallManeuverAnalyticalModel(const ::org::orekit::propagation::SpacecraftState &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, jdouble);
          SmallManeuverAnalyticalModel(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::frames::Frame &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, jdouble);

          ::org::orekit::orbits::Orbit apply(const ::org::orekit::orbits::Orbit &) const;
          ::org::orekit::propagation::SpacecraftState apply(const ::org::orekit::propagation::SpacecraftState &) const;
          ::org::orekit::time::AbsoluteDate getDate() const;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D getInertialDV() const;
          ::org::orekit::frames::Frame getInertialFrame() const;
          void getJacobian(const ::org::orekit::orbits::Orbit &, const ::org::orekit::orbits::PositionAngleType &, const JArray< JArray< jdouble > > &) const;
          jdouble updateMass(jdouble) const;
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
        extern PyType_Def PY_TYPE_DEF(SmallManeuverAnalyticalModel);
        extern PyTypeObject *PY_TYPE(SmallManeuverAnalyticalModel);

        class t_SmallManeuverAnalyticalModel {
        public:
          PyObject_HEAD
          SmallManeuverAnalyticalModel object;
          static PyObject *wrap_Object(const SmallManeuverAnalyticalModel&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
