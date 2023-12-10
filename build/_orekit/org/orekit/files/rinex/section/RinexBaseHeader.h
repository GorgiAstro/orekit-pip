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
              mid_getCreationDate_85703d13e302437e,
              mid_getCreationDateComponents_386b3d55806dafec,
              mid_getCreationTimeZone_11b109bd155ca898,
              mid_getDoi_11b109bd155ca898,
              mid_getFileType_b92f51e56d431d9f,
              mid_getFormatVersion_dff5885c2c873297,
              mid_getLicense_11b109bd155ca898,
              mid_getProgramName_11b109bd155ca898,
              mid_getRunByName_11b109bd155ca898,
              mid_getSatelliteSystem_01acae5c1a253b8e,
              mid_getStationInformation_11b109bd155ca898,
              mid_setCreationDate_600a2a61652bc473,
              mid_setCreationDateComponents_4d63b530baf1ccb7,
              mid_setCreationTimeZone_d0bc48d5b00dc40c,
              mid_setDoi_d0bc48d5b00dc40c,
              mid_setFormatVersion_17db3a65980d3441,
              mid_setLicense_d0bc48d5b00dc40c,
              mid_setProgramName_d0bc48d5b00dc40c,
              mid_setRunByName_d0bc48d5b00dc40c,
              mid_setSatelliteSystem_10d44f5686b1d39e,
              mid_setStationInformation_d0bc48d5b00dc40c,
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
