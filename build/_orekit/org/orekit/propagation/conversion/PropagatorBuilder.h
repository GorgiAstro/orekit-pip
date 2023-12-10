#ifndef org_orekit_propagation_conversion_PropagatorBuilder_H
#define org_orekit_propagation_conversion_PropagatorBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace orbits {
      class PositionAngleType;
      class Orbit;
      class OrbitType;
    }
    namespace propagation {
      namespace conversion {
        class PropagatorBuilder;
      }
      class Propagator;
    }
    namespace frames {
      class Frame;
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
      class AbsoluteDate;
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
            mid_buildLeastSquaresModel_2eb3122719704f90,
            mid_buildPropagator_0c183831cad84280,
            mid_copy_7c39c5f4719b16a0,
            mid_getFrame_b86f9f61d97a7244,
            mid_getInitialOrbitDate_85703d13e302437e,
            mid_getMu_dff5885c2c873297,
            mid_getOrbitType_e29360d311dc0e20,
            mid_getOrbitalParametersDrivers_bd51074bfd9d41da,
            mid_getPositionAngleType_8f17e83e5a86217c,
            mid_getPropagationParametersDrivers_bd51074bfd9d41da,
            mid_getSelectedNormalizedParameters_60c7040667a7dc5c,
            mid_resetOrbit_6219f6b430651d68,
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
