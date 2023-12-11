#ifndef org_orekit_propagation_conversion_EcksteinHechlerPropagatorBuilder_H
#define org_orekit_propagation_conversion_EcksteinHechlerPropagatorBuilder_H

#include "org/orekit/propagation/conversion/AbstractPropagatorBuilder.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {
        class PropagatorBuilder;
        class EcksteinHechlerPropagatorBuilder;
      }
      class Propagator;
    }
    namespace estimation {
      namespace leastsquares {
        class ModelObserver;
        class AbstractBatchLSModel;
      }
      namespace measurements {
        class ObservedMeasurement;
      }
    }
    namespace forces {
      namespace gravity {
        namespace potential {
          class UnnormalizedSphericalHarmonicsProvider;
          class TideSystem;
        }
      }
    }
    namespace utils {
      class ParameterDriversList;
    }
    namespace orbits {
      class PositionAngleType;
      class OrbitType;
      class Orbit;
    }
    namespace attitudes {
      class AttitudeProvider;
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
    class Object;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        class EcksteinHechlerPropagatorBuilder : public ::org::orekit::propagation::conversion::AbstractPropagatorBuilder {
         public:
          enum {
            mid_init$_23f5f76d05add5ec,
            mid_init$_cae68c54ce4b2fd0,
            mid_init$_4075f501d5fbb493,
            mid_buildLeastSquaresModel_4fca41eef9d750a6,
            mid_buildPropagator_5ad9cbd11735eecd,
            mid_copy_8997f3f06dd892ce,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit EcksteinHechlerPropagatorBuilder(jobject obj) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          EcksteinHechlerPropagatorBuilder(const EcksteinHechlerPropagatorBuilder& obj) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(obj) {}

          EcksteinHechlerPropagatorBuilder(const ::org::orekit::orbits::Orbit &, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider &, const ::org::orekit::orbits::PositionAngleType &, jdouble);
          EcksteinHechlerPropagatorBuilder(const ::org::orekit::orbits::Orbit &, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider &, const ::org::orekit::orbits::PositionAngleType &, jdouble, const ::org::orekit::attitudes::AttitudeProvider &);
          EcksteinHechlerPropagatorBuilder(const ::org::orekit::orbits::Orbit &, jdouble, jdouble, const ::org::orekit::forces::gravity::potential::TideSystem &, jdouble, jdouble, jdouble, jdouble, jdouble, const ::org::orekit::orbits::OrbitType &, const ::org::orekit::orbits::PositionAngleType &, jdouble);

          ::org::orekit::estimation::leastsquares::AbstractBatchLSModel buildLeastSquaresModel(const JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > &, const ::java::util::List &, const ::org::orekit::utils::ParameterDriversList &, const ::org::orekit::estimation::leastsquares::ModelObserver &) const;
          ::org::orekit::propagation::Propagator buildPropagator(const JArray< jdouble > &) const;
          EcksteinHechlerPropagatorBuilder copy() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {
        extern PyType_Def PY_TYPE_DEF(EcksteinHechlerPropagatorBuilder);
        extern PyTypeObject *PY_TYPE(EcksteinHechlerPropagatorBuilder);

        class t_EcksteinHechlerPropagatorBuilder {
        public:
          PyObject_HEAD
          EcksteinHechlerPropagatorBuilder object;
          static PyObject *wrap_Object(const EcksteinHechlerPropagatorBuilder&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
