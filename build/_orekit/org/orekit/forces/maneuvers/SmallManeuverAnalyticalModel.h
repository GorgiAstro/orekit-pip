#ifndef org_orekit_forces_maneuvers_SmallManeuverAnalyticalModel_H
#define org_orekit_forces_maneuvers_SmallManeuverAnalyticalModel_H

#include "java/lang/Object.h"

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
    namespace frames {
      class Frame;
    }
    namespace propagation {
      namespace analytical {
        class AdapterPropagator$DifferentialEffect;
      }
      class SpacecraftState;
    }
    namespace orbits {
      class Orbit;
      class PositionAngleType;
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

        class SmallManeuverAnalyticalModel : public ::java::lang::Object {
         public:
          enum {
            mid_init$_a311bc6b3c1a3e96,
            mid_init$_4efcb1680a960148,
            mid_apply_4500563ec80cd676,
            mid_apply_81fc6fb6078d2aa7,
            mid_getDate_aaa854c403487cf3,
            mid_getInertialDV_17a952530a808943,
            mid_getInertialFrame_c8fe21bcdac65bf6,
            mid_getJacobian_4388c4770d004546,
            mid_updateMass_0ba5fed9597b693e,
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
