#ifndef org_orekit_estimation_measurements_gnss_CycleSlipDetectorResults_H
#define org_orekit_estimation_measurements_gnss_CycleSlipDetectorResults_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
    class Map;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace gnss {
      class Frequency;
    }
    namespace time {
      class AbsoluteDate;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          class CycleSlipDetectorResults : public ::java::lang::Object {
           public:
            enum {
              mid_getBeginDate_c60f2986f2919a19,
              mid_getCycleSlipMap_d6753b7055940a54,
              mid_getEndDate_c60f2986f2919a19,
              mid_getSatelliteName_0090f7797e403f43,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CycleSlipDetectorResults(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            CycleSlipDetectorResults(const CycleSlipDetectorResults& obj) : ::java::lang::Object(obj) {}

            ::org::orekit::time::AbsoluteDate getBeginDate(const ::org::orekit::gnss::Frequency &) const;
            ::java::util::Map getCycleSlipMap() const;
            ::org::orekit::time::AbsoluteDate getEndDate(const ::org::orekit::gnss::Frequency &) const;
            ::java::lang::String getSatelliteName() const;
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
          extern PyType_Def PY_TYPE_DEF(CycleSlipDetectorResults);
          extern PyTypeObject *PY_TYPE(CycleSlipDetectorResults);

          class t_CycleSlipDetectorResults {
          public:
            PyObject_HEAD
            CycleSlipDetectorResults object;
            static PyObject *wrap_Object(const CycleSlipDetectorResults&);
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
