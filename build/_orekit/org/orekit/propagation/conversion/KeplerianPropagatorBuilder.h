#ifndef org_orekit_propagation_conversion_KeplerianPropagatorBuilder_H
#define org_orekit_propagation_conversion_KeplerianPropagatorBuilder_H

#include "org/orekit/propagation/conversion/AbstractPropagatorBuilder.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace propagation {
      namespace conversion {
        class PropagatorBuilder;
        class KeplerianPropagatorBuilder;
      }
      class Propagator;
    }
    namespace utils {
      class ParameterDriversList;
    }
    namespace orbits {
      class PositionAngleType;
      class Orbit;
    }
    namespace estimation {
      namespace measurements {
        class ObservedMeasurement;
      }
      namespace leastsquares {
        class AbstractBatchLSModel;
        class ModelObserver;
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

        class KeplerianPropagatorBuilder : public ::org::orekit::propagation::conversion::AbstractPropagatorBuilder {
         public:
          enum {
            mid_init$_ec3a40dd55c962f8,
            mid_init$_a2fff13b0f3a2421,
            mid_buildLeastSquaresModel_434804ad6c6cc8a8,
            mid_buildPropagator_dbf963913bad78cb,
            mid_copy_d0d4476d434c57a0,
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
