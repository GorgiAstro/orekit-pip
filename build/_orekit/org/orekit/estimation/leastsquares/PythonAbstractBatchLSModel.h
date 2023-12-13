#ifndef org_orekit_estimation_leastsquares_PythonAbstractBatchLSModel_H
#define org_orekit_estimation_leastsquares_PythonAbstractBatchLSModel_H

#include "org/orekit/estimation/leastsquares/AbstractBatchLSModel.h"

namespace org {
  namespace hipparchus {
    namespace util {
      class Pair;
      class Incrementor;
    }
    namespace linear {
      class RealVector;
      class RealMatrix;
    }
  }
  namespace orekit {
    namespace utils {
      class ParameterDriversList;
    }
    namespace propagation {
      class MatricesHarvester;
      namespace integration {
        class AbstractIntegratedPropagator;
      }
      class Propagator;
      namespace conversion {
        class PropagatorBuilder;
      }
    }
    namespace orbits {
      class Orbit;
    }
    namespace estimation {
      namespace measurements {
        class ObservedMeasurement;
        class EstimatedMeasurement;
      }
      namespace leastsquares {
        class ModelObserver;
      }
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
    class Object;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace estimation {
      namespace leastsquares {

        class PythonAbstractBatchLSModel : public ::org::orekit::estimation::leastsquares::AbstractBatchLSModel {
         public:
          enum {
            mid_init$_244486d6f58d6cbc,
            mid_configureHarvester_dafc362fdc9e50eb,
            mid_configureOrbits_3575848f266bfbed,
            mid_createPropagators_de752d9f8766f8f3,
            mid_fetchEvaluatedMeasurement_e26746051feca807,
            mid_finalize_a1fa5dae97ea5ed2,
            mid_getEvaluationsCount_55546ef6a647f39b,
            mid_getIterationsCount_55546ef6a647f39b,
            mid_getSelectedPropagationDriversForBuilder_d30ee09a585504b1,
            mid_isForwardPropagation_9ab94ac1dc23b105,
            mid_pythonDecRef_a1fa5dae97ea5ed2,
            mid_pythonExtension_6c0ce7e438e5ded4,
            mid_pythonExtension_3d7dd2314a0dd456,
            mid_setEvaluationsCounter_29712264b86e4d61,
            mid_setIterationsCounter_29712264b86e4d61,
            mid_value_75baf79414a7355b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonAbstractBatchLSModel(jobject obj) : ::org::orekit::estimation::leastsquares::AbstractBatchLSModel(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonAbstractBatchLSModel(const PythonAbstractBatchLSModel& obj) : ::org::orekit::estimation::leastsquares::AbstractBatchLSModel(obj) {}

          PythonAbstractBatchLSModel(const JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > &, const ::java::util::List &, const ::org::orekit::utils::ParameterDriversList &, const ::org::orekit::estimation::leastsquares::ModelObserver &);

          ::org::orekit::propagation::MatricesHarvester configureHarvester(const ::org::orekit::propagation::Propagator &) const;
          ::org::orekit::orbits::Orbit configureOrbits(const ::org::orekit::propagation::MatricesHarvester &, const ::org::orekit::propagation::Propagator &) const;
          JArray< ::org::orekit::propagation::integration::AbstractIntegratedPropagator > createPropagators(const ::org::hipparchus::linear::RealVector &) const;
          void fetchEvaluatedMeasurement(jint, const ::org::orekit::estimation::measurements::EstimatedMeasurement &) const;
          void finalize() const;
          jint getEvaluationsCount() const;
          jint getIterationsCount() const;
          ::org::orekit::utils::ParameterDriversList getSelectedPropagationDriversForBuilder(jint) const;
          jboolean isForwardPropagation() const;
          void pythonDecRef() const;
          jlong pythonExtension() const;
          void pythonExtension(jlong) const;
          void setEvaluationsCounter(const ::org::hipparchus::util::Incrementor &) const;
          void setIterationsCounter(const ::org::hipparchus::util::Incrementor &) const;
          ::org::hipparchus::util::Pair value(const ::org::hipparchus::linear::RealVector &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace estimation {
      namespace leastsquares {
        extern PyType_Def PY_TYPE_DEF(PythonAbstractBatchLSModel);
        extern PyTypeObject *PY_TYPE(PythonAbstractBatchLSModel);

        class t_PythonAbstractBatchLSModel {
        public:
          PyObject_HEAD
          PythonAbstractBatchLSModel object;
          static PyObject *wrap_Object(const PythonAbstractBatchLSModel&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
