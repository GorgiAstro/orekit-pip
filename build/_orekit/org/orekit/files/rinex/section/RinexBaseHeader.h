#ifndef org_orekit_files_rinex_section_RinexBaseHeader_H
#define org_orekit_files_rinex_section_RinexBaseHeader_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace gnss {
      class SatelliteSystem;
    }
    namespace files {
      namespace rinex {
        namespace utils {
          class RinexFileType;
        }
      }
    }
    namespace time {
      class AbsoluteDate;
      class DateTimeComponents;
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
              mid_getCreationDate_7a97f7e149e79afb,
              mid_getCreationDateComponents_36ab2bc94e6368bd,
              mid_getCreationTimeZone_3cffd47377eca18a,
              mid_getDoi_3cffd47377eca18a,
              mid_getFileType_398c2b7f7227cc4c,
              mid_getFormatVersion_557b8123390d8d0c,
              mid_getLicense_3cffd47377eca18a,
              mid_getProgramName_3cffd47377eca18a,
              mid_getRunByName_3cffd47377eca18a,
              mid_getSatelliteSystem_8b86408cc2633961,
              mid_getStationInformation_3cffd47377eca18a,
              mid_setCreationDate_20affcbd28542333,
              mid_setCreationDateComponents_f86c144703aac3d6,
              mid_setCreationTimeZone_f5ffdf29129ef90a,
              mid_setDoi_f5ffdf29129ef90a,
              mid_setFormatVersion_10f281d777284cea,
              mid_setLicense_f5ffdf29129ef90a,
              mid_setProgramName_f5ffdf29129ef90a,
              mid_setRunByName_f5ffdf29129ef90a,
              mid_setSatelliteSystem_b744026f46deda44,
              mid_setStationInformation_f5ffdf29129ef90a,
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
