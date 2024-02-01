#ifndef org_orekit_estimation_leastsquares_PythonAbstractBatchLSModel_H
#define org_orekit_estimation_leastsquares_PythonAbstractBatchLSModel_H

#include "org/orekit/estimation/leastsquares/AbstractBatchLSModel.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {
        class AbstractIntegratedPropagator;
      }
      namespace conversion {
        class PropagatorBuilder;
      }
      class Propagator;
      class MatricesHarvester;
    }
    namespace utils {
      class ParameterDriversList;
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
            mid_init$_f278310556712c73,
            mid_configureHarvester_1a5b9825e639ffce,
            mid_configureOrbits_88ee223eb65bb3ed,
            mid_createPropagators_baecdd10c42d41fb,
            mid_fetchEvaluatedMeasurement_80131b0affbf5420,
            mid_finalize_ff7cb6c242604316,
            mid_getEvaluationsCount_d6ab429752e7c267,
            mid_getIterationsCount_d6ab429752e7c267,
            mid_getSelectedPropagationDriversForBuilder_9ad7d1bd3e8916dc,
            mid_isForwardPropagation_eee3de00fe971136,
            mid_pythonDecRef_ff7cb6c242604316,
            mid_pythonExtension_42c72b98e3c2e08a,
            mid_pythonExtension_f5bbab7e97879358,
            mid_setEvaluationsCounter_98cb188ac0868226,
            mid_setIterationsCounter_98cb188ac0868226,
            mid_value_f5f9cd0684e2ab5e,
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
