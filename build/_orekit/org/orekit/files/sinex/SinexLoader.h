#ifndef org_orekit_files_sinex_SinexLoader_H
#define org_orekit_files_sinex_SinexLoader_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sinex {
        class DcbSatellite;
        class Station;
        class SinexEopEntry;
        class DcbStation;
      }
    }
    namespace data {
      class DataSource;
      class DataProvidersManager;
    }
    namespace frames {
      class EopHistoryLoader;
      class EOPEntry;
      class ITRFVersion;
    }
    namespace utils {
      class IERSConventions$NutationCorrectionConverter;
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
            mid_init$_f5ffdf29129ef90a,
            mid_init$_562a84d0b1d0d772,
            mid_init$_34c18f1fe190c73a,
            mid_init$_f930d4f5e3f73cb2,
            mid_fillHistory_dc8806c52abe2b9d,
            mid_getCreationDate_7a97f7e149e79afb,
            mid_getDcbSatellite_fa842dcb3ed5687b,
            mid_getDcbStation_fb9454879306a98e,
            mid_getFileEpochEndTime_7a97f7e149e79afb,
            mid_getFileEpochStartTime_7a97f7e149e79afb,
            mid_getITRFVersion_b311296551ce8af2,
            mid_getParsedEop_1e62c2f73fbdd1c4,
            mid_getStation_beceb8c30b4a6974,
            mid_getStations_1e62c2f73fbdd1c4,
            mid_setITRFVersion_a3da1a935cb37f7b,
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
