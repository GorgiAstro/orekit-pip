#ifndef org_orekit_estimation_measurements_gnss_CombinedObservationDataSet_H
#define org_orekit_estimation_measurements_gnss_CombinedObservationDataSet_H

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
    namespace gnss {
      class SatelliteSystem;
    }
    namespace estimation {
      namespace measurements {
        namespace gnss {
          class CombinedObservationData;
        }
      }
    }
    namespace time {
      class AbsoluteDate;
      class TimeStamped;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          class CombinedObservationDataSet : public ::java::lang::Object {
           public:
            enum {
              mid_init$_436465e6f8c87d12,
              mid_getDate_7a97f7e149e79afb,
              mid_getObservationData_0d9551367f7ecdef,
              mid_getPrnNumber_412668abc8d889e9,
              mid_getRcvrClkOffset_557b8123390d8d0c,
              mid_getSatelliteSystem_8b86408cc2633961,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CombinedObservationDataSet(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            CombinedObservationDataSet(const CombinedObservationDataSet& obj) : ::java::lang::Object(obj) {}

            CombinedObservationDataSet(const ::org::orekit::gnss::SatelliteSystem &, jint, const ::org::orekit::time::AbsoluteDate &, jdouble, const ::java::util::List &);

            ::org::orekit::time::AbsoluteDate getDate() const;
            ::java::util::List getObservationData() const;
            jint getPrnNumber() const;
            jdouble getRcvrClkOffset() const;
            ::org::orekit::gnss::SatelliteSystem getSatelliteSystem() const;
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
          extern PyType_Def PY_TYPE_DEF(CombinedObservationDataSet);
          extern PyTypeObject *PY_TYPE(CombinedObservationDataSet);

          class t_CombinedObservationDataSet {
          public:
            PyObject_HEAD
            CombinedObservationDataSet object;
            static PyObject *wrap_Object(const CombinedObservationDataSet&);
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
