#ifndef org_orekit_gnss_antenna_AntexLoader_H
#define org_orekit_gnss_antenna_AntexLoader_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace gnss {
      class SatelliteSystem;
      namespace antenna {
        class ReceiverAntenna;
        class SatelliteAntenna;
      }
    }
    namespace data {
      class DataSource;
      class DataProvidersManager;
    }
    namespace utils {
      class TimeSpanMap;
    }
    namespace time {
      class TimeScale;
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace gnss {
      namespace antenna {

        class AntexLoader : public ::java::lang::Object {
         public:
          enum {
            mid_init$_734b91ac30d5f9b4,
            mid_init$_e81bfdc1c9755e45,
            mid_init$_41d9572e040b2cb7,
            mid_findSatelliteAntenna_ff170e96d84d4099,
            mid_getReceiversAntennas_e62d3bb06d56d7e3,
            mid_getSatellitesAntennas_e62d3bb06d56d7e3,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AntexLoader(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AntexLoader(const AntexLoader& obj) : ::java::lang::Object(obj) {}

          static ::java::lang::String *DEFAULT_ANTEX_SUPPORTED_NAMES;

          AntexLoader(const ::java::lang::String &);
          AntexLoader(const ::org::orekit::data::DataSource &, const ::org::orekit::time::TimeScale &);
          AntexLoader(const ::java::lang::String &, const ::org::orekit::data::DataProvidersManager &, const ::org::orekit::time::TimeScale &);

          ::org::orekit::utils::TimeSpanMap findSatelliteAntenna(const ::org::orekit::gnss::SatelliteSystem &, jint) const;
          ::java::util::List getReceiversAntennas() const;
          ::java::util::List getSatellitesAntennas() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace gnss {
      namespace antenna {
        extern PyType_Def PY_TYPE_DEF(AntexLoader);
        extern PyTypeObject *PY_TYPE(AntexLoader);

        class t_AntexLoader {
        public:
          PyObject_HEAD
          AntexLoader object;
          static PyObject *wrap_Object(const AntexLoader&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
