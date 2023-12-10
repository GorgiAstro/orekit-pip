#ifndef org_orekit_propagation_conversion_PropagatorBuilder_H
#define org_orekit_propagation_conversion_PropagatorBuilder_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace frames {
      class Frame;
    }
    namespace propagation {
      class Propagator;
      namespace conversion {
        class PropagatorBuilder;
      }
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
      class PositionAngleType;
      class OrbitType;
    }
    namespace utils {
      class ParameterDriversList;
    }
    namespace time {
      class AbsoluteDate;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        class PropagatorBuilder : public ::java::lang::Object {
         public:
          enum {
            mid_buildLeastSquaresModel_31c4fcde5bc19fc3,
            mid_buildPropagator_d397e255f9fb16e6,
            mid_copy_6e20699935a1c88e,
            mid_getFrame_c8fe21bcdac65bf6,
            mid_getInitialOrbitDate_aaa854c403487cf3,
            mid_getMu_456d9a2f64d6b28d,
            mid_getOrbitType_63ea5cd020bf7bf1,
            mid_getOrbitalParametersDrivers_eb9e6df280c6daa0,
            mid_getPositionAngleType_2571e8fe1cede425,
            mid_getPropagationParametersDrivers_eb9e6df280c6daa0,
            mid_getSelectedNormalizedParameters_7cdc325af0834901,
            mid_resetOrbit_e5b8a6a44355183e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PropagatorBuilder(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PropagatorBuilder(const PropagatorBuilder& obj) : ::java::lang::Object(obj) {}

          ::org::orekit::estimation::leastsquares::AbstractBatchLSModel buildLeastSquaresModel(const JArray< PropagatorBuilder > &, const ::java::util::List &, const ::org::orekit::utils::ParameterDriversList &, const ::org::orekit::estimation::leastsquares::ModelObserver &) const;
          ::org::orekit::propagation::Propagator buildPropagator(const JArray< jdouble > &) const;
          PropagatorBuilder copy() const;
          ::org::orekit::frames::Frame getFrame() const;
          ::org::orekit::time::AbsoluteDate getInitialOrbitDate() const;
          jdouble getMu() const;
          ::org::orekit::orbits::OrbitType getOrbitType() const;
          ::org::orekit::utils::ParameterDriversList getOrbitalParametersDrivers() const;
          ::org::orekit::orbits::PositionAngleType getPositionAngleType() const;
          ::org::orekit::utils::ParameterDriversList getPropagationParametersDrivers() const;
          JArray< jdouble > getSelectedNormalizedParameters() const;
          void resetOrbit(const ::org::orekit::orbits::Orbit &) const;
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
        extern PyType_Def PY_TYPE_DEF(PropagatorBuilder);
        extern PyTypeObject *PY_TYPE(PropagatorBuilder);

        class t_PropagatorBuilder {
        public:
          PyObject_HEAD
          PropagatorBuilder object;
          static PyObject *wrap_Object(const PropagatorBuilder&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
