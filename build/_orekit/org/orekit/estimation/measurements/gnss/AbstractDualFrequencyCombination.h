#ifndef org_orekit_estimation_measurements_gnss_AbstractDualFrequencyCombination_H
#define org_orekit_estimation_measurements_gnss_AbstractDualFrequencyCombination_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {
          class CombinedObservationDataSet;
          class MeasurementCombination;
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
              mid_combine_d8c8276403544c3f,
              mid_combine_f366866d8f2f42c5,
              mid_getName_0090f7797e403f43,
              mid_getCombinedValue_17aea80d13f83b81,
              mid_getCombinedFrequency_f4c99548ccdd1967,
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
