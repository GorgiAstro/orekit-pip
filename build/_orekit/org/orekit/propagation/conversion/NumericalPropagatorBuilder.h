#ifndef org_orekit_propagation_conversion_NumericalPropagatorBuilder_H
#define org_orekit_propagation_conversion_NumericalPropagatorBuilder_H

#include "org/orekit/propagation/conversion/AbstractPropagatorBuilder.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {
        class PropagatorBuilder;
        class ODEIntegratorBuilder;
        class NumericalPropagatorBuilder;
      }
      namespace numerical {
        class NumericalPropagator;
      }
    }
    namespace estimation {
      namespace leastsquares {
        class ModelObserver;
        class BatchLSModel;
      }
      namespace measurements {
        class ObservedMeasurement;
      }
    }
    namespace utils {
      class ParameterDriversList;
    }
    namespace orbits {
      class PositionAngleType;
      class Orbit;
    }
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace forces {
      class ForceModel;
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

        class NumericalPropagatorBuilder : public ::org::orekit::propagation::conversion::AbstractPropagatorBuilder {
         public:
          enum {
            mid_init$_bccbb305e30915b7,
            mid_init$_824eb692ea2beac4,
            mid_addForceModel_e37f41a34246ae45,
            mid_buildLeastSquaresModel_f4d4f95fc5d13a77,
            mid_buildPropagator_92d6d5df6414e998,
            mid_copy_abb2afb1dd55a9aa,
            mid_getAllForceModels_0d9551367f7ecdef,
            mid_getIntegratorBuilder_4785d50855609363,
            mid_getMass_557b8123390d8d0c,
            mid_setMass_10f281d777284cea,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit NumericalPropagatorBuilder(jobject obj) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          NumericalPropagatorBuilder(const NumericalPropagatorBuilder& obj) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(obj) {}

          NumericalPropagatorBuilder(const ::org::orekit::orbits::Orbit &, const ::org::orekit::propagation::conversion::ODEIntegratorBuilder &, const ::org::orekit::orbits::PositionAngleType &, jdouble);
          NumericalPropagatorBuilder(const ::org::orekit::orbits::Orbit &, const ::org::orekit::propagation::conversion::ODEIntegratorBuilder &, const ::org::orekit::orbits::PositionAngleType &, jdouble, const ::org::orekit::attitudes::AttitudeProvider &);

          void addForceModel(const ::org::orekit::forces::ForceModel &) const;
          ::org::orekit::estimation::leastsquares::BatchLSModel buildLeastSquaresModel(const JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > &, const ::java::util::List &, const ::org::orekit::utils::ParameterDriversList &, const ::org::orekit::estimation::leastsquares::ModelObserver &) const;
          ::org::orekit::propagation::numerical::NumericalPropagator buildPropagator(const JArray< jdouble > &) const;
          NumericalPropagatorBuilder copy() const;
          ::java::util::List getAllForceModels() const;
          ::org::orekit::propagation::conversion::ODEIntegratorBuilder getIntegratorBuilder() const;
          jdouble getMass() const;
          void setMass(jdouble) const;
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
        extern PyType_Def PY_TYPE_DEF(NumericalPropagatorBuilder);
        extern PyTypeObject *PY_TYPE(NumericalPropagatorBuilder);

        class t_NumericalPropagatorBuilder {
        public:
          PyObject_HEAD
          NumericalPropagatorBuilder object;
          static PyObject *wrap_Object(const NumericalPropagatorBuilder&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
