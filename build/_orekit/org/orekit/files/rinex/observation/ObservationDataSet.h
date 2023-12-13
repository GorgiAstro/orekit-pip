#ifndef org_orekit_files_rinex_observation_ObservationDataSet_H
#define org_orekit_files_rinex_observation_ObservationDataSet_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class TimeStamped;
      class AbsoluteDate;
    }
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
              mid_init$_53ad3821ecd88139,
              mid_getDate_c325492395d89b24,
              mid_getEventFlag_55546ef6a647f39b,
              mid_getObservationData_e62d3bb06d56d7e3,
              mid_getRcvrClkOffset_b74f83833fdad017,
              mid_getSatellite_8afd42585cbd5311,
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
