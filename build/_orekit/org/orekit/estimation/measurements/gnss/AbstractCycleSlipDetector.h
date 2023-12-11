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
              mid_detect_77cbef3c12dc7892,
              mid_cycleSlipDataSet_7660552c05323b39,
              mid_getResults_0d9551367f7ecdef,
              mid_getStuffReference_0d9551367f7ecdef,
              mid_getMaxTimeBeetween2Measurement_557b8123390d8d0c,
              mid_getMinMeasurementNumber_412668abc8d889e9,
              mid_manageData_7cae3eafa8e6978c,
              mid_setName_3232b7e9138747dc,
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
