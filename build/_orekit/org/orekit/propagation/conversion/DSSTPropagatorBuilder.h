#ifndef org_orekit_propagation_conversion_DSSTPropagatorBuilder_H
#define org_orekit_propagation_conversion_DSSTPropagatorBuilder_H

#include "org/orekit/propagation/conversion/AbstractPropagatorBuilder.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {
        class DSSTPropagatorBuilder;
        class PropagatorBuilder;
        class ODEIntegratorBuilder;
      }
      namespace semianalytical {
        namespace dsst {
          namespace forces {
            class DSSTForceModel;
          }
          class DSSTPropagator;
        }
      }
      class PropagationType;
    }
    namespace estimation {
      namespace leastsquares {
        class DSSTBatchLSModel;
        class ModelObserver;
      }
      namespace measurements {
        class ObservedMeasurement;
      }
    }
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace utils {
      class ParameterDriversList;
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
            mid_init$_721a71466591879d,
            mid_init$_3ce276d088f69fd4,
            mid_addForceModel_868bb92ba9b91af7,
            mid_buildLeastSquaresModel_97549aab335354c0,
            mid_buildPropagator_45be81d8f3d0b476,
            mid_copy_39e7c31de2b3474f,
            mid_getAllForceModels_a6156df500549a58,
            mid_getIntegratorBuilder_0a8021b0a6e4c616,
            mid_getMass_456d9a2f64d6b28d,
            mid_getPropagationType_cb6f177f3e3f8613,
            mid_getStateType_cb6f177f3e3f8613,
            mid_resetOrbit_730ccdf0a47896e3,
            mid_setMass_77e0f9a1f260e2e5,
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
