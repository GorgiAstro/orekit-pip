#ifndef org_orekit_files_rinex_section_RinexBaseHeader_H
#define org_orekit_files_rinex_section_RinexBaseHeader_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace gnss {
      class SatelliteSystem;
    }
    namespace time {
      class DateTimeComponents;
      class AbsoluteDate;
    }
    namespace files {
      namespace rinex {
        namespace utils {
          class RinexFileType;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace section {

          class RinexBaseHeader : public ::java::lang::Object {
           public:
            enum {
              mid_getCreationDate_c325492395d89b24,
              mid_getCreationDateComponents_e6d4d2bcc05de999,
              mid_getCreationTimeZone_1c1fa1e935d6cdcf,
              mid_getDoi_1c1fa1e935d6cdcf,
              mid_getFileType_0bcb8d05df71c050,
              mid_getFormatVersion_b74f83833fdad017,
              mid_getLicense_1c1fa1e935d6cdcf,
              mid_getProgramName_1c1fa1e935d6cdcf,
              mid_getRunByName_1c1fa1e935d6cdcf,
              mid_getSatelliteSystem_21bd759cc4a81606,
              mid_getStationInformation_1c1fa1e935d6cdcf,
              mid_setCreationDate_02135a6ef25adb4b,
              mid_setCreationDateComponents_0ae14a6b384129f2,
              mid_setCreationTimeZone_734b91ac30d5f9b4,
              mid_setDoi_734b91ac30d5f9b4,
              mid_setFormatVersion_8ba9fe7a847cecad,
              mid_setLicense_734b91ac30d5f9b4,
              mid_setProgramName_734b91ac30d5f9b4,
              mid_setRunByName_734b91ac30d5f9b4,
              mid_setSatelliteSystem_cfddc646eebc7104,
              mid_setStationInformation_734b91ac30d5f9b4,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit RinexBaseHeader(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            RinexBaseHeader(const RinexBaseHeader& obj) : ::java::lang::Object(obj) {}

            ::org::orekit::time::AbsoluteDate getCreationDate() const;
            ::org::orekit::time::DateTimeComponents getCreationDateComponents() const;
            ::java::lang::String getCreationTimeZone() const;
            ::java::lang::String getDoi() const;
            ::org::orekit::files::rinex::utils::RinexFileType getFileType() const;
            jdouble getFormatVersion() const;
            ::java::lang::String getLicense() const;
            ::java::lang::String getProgramName() const;
            ::java::lang::String getRunByName() const;
            ::org::orekit::gnss::SatelliteSystem getSatelliteSystem() const;
            ::java::lang::String getStationInformation() const;
            void setCreationDate(const ::org::orekit::time::AbsoluteDate &) const;
            void setCreationDateComponents(const ::org::orekit::time::DateTimeComponents &) const;
            void setCreationTimeZone(const ::java::lang::String &) const;
            void setDoi(const ::java::lang::String &) const;
            void setFormatVersion(jdouble) const;
            void setLicense(const ::java::lang::String &) const;
            void setProgramName(const ::java::lang::String &) const;
            void setRunByName(const ::java::lang::String &) const;
            void setSatelliteSystem(const ::org::orekit::gnss::SatelliteSystem &) const;
            void setStationInformation(const ::java::lang::String &) const;
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
        namespace section {
          extern PyType_Def PY_TYPE_DEF(RinexBaseHeader);
          extern PyTypeObject *PY_TYPE(RinexBaseHeader);

          class t_RinexBaseHeader {
          public:
            PyObject_HEAD
            RinexBaseHeader object;
            static PyObject *wrap_Object(const RinexBaseHeader&);
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
