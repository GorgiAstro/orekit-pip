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
    namespace propagation {
      class FieldSpacecraftState;
      class SpacecraftState;
    }
    namespace utils {
      class ExtendedPVCoordinatesProvider;
      class ParameterDriver;
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace bodies {
      class OneAxisEllipsoid;
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
            mid_init$_5bb199e2d18c144d,
            mid_acceleration_b61fb59a041240c6,
            mid_acceleration_61944e27a39e8290,
            mid_getParametersDrivers_0d9551367f7ecdef,
            mid_init_0472264ad6f40bc2,
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

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D acceleration(const ::org::orekit::propagation::FieldSpacecraftState &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D acceleration(const ::org::orekit::propagation::SpacecraftState &, const JArray< jdouble > &) const;
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
