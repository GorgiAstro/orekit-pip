#ifndef org_orekit_propagation_conversion_PythonPropagatorBuilder_H
#define org_orekit_propagation_conversion_PythonPropagatorBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace utils {
      class ParameterDriversList;
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
    namespace frames {
      class Frame;
    }
    namespace propagation {
      class Propagator;
      namespace conversion {
        class PropagatorBuilder;
      }
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
            mid_init$_a1fa5dae97ea5ed2,
            mid_buildLeastSquaresModel_1a4dd1f247347a8f,
            mid_buildPropagator_708cc138373fff03,
            mid_copy_563e3d88178dadb8,
            mid_finalize_a1fa5dae97ea5ed2,
            mid_getFrame_2c51111cc6894ba1,
            mid_getInitialOrbitDate_c325492395d89b24,
            mid_getMu_b74f83833fdad017,
            mid_getOrbitType_c7d4737d7afca612,
            mid_getOrbitalParametersDrivers_cfb822366e8ab425,
            mid_getPositionAngleType_c25055891f180348,
            mid_getPropagationParametersDrivers_cfb822366e8ab425,
            mid_getSelectedNormalizedParameters_25e1757a36c4dde2,
            mid_pythonDecRef_a1fa5dae97ea5ed2,
            mid_pythonExtension_6c0ce7e438e5ded4,
            mid_pythonExtension_3d7dd2314a0dd456,
            mid_resetOrbit_69b47a274eed440d,
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
