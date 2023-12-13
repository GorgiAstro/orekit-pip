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
    namespace utils {
      class ExtendedPVCoordinatesProvider;
      class ParameterDriver;
    }
    namespace propagation {
      class FieldSpacecraftState;
      class SpacecraftState;
    }
    namespace time {
      class TimeScale;
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
            mid_init$_17d1d2d417a65389,
            mid_init$_b5f718a016936798,
            mid_acceleration_0ce449c67b5ffd9c,
            mid_acceleration_20bded0292328743,
            mid_dependsOnPositionOnly_9ab94ac1dc23b105,
            mid_getParametersDrivers_e62d3bb06d56d7e3,
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
