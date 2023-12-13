#ifndef org_orekit_propagation_conversion_DSSTPropagatorBuilder_H
#define org_orekit_propagation_conversion_DSSTPropagatorBuilder_H

#include "org/orekit/propagation/conversion/AbstractPropagatorBuilder.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace utils {
      class ParameterDriversList;
    }
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          class DSSTPropagator;
          namespace forces {
            class DSSTForceModel;
          }
        }
      }
      namespace conversion {
        class DSSTPropagatorBuilder;
        class ODEIntegratorBuilder;
        class PropagatorBuilder;
      }
      class PropagationType;
    }
    namespace orbits {
      class Orbit;
    }
    namespace estimation {
      namespace measurements {
        class ObservedMeasurement;
      }
      namespace leastsquares {
        class ModelObserver;
        class DSSTBatchLSModel;
      }
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
            mid_init$_437f7fba6637ef09,
            mid_init$_05e35caa779a7b0e,
            mid_addForceModel_d24de896ffe1d07a,
            mid_buildLeastSquaresModel_a6159c38c462f3f0,
            mid_buildPropagator_4135970edd4a8374,
            mid_copy_0eaaaa36958ff434,
            mid_getAllForceModels_e62d3bb06d56d7e3,
            mid_getIntegratorBuilder_a870bf0f84eaaecb,
            mid_getMass_b74f83833fdad017,
            mid_getPropagationType_c479da51fc09a224,
            mid_getStateType_c479da51fc09a224,
            mid_resetOrbit_98cc5c663640f0ba,
            mid_setMass_8ba9fe7a847cecad,
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
