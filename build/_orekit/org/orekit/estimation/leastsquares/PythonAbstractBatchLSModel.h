#ifndef org_orekit_estimation_leastsquares_PythonAbstractBatchLSModel_H
#define org_orekit_estimation_leastsquares_PythonAbstractBatchLSModel_H

#include "org/orekit/estimation/leastsquares/AbstractBatchLSModel.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class RealVector;
      class RealMatrix;
    }
    namespace util {
      class Incrementor;
      class Pair;
    }
  }
  namespace orekit {
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
    namespace estimation {
      namespace measurements {
        class EstimatedMeasurement;
        class ObservedMeasurement;
      }
      namespace leastsquares {
        class ModelObserver;
      }
    }
    namespace orbits {
      class Orbit;
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
            mid_init$_cea2a98fe3ea59d1,
            mid_configureHarvester_f80d2a02173b5959,
            mid_configureOrbits_9e53ad80ae898100,
            mid_createPropagators_654065e2ab8f1101,
            mid_fetchEvaluatedMeasurement_d5a7028bdf1b2c93,
            mid_finalize_7ae3461a92a43152,
            mid_getEvaluationsCount_f2f64475e4580546,
            mid_getIterationsCount_f2f64475e4580546,
            mid_getSelectedPropagationDriversForBuilder_ace385640a2723ff,
            mid_isForwardPropagation_e470b6d9e0d979db,
            mid_pythonDecRef_7ae3461a92a43152,
            mid_pythonExtension_a27fc9afd27e559d,
            mid_pythonExtension_fefb08975c10f0a1,
            mid_setEvaluationsCounter_33deb2f2de655904,
            mid_setIterationsCounter_33deb2f2de655904,
            mid_value_f8e49be09d1e1247,
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
