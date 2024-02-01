#ifndef org_orekit_estimation_measurements_gnss_CycleSlipDetectors_H
#define org_orekit_estimation_measurements_gnss_CycleSlipDetectors_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {
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

          class CycleSlipDetectors : public ::java::lang::Object {
           public:
            enum {
              mid_detect_a27502c31bd75a45,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CycleSlipDetectors(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            CycleSlipDetectors(const CycleSlipDetectors& obj) : ::java::lang::Object(obj) {}

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
          extern PyType_Def PY_TYPE_DEF(CycleSlipDetectors);
          extern PyTypeObject *PY_TYPE(CycleSlipDetectors);

          class t_CycleSlipDetectors {
          public:
            PyObject_HEAD
            CycleSlipDetectors object;
            static PyObject *wrap_Object(const CycleSlipDetectors&);
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
