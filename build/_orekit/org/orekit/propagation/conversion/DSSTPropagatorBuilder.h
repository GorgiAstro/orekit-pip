#ifndef org_orekit_propagation_conversion_DSSTPropagatorBuilder_H
#define org_orekit_propagation_conversion_DSSTPropagatorBuilder_H

#include "org/orekit/propagation/conversion/AbstractPropagatorBuilder.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      class AttitudeProvider;
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
        class PropagatorBuilder;
        class ODEIntegratorBuilder;
      }
      class PropagationType;
    }
    namespace utils {
      class ParameterDriversList;
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
            mid_init$_c70b92190ed3f8da,
            mid_init$_04fe4b9d76071505,
            mid_addForceModel_a0575630e19e1e5c,
            mid_buildLeastSquaresModel_8a8975ded39f633f,
            mid_buildPropagator_4fd5c210f0282321,
            mid_copy_1fab1d2de2d29bc8,
            mid_getAllForceModels_d751c1a57012b438,
            mid_getIntegratorBuilder_97efb8d7c46d45d7,
            mid_getMass_9981f74b2d109da6,
            mid_getPropagationType_fa97d40fdfd0f5fb,
            mid_getStateType_fa97d40fdfd0f5fb,
            mid_resetOrbit_2e357aa1306bd910,
            mid_setMass_1ad26e8c8c0cd65b,
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
