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
      namespace measurements {
        class ObservedMeasurement;
      }
      namespace leastsquares {
        class ModelObserver;
        class DSSTBatchLSModel;
      }
    }
    namespace orbits {
      class Orbit;
    }
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace utils {
      class ParameterDriversList;
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
            mid_init$_b17cc766bb3e3ee2,
            mid_init$_1db0b5ff88efb90c,
            mid_addForceModel_8788ca485d7d47e4,
            mid_buildLeastSquaresModel_28349e2e3cb4a78d,
            mid_buildPropagator_046b5d73cd1b922e,
            mid_copy_2b55c3a3e2597738,
            mid_getAllForceModels_2afa36052df4765d,
            mid_getIntegratorBuilder_3a8c061b6472f9df,
            mid_getMass_dff5885c2c873297,
            mid_getPropagationType_b2e499d9c793fc25,
            mid_getStateType_b2e499d9c793fc25,
            mid_resetOrbit_e1aab2b52626053e,
            mid_setMass_17db3a65980d3441,
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
