#ifndef org_orekit_estimation_leastsquares_PythonAbstractBatchLSModel_H
#define org_orekit_estimation_leastsquares_PythonAbstractBatchLSModel_H

#include "org/orekit/estimation/leastsquares/AbstractBatchLSModel.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {
        class PropagatorBuilder;
      }
      class MatricesHarvester;
      class Propagator;
      namespace integration {
        class AbstractIntegratedPropagator;
      }
    }
    namespace estimation {
      namespace leastsquares {
        class ModelObserver;
      }
      namespace measurements {
        class ObservedMeasurement;
        class EstimatedMeasurement;
      }
    }
    namespace orbits {
      class Orbit;
    }
    namespace utils {
      class ParameterDriversList;
    }
  }
  namespace hipparchus {
    namespace util {
      class Incrementor;
      class Pair;
    }
    namespace linear {
      class RealMatrix;
      class RealVector;
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
            mid_init$_2406e4cf7f21e166,
            mid_configureHarvester_58ff847451f5cf92,
            mid_configureOrbits_614fe55969c9646f,
            mid_createPropagators_30bf62a3dd22b244,
            mid_fetchEvaluatedMeasurement_e484126dd163b386,
            mid_finalize_0640e6acf969ed28,
            mid_getEvaluationsCount_412668abc8d889e9,
            mid_getIterationsCount_412668abc8d889e9,
            mid_getSelectedPropagationDriversForBuilder_b63a8ff72f9e46a4,
            mid_isForwardPropagation_89b302893bdbe1f1,
            mid_pythonDecRef_0640e6acf969ed28,
            mid_pythonExtension_9e26256fb0d384a2,
            mid_pythonExtension_3cd6a6b354c6aa22,
            mid_setEvaluationsCounter_7852dd173b858d1b,
            mid_setIterationsCounter_7852dd173b858d1b,
            mid_value_77538fd880505017,
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
