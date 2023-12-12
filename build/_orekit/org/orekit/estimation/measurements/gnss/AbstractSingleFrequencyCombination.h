#ifndef org_orekit_estimation_measurements_gnss_AbstractSingleFrequencyCombination_H
#define org_orekit_estimation_measurements_gnss_AbstractSingleFrequencyCombination_H

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

          class AbstractSingleFrequencyCombination : public ::java::lang::Object {
           public:
            enum {
              mid_combine_82c5de1a9cc4c5da,
              mid_combine_54b5aea6b6555487,
              mid_getName_3cffd47377eca18a,
              mid_getCombinedValue_2268d18be49a6087,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit AbstractSingleFrequencyCombination(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            AbstractSingleFrequencyCombination(const AbstractSingleFrequencyCombination& obj) : ::java::lang::Object(obj) {}

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
          extern PyType_Def PY_TYPE_DEF(AbstractSingleFrequencyCombination);
          extern PyTypeObject *PY_TYPE(AbstractSingleFrequencyCombination);

          class t_AbstractSingleFrequencyCombination {
          public:
            PyObject_HEAD
            AbstractSingleFrequencyCombination object;
            static PyObject *wrap_Object(const AbstractSingleFrequencyCombination&);
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
