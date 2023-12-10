#ifndef org_orekit_estimation_leastsquares_BatchLSModel_H
#define org_orekit_estimation_leastsquares_BatchLSModel_H

#include "org/orekit/estimation/leastsquares/AbstractBatchLSModel.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
    class Object;
  }
}
namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {
        class PropagatorBuilder;
      }
    }
    namespace estimation {
      namespace measurements {
        class ObservedMeasurement;
      }
      namespace leastsquares {
        class ModelObserver;
      }
    }
    namespace utils {
      class ParameterDriversList;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace estimation {
      namespace leastsquares {

        class BatchLSModel : public ::org::orekit::estimation::leastsquares::AbstractBatchLSModel {
         public:
          enum {
            mid_init$_013b9b75e2d29096,
            mid_configureHarvester_e80966db3f120c01,
            mid_configureOrbits_e5faaf40266e83a3,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BatchLSModel(jobject obj) : ::org::orekit::estimation::leastsquares::AbstractBatchLSModel(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BatchLSModel(const BatchLSModel& obj) : ::org::orekit::estimation::leastsquares::AbstractBatchLSModel(obj) {}

          BatchLSModel(const JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > &, const ::java::util::List &, const ::org::orekit::utils::ParameterDriversList &, const ::org::orekit::estimation::leastsquares::ModelObserver &);
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
        extern PyType_Def PY_TYPE_DEF(BatchLSModel);
        extern PyTypeObject *PY_TYPE(BatchLSModel);

        class t_BatchLSModel {
        public:
          PyObject_HEAD
          BatchLSModel object;
          static PyObject *wrap_Object(const BatchLSModel&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
