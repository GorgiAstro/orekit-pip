#ifndef org_orekit_propagation_conversion_EphemerisPropagatorBuilder_H
#define org_orekit_propagation_conversion_EphemerisPropagatorBuilder_H

#include "org/orekit/propagation/conversion/AbstractPropagatorBuilder.h"

namespace org {
  namespace orekit {
    namespace time {
      class TimeInterpolator;
      class TimeStampedPair;
    }
    namespace propagation {
      class StateCovariance;
      class Propagator;
      namespace conversion {
        class EphemerisPropagatorBuilder;
        class PropagatorBuilder;
      }
      class SpacecraftState;
    }
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace estimation {
      namespace leastsquares {
        class AbstractBatchLSModel;
        class ModelObserver;
      }
      namespace measurements {
        class ObservedMeasurement;
      }
    }
    namespace orbits {
      class Orbit;
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

        class EphemerisPropagatorBuilder : public ::org::orekit::propagation::conversion::AbstractPropagatorBuilder {
         public:
          enum {
            mid_init$_350dc18a1f44756a,
            mid_init$_6682fdf9be8b3bcf,
            mid_init$_a184da22b0a57732,
            mid_init$_9078d21669db6ed5,
            mid_buildLeastSquaresModel_31c4fcde5bc19fc3,
            mid_buildPropagator_d397e255f9fb16e6,
            mid_copy_4146a06325580643,
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
