#ifndef org_orekit_propagation_conversion_EphemerisPropagatorBuilder_H
#define org_orekit_propagation_conversion_EphemerisPropagatorBuilder_H

#include "org/orekit/propagation/conversion/AbstractPropagatorBuilder.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {
        class PropagatorBuilder;
        class EphemerisPropagatorBuilder;
      }
      class StateCovariance;
      class Propagator;
      class SpacecraftState;
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
    namespace time {
      class TimeInterpolator;
      class TimeStampedPair;
    }
    namespace attitudes {
      class AttitudeProvider;
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
            mid_init$_2ee441fbc689b748,
            mid_init$_d43f63068c548b32,
            mid_init$_df8ca70857921fcd,
            mid_init$_99a5fbadd0cd572e,
            mid_buildLeastSquaresModel_4fca41eef9d750a6,
            mid_buildPropagator_5ad9cbd11735eecd,
            mid_copy_1c6dea8ee82902cf,
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
