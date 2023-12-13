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
    namespace frames {
      class Frame;
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
            mid_init$_c2b83dc7e69685f6,
            mid_init$_db76597cf6e043f6,
            mid_apply_17366d6f28f0e9a3,
            mid_apply_c3c52b1257139045,
            mid_getDate_c325492395d89b24,
            mid_getInertialDV_8b724f8b4fdad1a2,
            mid_getInertialFrame_2c51111cc6894ba1,
            mid_getJacobian_c444daada41664f4,
            mid_updateMass_04fd0666b613d2ab,
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
