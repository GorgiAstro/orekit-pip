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
    namespace propagation {
      namespace conversion {
        class PropagatorBuilder;
      }
      class Propagator;
    }
    namespace time {
      class AbsoluteDate;
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
    namespace utils {
      class ParameterDriversList;
    }
    namespace orbits {
      class PositionAngleType;
      class Orbit;
      class OrbitType;
    }
    namespace frames {
      class Frame;
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
            mid_buildLeastSquaresModel_434804ad6c6cc8a8,
            mid_buildPropagator_dbf963913bad78cb,
            mid_copy_3ae868590960a3fb,
            mid_getFrame_cb151471db4570f0,
            mid_getInitialOrbitDate_80e11148db499dda,
            mid_getMu_9981f74b2d109da6,
            mid_getOrbitType_495f818d3570b7f5,
            mid_getOrbitalParametersDrivers_7c5a416c83e442be,
            mid_getPositionAngleType_a6db4e6edefda4be,
            mid_getPropagationParametersDrivers_7c5a416c83e442be,
            mid_getSelectedNormalizedParameters_be783177b060994b,
            mid_resetOrbit_17534ef58ef3aaef,
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
