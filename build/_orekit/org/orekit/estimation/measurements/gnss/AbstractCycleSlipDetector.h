#ifndef org_orekit_estimation_measurements_gnss_AbstractCycleSlipDetector_H
#define org_orekit_estimation_measurements_gnss_AbstractCycleSlipDetector_H

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
    namespace estimation {
      namespace measurements {
        namespace gnss {
          class CycleSlipDetectors;
          class CycleSlipDetectorResults;
        }
      }
    }
    namespace files {
      namespace rinex {
        namespace observation {
          class ObservationDataSet;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          class AbstractCycleSlipDetector : public ::java::lang::Object {
           public:
            enum {
              mid_detect_fa7c1e622bc91b53,
              mid_manageData_a74883e6a7063961,
              mid_getResults_a6156df500549a58,
              mid_getMinMeasurementNumber_f2f64475e4580546,
              mid_getMaxTimeBeetween2Measurement_456d9a2f64d6b28d,
              mid_getStuffReference_a6156df500549a58,
              mid_cycleSlipDataSet_caa451652427585a,
              mid_setName_7d9ccf00009ef79e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit AbstractCycleSlipDetector(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            AbstractCycleSlipDetector(const AbstractCycleSlipDetector& obj) : ::java::lang::Object(obj) {}

            ::java::util::List detect(const ::java::util::List &) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {
          extern PyType_Def PY_TYPE_DEF(AbstractCycleSlipDetector);
          extern PyTypeObject *PY_TYPE(AbstractCycleSlipDetector);

          class t_AbstractCycleSlipDetector {
          public:
            PyObject_HEAD
            AbstractCycleSlipDetector object;
            static PyObject *wrap_Object(const AbstractCycleSlipDetector&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
