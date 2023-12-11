#ifndef org_orekit_forces_radiation_ECOM2_H
#define org_orekit_forces_radiation_ECOM2_H

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
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace forces {
      namespace radiation {

        class ECOM2 : public ::org::orekit::forces::radiation::AbstractRadiationForceModel {
         public:
          enum {
            mid_init$_ffb568c54ba36991,
            mid_acceleration_61944e27a39e8290,
            mid_acceleration_b61fb59a041240c6,
            mid_getParametersDrivers_0d9551367f7ecdef,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ECOM2(jobject obj) : ::org::orekit::forces::radiation::AbstractRadiationForceModel(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ECOM2(const ECOM2& obj) : ::org::orekit::forces::radiation::AbstractRadiationForceModel(obj) {}

          static ::java::lang::String *ECOM_COEFFICIENT;

          ECOM2(jint, jint, jdouble, const ::org::orekit::utils::ExtendedPVCoordinatesProvider &, jdouble);

          ::org::hipparchus::geometry::euclidean::threed::Vector3D acceleration(const ::org::orekit::propagation::SpacecraftState &, const JArray< jdouble > &) const;
          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D acceleration(const ::org::orekit::propagation::FieldSpacecraftState &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
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
        extern PyType_Def PY_TYPE_DEF(ECOM2);
        extern PyTypeObject *PY_TYPE(ECOM2);

        class t_ECOM2 {
        public:
          PyObject_HEAD
          ECOM2 object;
          static PyObject *wrap_Object(const ECOM2&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
