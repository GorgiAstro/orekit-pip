#ifndef org_orekit_estimation_leastsquares_DSSTBatchLSModel_H
#define org_orekit_estimation_leastsquares_DSSTBatchLSModel_H

#include "org/orekit/estimation/leastsquares/AbstractBatchLSModel.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {
        class PropagatorBuilder;
      }
      class PropagationType;
    }
    namespace estimation {
      namespace leastsquares {
        class ModelObserver;
      }
      namespace measurements {
        class ObservedMeasurement;
      }
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
    class Object;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace estimation {
      namespace leastsquares {

        class DSSTBatchLSModel : public ::org::orekit::estimation::leastsquares::AbstractBatchLSModel {
         public:
          enum {
            mid_init$_eb7a325cfac45318,
            mid_configureHarvester_58ff847451f5cf92,
            mid_configureOrbits_614fe55969c9646f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DSSTBatchLSModel(jobject obj) : ::org::orekit::estimation::leastsquares::AbstractBatchLSModel(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DSSTBatchLSModel(const DSSTBatchLSModel& obj) : ::org::orekit::estimation::leastsquares::AbstractBatchLSModel(obj) {}

          DSSTBatchLSModel(const JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > &, const ::java::util::List &, const ::org::orekit::utils::ParameterDriversList &, const ::org::orekit::estimation::leastsquares::ModelObserver &, const ::org::orekit::propagation::PropagationType &);
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
        extern PyType_Def PY_TYPE_DEF(DSSTBatchLSModel);
        extern PyTypeObject *PY_TYPE(DSSTBatchLSModel);

        class t_DSSTBatchLSModel {
        public:
          PyObject_HEAD
          DSSTBatchLSModel object;
          static PyObject *wrap_Object(const DSSTBatchLSModel&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
