#ifndef org_orekit_propagation_conversion_NumericalPropagatorBuilder_H
#define org_orekit_propagation_conversion_NumericalPropagatorBuilder_H

#include "org/orekit/propagation/conversion/AbstractPropagatorBuilder.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
    class Object;
  }
}
namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {
        class NumericalPropagator;
      }
      namespace conversion {
        class NumericalPropagatorBuilder;
        class PropagatorBuilder;
        class ODEIntegratorBuilder;
      }
    }
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace utils {
      class ParameterDriversList;
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
    namespace forces {
      class ForceModel;
    }
    namespace orbits {
      class Orbit;
      class PositionAngleType;
    }
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
            mid_init$_3147ac08187e555f,
            mid_init$_7d26bc01a48dedcb,
            mid_addForceModel_beaeb16a38eea9d3,
            mid_buildLeastSquaresModel_68d6ca4c6bdc7fbf,
            mid_buildPropagator_45704d5aa045e6a2,
            mid_copy_7cb146e8b35a9163,
            mid_getAllForceModels_a6156df500549a58,
            mid_getIntegratorBuilder_0a8021b0a6e4c616,
            mid_getMass_456d9a2f64d6b28d,
            mid_setMass_77e0f9a1f260e2e5,
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
