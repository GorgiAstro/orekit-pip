#ifndef org_orekit_propagation_conversion_DSSTPropagatorBuilder_H
#define org_orekit_propagation_conversion_DSSTPropagatorBuilder_H

#include "org/orekit/propagation/conversion/AbstractPropagatorBuilder.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {
        class PropagatorBuilder;
        class DSSTPropagatorBuilder;
        class ODEIntegratorBuilder;
      }
      namespace semianalytical {
        namespace dsst {
          class DSSTPropagator;
          namespace forces {
            class DSSTForceModel;
          }
        }
      }
      class PropagationType;
    }
    namespace estimation {
      namespace leastsquares {
        class ModelObserver;
        class DSSTBatchLSModel;
      }
      namespace measurements {
        class ObservedMeasurement;
      }
    }
    namespace utils {
      class ParameterDriversList;
    }
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace orbits {
      class Orbit;
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

        class DSSTPropagatorBuilder : public ::org::orekit::propagation::conversion::AbstractPropagatorBuilder {
         public:
          enum {
            mid_init$_b9ccae616b531dbe,
            mid_init$_195606cc9d74c2f4,
            mid_addForceModel_2a559dedc6480c51,
            mid_buildLeastSquaresModel_3446f8fef52f0814,
            mid_buildPropagator_7f447239921efd7c,
            mid_copy_e4730451f9f3afed,
            mid_getAllForceModels_0d9551367f7ecdef,
            mid_getIntegratorBuilder_4785d50855609363,
            mid_getMass_557b8123390d8d0c,
            mid_getPropagationType_81e4bfcfa9059f10,
            mid_getStateType_81e4bfcfa9059f10,
            mid_resetOrbit_ec22b2fd6dbaa1ee,
            mid_setMass_10f281d777284cea,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DSSTPropagatorBuilder(jobject obj) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DSSTPropagatorBuilder(const DSSTPropagatorBuilder& obj) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(obj) {}

          DSSTPropagatorBuilder(const ::org::orekit::orbits::Orbit &, const ::org::orekit::propagation::conversion::ODEIntegratorBuilder &, jdouble, const ::org::orekit::propagation::PropagationType &, const ::org::orekit::propagation::PropagationType &);
          DSSTPropagatorBuilder(const ::org::orekit::orbits::Orbit &, const ::org::orekit::propagation::conversion::ODEIntegratorBuilder &, jdouble, const ::org::orekit::propagation::PropagationType &, const ::org::orekit::propagation::PropagationType &, const ::org::orekit::attitudes::AttitudeProvider &);

          void addForceModel(const ::org::orekit::propagation::semianalytical::dsst::forces::DSSTForceModel &) const;
          ::org::orekit::estimation::leastsquares::DSSTBatchLSModel buildLeastSquaresModel(const JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > &, const ::java::util::List &, const ::org::orekit::utils::ParameterDriversList &, const ::org::orekit::estimation::leastsquares::ModelObserver &) const;
          ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator buildPropagator(const JArray< jdouble > &) const;
          DSSTPropagatorBuilder copy() const;
          ::java::util::List getAllForceModels() const;
          ::org::orekit::propagation::conversion::ODEIntegratorBuilder getIntegratorBuilder() const;
          jdouble getMass() const;
          ::org::orekit::propagation::PropagationType getPropagationType() const;
          ::org::orekit::propagation::PropagationType getStateType() const;
          void resetOrbit(const ::org::orekit::orbits::Orbit &, const ::org::orekit::propagation::PropagationType &) const;
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
        extern PyType_Def PY_TYPE_DEF(DSSTPropagatorBuilder);
        extern PyTypeObject *PY_TYPE(DSSTPropagatorBuilder);

        class t_DSSTPropagatorBuilder {
        public:
          PyObject_HEAD
          DSSTPropagatorBuilder object;
          static PyObject *wrap_Object(const DSSTPropagatorBuilder&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
