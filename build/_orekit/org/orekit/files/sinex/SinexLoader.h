#ifndef org_orekit_files_sinex_SinexLoader_H
#define org_orekit_files_sinex_SinexLoader_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace utils {
      class IERSConventions$NutationCorrectionConverter;
    }
    namespace files {
      namespace sinex {
        class DcbSatellite;
        class SinexEopEntry;
        class DcbStation;
        class Station;
      }
    }
    namespace data {
      class DataSource;
      class DataProvidersManager;
    }
    namespace frames {
      class EOPEntry;
      class EopHistoryLoader;
      class ITRFVersion;
    }
    namespace time {
      class TimeScales;
      class AbsoluteDate;
    }
  }
}
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
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace sinex {

        class SinexLoader : public ::java::lang::Object {
         public:
          enum {
            mid_init$_734b91ac30d5f9b4,
            mid_init$_4345325324782fee,
            mid_init$_f266484a594a0c99,
            mid_init$_6d628f04453f432c,
            mid_fillHistory_f091b90ef4456eb3,
            mid_getCreationDate_c325492395d89b24,
            mid_getDcbSatellite_8fdf962db5d73394,
            mid_getDcbStation_e8c6abf43cbaa30c,
            mid_getFileEpochEndTime_c325492395d89b24,
            mid_getFileEpochStartTime_c325492395d89b24,
            mid_getITRFVersion_8bcdfad365f6d36a,
            mid_getParsedEop_810bed48fafb0b9a,
            mid_getStation_d0046006e4a0f7f7,
            mid_getStations_810bed48fafb0b9a,
            mid_setITRFVersion_44ed599e93e8a30c,
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
