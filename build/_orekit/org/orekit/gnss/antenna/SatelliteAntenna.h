#ifndef org_orekit_gnss_antenna_SatelliteAntenna_H
#define org_orekit_gnss_antenna_SatelliteAntenna_H

#include "org/orekit/gnss/antenna/Antenna.h"

namespace java {
  namespace util {
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
      class SatelliteSystem;
      class Frequency;
      namespace antenna {
        class FrequencyPattern;
        class SatelliteType;
      }
    }
    namespace time {
      class AbsoluteDate;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace gnss {
      namespace antenna {

        class SatelliteAntenna : public ::org::orekit::gnss::antenna::Antenna {
         public:
          enum {
            mid_init$_2c67d92af369348d,
            mid_getCosparID_0090f7797e403f43,
            mid_getPrnNumber_f2f64475e4580546,
            mid_getSatelliteCode_f2f64475e4580546,
            mid_getSatelliteSystem_1b72fcc8f550bfc7,
            mid_getSatelliteType_334ebad3fd252e3f,
            mid_getValidFrom_aaa854c403487cf3,
            mid_getValidUntil_aaa854c403487cf3,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SatelliteAntenna(jobject obj) : ::org::orekit::gnss::antenna::Antenna(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SatelliteAntenna(const SatelliteAntenna& obj) : ::org::orekit::gnss::antenna::Antenna(obj) {}

          SatelliteAntenna(const ::java::lang::String &, const ::java::lang::String &, const ::java::util::Map &, const ::org::orekit::gnss::SatelliteSystem &, jint, const ::org::orekit::gnss::antenna::SatelliteType &, jint, const ::java::lang::String &, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::time::AbsoluteDate &);

          ::java::lang::String getCosparID() const;
          jint getPrnNumber() const;
          jint getSatelliteCode() const;
          ::org::orekit::gnss::SatelliteSystem getSatelliteSystem() const;
          ::org::orekit::gnss::antenna::SatelliteType getSatelliteType() const;
          ::org::orekit::time::AbsoluteDate getValidFrom() const;
          ::org::orekit::time::AbsoluteDate getValidUntil() const;
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
        extern PyType_Def PY_TYPE_DEF(SatelliteAntenna);
        extern PyTypeObject *PY_TYPE(SatelliteAntenna);

        class t_SatelliteAntenna {
        public:
          PyObject_HEAD
          SatelliteAntenna object;
          static PyObject *wrap_Object(const SatelliteAntenna&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
