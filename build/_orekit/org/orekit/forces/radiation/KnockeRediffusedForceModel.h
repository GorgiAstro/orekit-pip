#ifndef org_orekit_forces_radiation_KnockeRediffusedForceModel_H
#define org_orekit_forces_radiation_KnockeRediffusedForceModel_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace radiation {
        class RadiationSensitive;
      }
      class ForceModel;
    }
    namespace propagation {
      class FieldSpacecraftState;
      class SpacecraftState;
    }
    namespace time {
      class TimeScale;
    }
    namespace utils {
      class ParameterDriver;
      class ExtendedPVCoordinatesProvider;
    }
  }
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
          class FieldVector3D;
        }
      }
    }
    class CalculusFieldElement;
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace forces {
      namespace radiation {

        class KnockeRediffusedForceModel : public ::java::lang::Object {
         public:
          enum {
            mid_init$_851a958453b23d38,
            mid_init$_533b7ae742ff5e8a,
            mid_acceleration_78989e44b99f7cc2,
            mid_acceleration_00aba28d3abe9a8c,
            mid_dependsOnPositionOnly_e470b6d9e0d979db,
            mid_getParametersDrivers_a6156df500549a58,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit KnockeRediffusedForceModel(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          KnockeRediffusedForceModel(const KnockeRediffusedForceModel& obj) : ::java::lang::Object(obj) {}

          KnockeRediffusedForceModel(const ::org::orekit::utils::ExtendedPVCoordinatesProvider &, const ::org::orekit::forces::radiation::RadiationSensitive &, jdouble, jdouble);
          KnockeRediffusedForceModel(const ::org::orekit::utils::ExtendedPVCoordinatesProvider &, const ::org::orekit::forces::radiation::RadiationSensitive &, jdouble, jdouble, const ::org::orekit::time::TimeScale &);

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D acceleration(const ::org::orekit::propagation::FieldSpacecraftState &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D acceleration(const ::org::orekit::propagation::SpacecraftState &, const JArray< jdouble > &) const;
          jboolean dependsOnPositionOnly() const;
          ::java::util::List getParametersDrivers() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace forces {
      namespace radiation {
        extern PyType_Def PY_TYPE_DEF(KnockeRediffusedForceModel);
        extern PyTypeObject *PY_TYPE(KnockeRediffusedForceModel);

        class t_KnockeRediffusedForceModel {
        public:
          PyObject_HEAD
          KnockeRediffusedForceModel object;
          static PyObject *wrap_Object(const KnockeRediffusedForceModel&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
