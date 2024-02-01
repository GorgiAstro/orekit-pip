#ifndef org_orekit_files_rinex_section_RinexBaseHeader_H
#define org_orekit_files_rinex_section_RinexBaseHeader_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace utils {
          class RinexFileType;
        }
      }
    }
    namespace gnss {
      class SatelliteSystem;
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
              mid_getCreationDate_80e11148db499dda,
              mid_getCreationDateComponents_db63232a87504284,
              mid_getCreationTimeZone_d2c8eb4129821f0e,
              mid_getDoi_d2c8eb4129821f0e,
              mid_getFileType_a5f8167d1760daff,
              mid_getFormatVersion_9981f74b2d109da6,
              mid_getLicense_d2c8eb4129821f0e,
              mid_getProgramName_d2c8eb4129821f0e,
              mid_getRunByName_d2c8eb4129821f0e,
              mid_getSatelliteSystem_fb0bd27fcc3ba9fc,
              mid_getStationInformation_d2c8eb4129821f0e,
              mid_setCreationDate_8497861b879c83f7,
              mid_setCreationDateComponents_d3c621492f146ad9,
              mid_setCreationTimeZone_105e1eadb709d9ac,
              mid_setDoi_105e1eadb709d9ac,
              mid_setFormatVersion_1ad26e8c8c0cd65b,
              mid_setLicense_105e1eadb709d9ac,
              mid_setProgramName_105e1eadb709d9ac,
              mid_setRunByName_105e1eadb709d9ac,
              mid_setSatelliteSystem_b8157be2fa2780f9,
              mid_setStationInformation_105e1eadb709d9ac,
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
