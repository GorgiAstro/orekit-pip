#ifndef org_orekit_files_sinex_SinexLoader_H
#define org_orekit_files_sinex_SinexLoader_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Map;
    class SortedSet;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace files {
      namespace sinex {
        class Station;
        class DcbSatellite;
        class DcbStation;
        class SinexEopEntry;
      }
    }
    namespace time {
      class AbsoluteDate;
      class TimeScales;
    }
    namespace frames {
      class EOPEntry;
      class ITRFVersion;
      class EopHistoryLoader;
    }
    namespace data {
      class DataSource;
      class DataProvidersManager;
    }
    namespace utils {
      class IERSConventions$NutationCorrectionConverter;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace sinex {

        class SinexLoader : public ::java::lang::Object {
         public:
          enum {
            mid_init$_105e1eadb709d9ac,
            mid_init$_023df3a7dca17c03,
            mid_init$_71f9c35d068ceff3,
            mid_init$_23ada22a1e61cacc,
            mid_fillHistory_09d2fc89df23cd1a,
            mid_getCreationDate_80e11148db499dda,
            mid_getDcbSatellite_4b30c7d0b08cbb9f,
            mid_getDcbStation_ce8e09d11b4ad7bc,
            mid_getFileEpochEndTime_80e11148db499dda,
            mid_getFileEpochStartTime_80e11148db499dda,
            mid_getITRFVersion_4865f340ec39b9c4,
            mid_getParsedEop_dbcb8bbac6b35e0d,
            mid_getStation_a57da290771c14bb,
            mid_getStations_dbcb8bbac6b35e0d,
            mid_setITRFVersion_8fd427ab23829bf5,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SinexLoader(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SinexLoader(const SinexLoader& obj) : ::java::lang::Object(obj) {}

          SinexLoader(const ::java::lang::String &);
          SinexLoader(const ::org::orekit::data::DataSource &);
          SinexLoader(const ::org::orekit::data::DataSource &, const ::org::orekit::time::TimeScales &);
          SinexLoader(const ::java::lang::String &, const ::org::orekit::data::DataProvidersManager &, const ::org::orekit::time::TimeScales &);

          void fillHistory(const ::org::orekit::utils::IERSConventions$NutationCorrectionConverter &, const ::java::util::SortedSet &) const;
          ::org::orekit::time::AbsoluteDate getCreationDate() const;
          ::org::orekit::files::sinex::DcbSatellite getDcbSatellite(const ::java::lang::String &) const;
          ::org::orekit::files::sinex::DcbStation getDcbStation(const ::java::lang::String &) const;
          ::org::orekit::time::AbsoluteDate getFileEpochEndTime() const;
          ::org::orekit::time::AbsoluteDate getFileEpochStartTime() const;
          ::org::orekit::frames::ITRFVersion getITRFVersion() const;
          ::java::util::Map getParsedEop() const;
          ::org::orekit::files::sinex::Station getStation(const ::java::lang::String &) const;
          ::java::util::Map getStations() const;
          void setITRFVersion(jint) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace files {
      namespace sinex {
        extern PyType_Def PY_TYPE_DEF(SinexLoader);
        extern PyTypeObject *PY_TYPE(SinexLoader);

        class t_SinexLoader {
        public:
          PyObject_HEAD
          SinexLoader object;
          static PyObject *wrap_Object(const SinexLoader&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
