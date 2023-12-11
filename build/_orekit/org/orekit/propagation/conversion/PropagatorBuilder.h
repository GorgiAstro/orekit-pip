#ifndef org_orekit_propagation_conversion_PropagatorBuilder_H
#define org_orekit_propagation_conversion_PropagatorBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {
        class PropagatorBuilder;
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
      class OrbitType;
      class Orbit;
    }
    namespace frames {
      class Frame;
    }
    namespace time {
      class AbsoluteDate;
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
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
            mid_buildLeastSquaresModel_4fca41eef9d750a6,
            mid_buildPropagator_5ad9cbd11735eecd,
            mid_copy_9ce0d272477ff7e1,
            mid_getFrame_6c9bc0a928c56d4e,
            mid_getInitialOrbitDate_7a97f7e149e79afb,
            mid_getMu_557b8123390d8d0c,
            mid_getOrbitType_2cea2a2cb3e02091,
            mid_getOrbitalParametersDrivers_467d574a7997e53a,
            mid_getPositionAngleType_f4984aee71df4c19,
            mid_getPropagationParametersDrivers_467d574a7997e53a,
            mid_getSelectedNormalizedParameters_a53a7513ecedada2,
            mid_resetOrbit_a9af82a1647a21f3,
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
