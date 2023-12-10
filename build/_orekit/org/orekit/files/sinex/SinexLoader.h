#ifndef org_orekit_files_sinex_SinexLoader_H
#define org_orekit_files_sinex_SinexLoader_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sinex {
        class Station;
        class DcbSatellite;
        class SinexEopEntry;
        class DcbStation;
      }
    }
    namespace frames {
      class EOPEntry;
      class ITRFVersion;
      class EopHistoryLoader;
    }
    namespace data {
      class DataProvidersManager;
      class DataSource;
    }
    namespace time {
      class TimeScales;
      class AbsoluteDate;
    }
    namespace utils {
      class IERSConventions$NutationCorrectionConverter;
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
            mid_init$_d0bc48d5b00dc40c,
            mid_init$_579dcb2bf229954b,
            mid_init$_6889f18263b76403,
            mid_init$_4449ecb3aa08e27f,
            mid_fillHistory_fcb7f5d6983b9f18,
            mid_getCreationDate_85703d13e302437e,
            mid_getDcbSatellite_4f9c8feccc3d9a44,
            mid_getDcbStation_2a0ca7547eaf333a,
            mid_getFileEpochEndTime_85703d13e302437e,
            mid_getFileEpochStartTime_85703d13e302437e,
            mid_getITRFVersion_8a73c81b6e5084ce,
            mid_getParsedEop_6f5a75ccd8c04465,
            mid_getStation_07ba7e9f9a463aac,
            mid_getStations_6f5a75ccd8c04465,
            mid_setITRFVersion_99803b0791f320ff,
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
