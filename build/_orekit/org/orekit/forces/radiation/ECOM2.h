#ifndef org_orekit_forces_radiation_ECOM2_H
#define org_orekit_forces_radiation_ECOM2_H

#include "org/orekit/forces/radiation/AbstractRadiationForceModel.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldVector3D;
          class Vector3D;
        }
      }
    }
  }
  namespace orekit {
    namespace propagation {
      class FieldSpacecraftState;
      class SpacecraftState;
    }
    namespace utils {
      class ParameterDriver;
      class ExtendedPVCoordinatesProvider;
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
            mid_init$_889cc26bb5fea56c,
            mid_acceleration_b42ac4b5bfb80fab,
            mid_acceleration_8954761face5e1a7,
            mid_getParametersDrivers_2afa36052df4765d,
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

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D acceleration(const ::org::orekit::propagation::FieldSpacecraftState &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D acceleration(const ::org::orekit::propagation::SpacecraftState &, const JArray< jdouble > &) const;
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
