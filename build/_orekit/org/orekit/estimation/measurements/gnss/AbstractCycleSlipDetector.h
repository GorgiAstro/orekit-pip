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
              mid_detect_a27502c31bd75a45,
              mid_manageData_d75e9b743ecf20cb,
              mid_getMinMeasurementNumber_d6ab429752e7c267,
              mid_getMaxTimeBeetween2Measurement_9981f74b2d109da6,
              mid_getResults_d751c1a57012b438,
              mid_getStuffReference_d751c1a57012b438,
              mid_cycleSlipDataSet_417cb06bfd27f642,
              mid_setName_69ce224351e794e7,
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
