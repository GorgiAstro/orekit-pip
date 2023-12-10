#ifndef org_orekit_files_sinex_SinexLoader_H
#define org_orekit_files_sinex_SinexLoader_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class TimeScales;
      class AbsoluteDate;
    }
    namespace data {
      class DataSource;
      class DataProvidersManager;
    }
    namespace files {
      namespace sinex {
        class DcbStation;
        class SinexEopEntry;
        class Station;
        class DcbSatellite;
      }
    }
    namespace frames {
      class EopHistoryLoader;
      class EOPEntry;
      class ITRFVersion;
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
            mid_init$_e939c6558ae8d313,
            mid_init$_178426610ec237d4,
            mid_init$_a9fa68858cbe60c0,
            mid_init$_4573d2669211524d,
            mid_fillHistory_28ed459287c4a62f,
            mid_getCreationDate_aaa854c403487cf3,
            mid_getDcbSatellite_c577703e59da0bf9,
            mid_getDcbStation_f72313b3c98d0274,
            mid_getFileEpochEndTime_aaa854c403487cf3,
            mid_getFileEpochStartTime_aaa854c403487cf3,
            mid_getITRFVersion_f157e1cf87d45e2d,
            mid_getParsedEop_d6753b7055940a54,
            mid_getStation_a2bc0fa19a96e2ee,
            mid_getStations_d6753b7055940a54,
            mid_setITRFVersion_0a2a1ac2721c0336,
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
