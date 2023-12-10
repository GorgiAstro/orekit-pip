#ifndef org_orekit_estimation_measurements_gnss_AbstractCycleSlipDetector_H
#define org_orekit_estimation_measurements_gnss_AbstractCycleSlipDetector_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {
          class CycleSlipDetectorResults;
          class CycleSlipDetectors;
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
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
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
              mid_detect_667c8a8776700e01,
              mid_getResults_2afa36052df4765d,
              mid_getMinMeasurementNumber_570ce0828f81a2c1,
              mid_getMaxTimeBeetween2Measurement_dff5885c2c873297,
              mid_getStuffReference_2afa36052df4765d,
              mid_cycleSlipDataSet_37ef30963779752d,
              mid_manageData_5e249044f63168db,
              mid_setName_571eb7cd9a331044,
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
