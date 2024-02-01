#ifndef org_orekit_propagation_conversion_EphemerisPropagatorBuilder_H
#define org_orekit_propagation_conversion_EphemerisPropagatorBuilder_H

#include "org/orekit/propagation/conversion/AbstractPropagatorBuilder.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace propagation {
      namespace conversion {
        class EphemerisPropagatorBuilder;
        class PropagatorBuilder;
      }
      class StateCovariance;
      class Propagator;
      class SpacecraftState;
    }
    namespace time {
      class TimeInterpolator;
      class TimeStampedPair;
    }
    namespace utils {
      class ParameterDriversList;
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

        class EphemerisPropagatorBuilder : public ::org::orekit::propagation::conversion::AbstractPropagatorBuilder {
         public:
          enum {
            mid_init$_a87fec2ffab2c1fc,
            mid_init$_e8a5aea010c0672d,
            mid_init$_c346a54c93891220,
            mid_init$_082ed74cc9efab42,
            mid_buildLeastSquaresModel_434804ad6c6cc8a8,
            mid_buildPropagator_dbf963913bad78cb,
            mid_copy_66ae8c26b63a0d85,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit EphemerisPropagatorBuilder(jobject obj) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          EphemerisPropagatorBuilder(const EphemerisPropagatorBuilder& obj) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(obj) {}

          EphemerisPropagatorBuilder(const ::java::util::List &, const ::org::orekit::time::TimeInterpolator &);
          EphemerisPropagatorBuilder(const ::java::util::List &, const ::org::orekit::time::TimeInterpolator &, const ::org::orekit::attitudes::AttitudeProvider &);
          EphemerisPropagatorBuilder(const ::java::util::List &, const ::org::orekit::time::TimeInterpolator &, const ::java::util::List &, const ::org::orekit::time::TimeInterpolator &);
          EphemerisPropagatorBuilder(const ::java::util::List &, const ::org::orekit::time::TimeInterpolator &, const ::java::util::List &, const ::org::orekit::time::TimeInterpolator &, const ::org::orekit::attitudes::AttitudeProvider &);

          ::org::orekit::estimation::leastsquares::AbstractBatchLSModel buildLeastSquaresModel(const JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > &, const ::java::util::List &, const ::org::orekit::utils::ParameterDriversList &, const ::org::orekit::estimation::leastsquares::ModelObserver &) const;
          ::org::orekit::propagation::Propagator buildPropagator(const JArray< jdouble > &) const;
          EphemerisPropagatorBuilder copy() const;
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
        extern PyType_Def PY_TYPE_DEF(EphemerisPropagatorBuilder);
        extern PyTypeObject *PY_TYPE(EphemerisPropagatorBuilder);

        class t_EphemerisPropagatorBuilder {
        public:
          PyObject_HEAD
          EphemerisPropagatorBuilder object;
          static PyObject *wrap_Object(const EphemerisPropagatorBuilder&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
