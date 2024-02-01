#ifndef org_orekit_files_rinex_observation_ObservationDataSet_H
#define org_orekit_files_rinex_observation_ObservationDataSet_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace gnss {
      class SatInSystem;
    }
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
              mid_init$_125cb626199f9e9a,
              mid_getDate_80e11148db499dda,
              mid_getEventFlag_d6ab429752e7c267,
              mid_getObservationData_d751c1a57012b438,
              mid_getRcvrClkOffset_9981f74b2d109da6,
              mid_getSatellite_25eb770be3a2890a,
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
