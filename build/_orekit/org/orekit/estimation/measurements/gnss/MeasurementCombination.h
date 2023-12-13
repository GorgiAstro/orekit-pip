#ifndef org_orekit_estimation_measurements_gnss_MeasurementCombination_H
#define org_orekit_estimation_measurements_gnss_MeasurementCombination_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace observation {
          class ObservationDataSet;
        }
      }
    }
    namespace estimation {
      namespace measurements {
        namespace gnss {
          class CombinedObservationDataSet;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          class MeasurementCombination : public ::java::lang::Object {
           public:
            enum {
              mid_combine_12b3dc80befaeb6c,
              mid_getName_1c1fa1e935d6cdcf,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit MeasurementCombination(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            MeasurementCombination(const MeasurementCombination& obj) : ::java::lang::Object(obj) {}

            ::org::orekit::estimation::measurements::gnss::CombinedObservationDataSet combine(const ::org::orekit::files::rinex::observation::ObservationDataSet &) const;
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
          extern PyType_Def PY_TYPE_DEF(MeasurementCombination);
          extern PyTypeObject *PY_TYPE(MeasurementCombination);

          class t_MeasurementCombination {
          public:
            PyObject_HEAD
            MeasurementCombination object;
            static PyObject *wrap_Object(const MeasurementCombination&);
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
