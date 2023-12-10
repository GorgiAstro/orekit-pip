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
    namespace time {
      class AbsoluteDate;
      class TimeStamped;
    }
    namespace estimation {
      namespace measurements {
        namespace gnss {
          class CombinedObservationData;
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

          class CombinedObservationDataSet : public ::java::lang::Object {
           public:
            enum {
              mid_init$_78879f88aa7807cd,
              mid_getDate_85703d13e302437e,
              mid_getObservationData_2afa36052df4765d,
              mid_getPrnNumber_570ce0828f81a2c1,
              mid_getRcvrClkOffset_dff5885c2c873297,
              mid_getSatelliteSystem_01acae5c1a253b8e,
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
