#ifndef org_orekit_gnss_antenna_SatelliteAntenna_H
#define org_orekit_gnss_antenna_SatelliteAntenna_H

#include "org/orekit/gnss/antenna/Antenna.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace antenna {
        class FrequencyPattern;
        class SatelliteType;
      }
      class SatelliteSystem;
      class Frequency;
    }
    namespace time {
      class AbsoluteDate;
    }
  }
}
namespace java {
  namespace util {
    class Map;
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

        class SatelliteAntenna : public ::org::orekit::gnss::antenna::Antenna {
         public:
          enum {
            mid_init$_eb7d5b00e00d07e0,
            mid_getCosparID_d2c8eb4129821f0e,
            mid_getPrnNumber_d6ab429752e7c267,
            mid_getSatelliteCode_d6ab429752e7c267,
            mid_getSatelliteSystem_fb0bd27fcc3ba9fc,
            mid_getSatelliteType_426eb7147e7b0705,
            mid_getValidFrom_80e11148db499dda,
            mid_getValidUntil_80e11148db499dda,
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
