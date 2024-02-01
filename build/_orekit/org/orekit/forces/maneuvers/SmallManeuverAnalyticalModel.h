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
    namespace time {
      class AbsoluteDate;
    }
    namespace orbits {
      class PositionAngleType;
      class Orbit;
    }
    namespace frames {
      class Frame;
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
            mid_init$_fe3090c0b7345882,
            mid_init$_22f6985b50c2c195,
            mid_apply_940029672edd5e92,
            mid_apply_ed3fe207e6fde26f,
            mid_getDate_80e11148db499dda,
            mid_getInertialDV_032312bdeb3f2f93,
            mid_getInertialFrame_cb151471db4570f0,
            mid_getJacobian_a1b05c4f70bfe6cc,
            mid_updateMass_bf28ed64d6e8576b,
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
