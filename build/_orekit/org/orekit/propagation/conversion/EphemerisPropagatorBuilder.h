#ifndef org_orekit_propagation_conversion_EphemerisPropagatorBuilder_H
#define org_orekit_propagation_conversion_EphemerisPropagatorBuilder_H

#include "org/orekit/propagation/conversion/AbstractPropagatorBuilder.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class StateCovariance;
      namespace conversion {
        class PropagatorBuilder;
        class EphemerisPropagatorBuilder;
      }
      class Propagator;
      class SpacecraftState;
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
    namespace time {
      class TimeStampedPair;
      class TimeInterpolator;
    }
    namespace utils {
      class ParameterDriversList;
    }
    namespace orbits {
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

        class EphemerisPropagatorBuilder : public ::org::orekit::propagation::conversion::AbstractPropagatorBuilder {
         public:
          enum {
            mid_init$_ccae413695f0dab4,
            mid_init$_e43529ca1a21e83d,
            mid_init$_33831b7a373bdb29,
            mid_init$_cd5e79efaeff69df,
            mid_buildLeastSquaresModel_2eb3122719704f90,
            mid_buildPropagator_0c183831cad84280,
            mid_copy_4c5b72b9d02e7846,
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
