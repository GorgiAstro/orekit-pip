#ifndef org_orekit_estimation_measurements_gnss_MelbourneWubbenaCombination_H
#define org_orekit_estimation_measurements_gnss_MelbourneWubbenaCombination_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {
          class CombinedObservationDataSet;
          class MeasurementCombination;
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

          class MelbourneWubbenaCombination : public ::java::lang::Object {
           public:
            enum {
              mid_combine_d8c8276403544c3f,
              mid_getName_0090f7797e403f43,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit MelbourneWubbenaCombination(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            MelbourneWubbenaCombination(const MelbourneWubbenaCombination& obj) : ::java::lang::Object(obj) {}

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
          extern PyType_Def PY_TYPE_DEF(MelbourneWubbenaCombination);
          extern PyTypeObject *PY_TYPE(MelbourneWubbenaCombination);

          class t_MelbourneWubbenaCombination {
          public:
            PyObject_HEAD
            MelbourneWubbenaCombination object;
            static PyObject *wrap_Object(const MelbourneWubbenaCombination&);
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
