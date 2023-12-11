#ifndef org_orekit_forces_radiation_KnockeRediffusedForceModel_H
#define org_orekit_forces_radiation_KnockeRediffusedForceModel_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldVector3D;
          class Vector3D;
        }
      }
    }
    class CalculusFieldElement;
  }
  namespace orekit {
    namespace propagation {
      class FieldSpacecraftState;
      class SpacecraftState;
    }
    namespace utils {
      class ExtendedPVCoordinatesProvider;
      class ParameterDriver;
    }
    namespace forces {
      namespace radiation {
        class RadiationSensitive;
      }
      class ForceModel;
    }
    namespace time {
      class TimeScale;
    }
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
            mid_init$_b3ce614b41810081,
            mid_init$_f4b89d7b0b613b35,
            mid_acceleration_61944e27a39e8290,
            mid_acceleration_b61fb59a041240c6,
            mid_dependsOnPositionOnly_89b302893bdbe1f1,
            mid_getParametersDrivers_0d9551367f7ecdef,
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

          ::org::hipparchus::geometry::euclidean::threed::Vector3D acceleration(const ::org::orekit::propagation::SpacecraftState &, const JArray< jdouble > &) const;
          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D acceleration(const ::org::orekit::propagation::FieldSpacecraftState &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
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
