#ifndef org_orekit_files_rinex_observation_ObservationDataSet_H
#define org_orekit_files_rinex_observation_ObservationDataSet_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace observation {
          class ObservationData;
        }
      }
    }
    namespace gnss {
      class SatInSystem;
    }
    namespace time {
      class AbsoluteDate;
      class TimeStamped;
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
    namespace files {
      namespace rinex {
        namespace observation {

          class ObservationDataSet : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3617e5a957fde8c1,
              mid_getDate_85703d13e302437e,
              mid_getEventFlag_570ce0828f81a2c1,
              mid_getObservationData_2afa36052df4765d,
              mid_getRcvrClkOffset_dff5885c2c873297,
              mid_getSatellite_7c0ce8c834d2e72b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ObservationDataSet(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ObservationDataSet(const ObservationDataSet& obj) : ::java::lang::Object(obj) {}

            ObservationDataSet(const ::org::orekit::gnss::SatInSystem &, const ::org::orekit::time::AbsoluteDate &, jint, jdouble, const ::java::util::List &);

            ::org::orekit::time::AbsoluteDate getDate() const;
            jint getEventFlag() const;
            ::java::util::List getObservationData() const;
            jdouble getRcvrClkOffset() const;
            ::org::orekit::gnss::SatInSystem getSatellite() const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace observation {
          extern PyType_Def PY_TYPE_DEF(ObservationDataSet);
          extern PyTypeObject *PY_TYPE(ObservationDataSet);

          class t_ObservationDataSet {
          public:
            PyObject_HEAD
            ObservationDataSet object;
            static PyObject *wrap_Object(const ObservationDataSet&);
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
