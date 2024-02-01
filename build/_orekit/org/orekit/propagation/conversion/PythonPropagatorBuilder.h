#ifndef org_orekit_propagation_conversion_PythonPropagatorBuilder_H
#define org_orekit_propagation_conversion_PythonPropagatorBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        class ObservedMeasurement;
      }
      namespace leastsquares {
        class AbstractBatchLSModel;
        class ModelObserver;
      }
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace utils {
      class ParameterDriversList;
    }
    namespace orbits {
      class PositionAngleType;
      class Orbit;
      class OrbitType;
    }
    namespace propagation {
      class Propagator;
      namespace conversion {
        class PropagatorBuilder;
      }
    }
    namespace frames {
      class Frame;
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Throwable;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        class PythonPropagatorBuilder : public ::java::lang::Object {
         public:
          enum {
            mid_init$_ff7cb6c242604316,
            mid_buildLeastSquaresModel_434804ad6c6cc8a8,
            mid_buildPropagator_dbf963913bad78cb,
            mid_copy_3ae868590960a3fb,
            mid_finalize_ff7cb6c242604316,
            mid_getFrame_cb151471db4570f0,
            mid_getInitialOrbitDate_80e11148db499dda,
            mid_getMu_9981f74b2d109da6,
            mid_getOrbitType_495f818d3570b7f5,
            mid_getOrbitalParametersDrivers_7c5a416c83e442be,
            mid_getPositionAngleType_a6db4e6edefda4be,
            mid_getPropagationParametersDrivers_7c5a416c83e442be,
            mid_getSelectedNormalizedParameters_be783177b060994b,
            mid_pythonDecRef_ff7cb6c242604316,
            mid_pythonExtension_42c72b98e3c2e08a,
            mid_pythonExtension_f5bbab7e97879358,
            mid_resetOrbit_17534ef58ef3aaef,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonPropagatorBuilder(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonPropagatorBuilder(const PythonPropagatorBuilder& obj) : ::java::lang::Object(obj) {}

          PythonPropagatorBuilder();

          ::org::orekit::estimation::leastsquares::AbstractBatchLSModel buildLeastSquaresModel(const JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > &, const ::java::util::List &, const ::org::orekit::utils::ParameterDriversList &, const ::org::orekit::estimation::leastsquares::ModelObserver &) const;
          ::org::orekit::propagation::Propagator buildPropagator(const JArray< jdouble > &) const;
          ::org::orekit::propagation::conversion::PropagatorBuilder copy() const;
          void finalize() const;
          ::org::orekit::frames::Frame getFrame() const;
          ::org::orekit::time::AbsoluteDate getInitialOrbitDate() const;
          jdouble getMu() const;
          ::org::orekit::orbits::OrbitType getOrbitType() const;
          ::org::orekit::utils::ParameterDriversList getOrbitalParametersDrivers() const;
          ::org::orekit::orbits::PositionAngleType getPositionAngleType() const;
          ::org::orekit::utils::ParameterDriversList getPropagationParametersDrivers() const;
          JArray< jdouble > getSelectedNormalizedParameters() const;
          void pythonDecRef() const;
          jlong pythonExtension() const;
          void pythonExtension(jlong) const;
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
        extern PyType_Def PY_TYPE_DEF(PythonPropagatorBuilder);
        extern PyTypeObject *PY_TYPE(PythonPropagatorBuilder);

        class t_PythonPropagatorBuilder {
        public:
          PyObject_HEAD
          PythonPropagatorBuilder object;
          static PyObject *wrap_Object(const PythonPropagatorBuilder&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
