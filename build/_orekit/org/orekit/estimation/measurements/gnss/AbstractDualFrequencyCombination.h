#ifndef org_orekit_estimation_measurements_gnss_AbstractDualFrequencyCombination_H
#define org_orekit_estimation_measurements_gnss_AbstractDualFrequencyCombination_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {
          class MeasurementCombination;
          class CombinedObservationDataSet;
          class CombinedObservationData;
        }
      }
    }
    namespace files {
      namespace rinex {
        namespace observation {
          class ObservationData;
          class ObservationDataSet;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          class AbstractDualFrequencyCombination : public ::java::lang::Object {
           public:
            enum {
              mid_combine_82c5de1a9cc4c5da,
              mid_combine_54b5aea6b6555487,
              mid_getName_3cffd47377eca18a,
              mid_getCombinedValue_1aca6111050d8282,
              mid_getCombinedFrequency_ec5e21d51ba3cb9a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit AbstractDualFrequencyCombination(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            AbstractDualFrequencyCombination(const AbstractDualFrequencyCombination& obj) : ::java::lang::Object(obj) {}

            static jdouble MHZ_TO_HZ;

            ::org::orekit::estimation::measurements::gnss::CombinedObservationDataSet combine(const ::org::orekit::files::rinex::observation::ObservationDataSet &) const;
            ::org::orekit::estimation::measurements::gnss::CombinedObservationData combine(const ::org::orekit::files::rinex::observation::ObservationData &, const ::org::orekit::files::rinex::observation::ObservationData &) const;
            ::java::lang::String getName() const;
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
          extern PyType_Def PY_TYPE_DEF(AbstractDualFrequencyCombination);
          extern PyTypeObject *PY_TYPE(AbstractDualFrequencyCombination);

          class t_AbstractDualFrequencyCombination {
          public:
            PyObject_HEAD
            AbstractDualFrequencyCombination object;
            static PyObject *wrap_Object(const AbstractDualFrequencyCombination&);
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
