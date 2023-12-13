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
              mid_detect_d1fc3c05f458e1a3,
              mid_cycleSlipDataSet_6ac7265223ac326f,
              mid_getResults_e62d3bb06d56d7e3,
              mid_getStuffReference_e62d3bb06d56d7e3,
              mid_getMaxTimeBeetween2Measurement_b74f83833fdad017,
              mid_getMinMeasurementNumber_55546ef6a647f39b,
              mid_manageData_e95b94a72b1c921a,
              mid_setName_c8f78fa2214ae788,
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
