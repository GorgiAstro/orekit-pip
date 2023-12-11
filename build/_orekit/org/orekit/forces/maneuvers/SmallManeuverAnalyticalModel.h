#ifndef org_orekit_forces_maneuvers_SmallManeuverAnalyticalModel_H
#define org_orekit_forces_maneuvers_SmallManeuverAnalyticalModel_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace orbits {
      class Orbit;
      class PositionAngleType;
    }
    namespace frames {
      class Frame;
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace propagation {
      namespace analytical {
        class AdapterPropagator$DifferentialEffect;
      }
      class SpacecraftState;
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
            mid_init$_76b1012746817507,
            mid_init$_5e6ac11ce0e39e22,
            mid_apply_f66341a46b0a495a,
            mid_apply_2c4cc16b11f79a6c,
            mid_getDate_7a97f7e149e79afb,
            mid_getInertialDV_f88961cca75a2c0a,
            mid_getInertialFrame_6c9bc0a928c56d4e,
            mid_getJacobian_032b4d4d2c7f6c6c,
            mid_updateMass_7e960cd6eee376d8,
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
