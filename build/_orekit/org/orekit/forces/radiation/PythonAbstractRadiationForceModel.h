#ifndef org_orekit_forces_radiation_PythonAbstractRadiationForceModel_H
#define org_orekit_forces_radiation_PythonAbstractRadiationForceModel_H

#include "org/orekit/forces/radiation/AbstractRadiationForceModel.h"

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
    namespace time {
      class AbsoluteDate;
    }
    namespace bodies {
      class OneAxisEllipsoid;
    }
    namespace utils {
      class ExtendedPVCoordinatesProvider;
      class ParameterDriver;
    }
    namespace propagation {
      class FieldSpacecraftState;
      class SpacecraftState;
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

        class PythonAbstractRadiationForceModel : public ::org::orekit::forces::radiation::AbstractRadiationForceModel {
         public:
          enum {
            mid_init$_91e2420e47e6f11a,
            mid_acceleration_5e147f44c28a35c9,
            mid_acceleration_9816b8f76e94356a,
            mid_getParametersDrivers_d751c1a57012b438,
            mid_init_14deaae988292d42,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonAbstractRadiationForceModel(jobject obj) : ::org::orekit::forces::radiation::AbstractRadiationForceModel(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonAbstractRadiationForceModel(const PythonAbstractRadiationForceModel& obj) : ::org::orekit::forces::radiation::AbstractRadiationForceModel(obj) {}

          PythonAbstractRadiationForceModel(const ::org::orekit::utils::ExtendedPVCoordinatesProvider &, const ::org::orekit::bodies::OneAxisEllipsoid &);

          ::org::hipparchus::geometry::euclidean::threed::Vector3D acceleration(const ::org::orekit::propagation::SpacecraftState &, const JArray< jdouble > &) const;
          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D acceleration(const ::org::orekit::propagation::FieldSpacecraftState &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
          ::java::util::List getParametersDrivers() const;
          void init(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::time::AbsoluteDate &) const;
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
        extern PyType_Def PY_TYPE_DEF(PythonAbstractRadiationForceModel);
        extern PyTypeObject *PY_TYPE(PythonAbstractRadiationForceModel);

        class t_PythonAbstractRadiationForceModel {
        public:
          PyObject_HEAD
          PythonAbstractRadiationForceModel object;
          static PyObject *wrap_Object(const PythonAbstractRadiationForceModel&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
