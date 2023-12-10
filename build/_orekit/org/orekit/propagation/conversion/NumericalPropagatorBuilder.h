#ifndef org_orekit_propagation_conversion_NumericalPropagatorBuilder_H
#define org_orekit_propagation_conversion_NumericalPropagatorBuilder_H

#include "org/orekit/propagation/conversion/AbstractPropagatorBuilder.h"

namespace org {
  namespace orekit {
    namespace orbits {
      class PositionAngleType;
      class Orbit;
    }
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
        class BatchLSModel;
        class ModelObserver;
      }
      namespace measurements {
        class ObservedMeasurement;
      }
    }
    namespace forces {
      class ForceModel;
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

        class NumericalPropagatorBuilder : public ::org::orekit::propagation::conversion::AbstractPropagatorBuilder {
         public:
          enum {
            mid_init$_085e8b3a8f1ba22d,
            mid_init$_f94892e562eb0a93,
            mid_addForceModel_690f9b27ef4d22fe,
            mid_buildLeastSquaresModel_a4f338c74a508dcf,
            mid_buildPropagator_6e4510a485a49af8,
            mid_copy_de1b712c7ea0d951,
            mid_getAllForceModels_2afa36052df4765d,
            mid_getIntegratorBuilder_3a8c061b6472f9df,
            mid_getMass_dff5885c2c873297,
            mid_setMass_17db3a65980d3441,
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
