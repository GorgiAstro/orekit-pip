#ifndef org_orekit_estimation_leastsquares_PythonAbstractBatchLSModel_H
#define org_orekit_estimation_leastsquares_PythonAbstractBatchLSModel_H

#include "org/orekit/estimation/leastsquares/AbstractBatchLSModel.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        class EstimatedMeasurement;
        class ObservedMeasurement;
      }
      namespace leastsquares {
        class ModelObserver;
      }
    }
    namespace propagation {
      namespace conversion {
        class PropagatorBuilder;
      }
      namespace integration {
        class AbstractIntegratedPropagator;
      }
      class MatricesHarvester;
      class Propagator;
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
      class RealVector;
      class RealMatrix;
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
            mid_init$_013b9b75e2d29096,
            mid_configureHarvester_e80966db3f120c01,
            mid_configureOrbits_e5faaf40266e83a3,
            mid_createPropagators_eb824313fdad97ad,
            mid_fetchEvaluatedMeasurement_de3fd4c2c4a341a7,
            mid_finalize_0fa09c18fee449d5,
            mid_getEvaluationsCount_570ce0828f81a2c1,
            mid_getIterationsCount_570ce0828f81a2c1,
            mid_getSelectedPropagationDriversForBuilder_e970077e9411a499,
            mid_isForwardPropagation_b108b35ef48e27bd,
            mid_pythonDecRef_0fa09c18fee449d5,
            mid_pythonExtension_492808a339bfa35f,
            mid_pythonExtension_3a8e7649f31fdb20,
            mid_setEvaluationsCounter_97761a13d2e9faa2,
            mid_setIterationsCounter_97761a13d2e9faa2,
            mid_value_f3b8dd3e226035d1,
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
