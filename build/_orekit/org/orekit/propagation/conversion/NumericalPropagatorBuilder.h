#ifndef org_orekit_propagation_conversion_NumericalPropagatorBuilder_H
#define org_orekit_propagation_conversion_NumericalPropagatorBuilder_H

#include "org/orekit/propagation/conversion/AbstractPropagatorBuilder.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {
        class NumericalPropagatorBuilder;
        class ODEIntegratorBuilder;
        class PropagatorBuilder;
      }
      namespace numerical {
        class NumericalPropagator;
      }
    }
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace utils {
      class ParameterDriversList;
    }
    namespace forces {
      class ForceModel;
    }
    namespace estimation {
      namespace leastsquares {
        class BatchLSModel;
        class ModelObserver;
      }
      namespace measurements {
        class ObservedMeasurement;
      }
    }
    namespace orbits {
      class Orbit;
      class PositionAngleType;
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
            mid_init$_99c6cf1555665a56,
            mid_init$_b869d69da460d35b,
            mid_addForceModel_43775e92e64180fc,
            mid_buildLeastSquaresModel_353bfba6366969bc,
            mid_buildPropagator_57f2ea8f7e2a7c1f,
            mid_copy_12bbe9991f8a10b2,
            mid_getAllForceModels_e62d3bb06d56d7e3,
            mid_getIntegratorBuilder_a870bf0f84eaaecb,
            mid_getMass_b74f83833fdad017,
            mid_setMass_8ba9fe7a847cecad,
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
