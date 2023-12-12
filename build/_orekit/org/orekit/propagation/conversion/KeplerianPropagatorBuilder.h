#ifndef org_orekit_propagation_conversion_KeplerianPropagatorBuilder_H
#define org_orekit_propagation_conversion_KeplerianPropagatorBuilder_H

#include "org/orekit/propagation/conversion/AbstractPropagatorBuilder.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {
        class PropagatorBuilder;
        class KeplerianPropagatorBuilder;
      }
      class Propagator;
    }
    namespace estimation {
      namespace leastsquares {
        class ModelObserver;
        class AbstractBatchLSModel;
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

        class KeplerianPropagatorBuilder : public ::org::orekit::propagation::conversion::AbstractPropagatorBuilder {
         public:
          enum {
            mid_init$_e7d991b18d63c54b,
            mid_init$_e0b795670e5b5275,
            mid_buildLeastSquaresModel_4fca41eef9d750a6,
            mid_buildPropagator_5ad9cbd11735eecd,
            mid_copy_c0974e79ac050d47,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit KeplerianPropagatorBuilder(jobject obj) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          KeplerianPropagatorBuilder(const KeplerianPropagatorBuilder& obj) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(obj) {}

          KeplerianPropagatorBuilder(const ::org::orekit::orbits::Orbit &, const ::org::orekit::orbits::PositionAngleType &, jdouble);
          KeplerianPropagatorBuilder(const ::org::orekit::orbits::Orbit &, const ::org::orekit::orbits::PositionAngleType &, jdouble, const ::org::orekit::attitudes::AttitudeProvider &);

          ::org::orekit::estimation::leastsquares::AbstractBatchLSModel buildLeastSquaresModel(const JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > &, const ::java::util::List &, const ::org::orekit::utils::ParameterDriversList &, const ::org::orekit::estimation::leastsquares::ModelObserver &) const;
          ::org::orekit::propagation::Propagator buildPropagator(const JArray< jdouble > &) const;
          KeplerianPropagatorBuilder copy() const;
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
        extern PyType_Def PY_TYPE_DEF(KeplerianPropagatorBuilder);
        extern PyTypeObject *PY_TYPE(KeplerianPropagatorBuilder);

        class t_KeplerianPropagatorBuilder {
        public:
          PyObject_HEAD
          KeplerianPropagatorBuilder object;
          static PyObject *wrap_Object(const KeplerianPropagatorBuilder&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
