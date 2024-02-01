#ifndef org_orekit_propagation_conversion_NumericalPropagatorBuilder_H
#define org_orekit_propagation_conversion_NumericalPropagatorBuilder_H

#include "org/orekit/propagation/conversion/AbstractPropagatorBuilder.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      class AttitudeProvider;
    }
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
    namespace estimation {
      namespace leastsquares {
        class BatchLSModel;
        class ModelObserver;
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
            mid_init$_3c587d45992c10e4,
            mid_init$_ab7ccb03b5385986,
            mid_addForceModel_33ce7dbdc1ed7751,
            mid_buildLeastSquaresModel_9cee4860e0dd98b4,
            mid_buildPropagator_534e89621331d918,
            mid_copy_c01a9087d19747c3,
            mid_getAllForceModels_d751c1a57012b438,
            mid_getIntegratorBuilder_97efb8d7c46d45d7,
            mid_getMass_9981f74b2d109da6,
            mid_setMass_1ad26e8c8c0cd65b,
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
