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
      class DateTimeComponents;
      class AbsoluteDate;
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
              mid_getCreationDate_aaa854c403487cf3,
              mid_getCreationDateComponents_e3c5f80897e753d6,
              mid_getCreationTimeZone_0090f7797e403f43,
              mid_getDoi_0090f7797e403f43,
              mid_getFileType_28f7342554538782,
              mid_getFormatVersion_456d9a2f64d6b28d,
              mid_getLicense_0090f7797e403f43,
              mid_getProgramName_0090f7797e403f43,
              mid_getRunByName_0090f7797e403f43,
              mid_getSatelliteSystem_1b72fcc8f550bfc7,
              mid_getStationInformation_0090f7797e403f43,
              mid_setCreationDate_e82d68cd9f886886,
              mid_setCreationDateComponents_994b26ed44999e86,
              mid_setCreationTimeZone_e939c6558ae8d313,
              mid_setDoi_e939c6558ae8d313,
              mid_setFormatVersion_77e0f9a1f260e2e5,
              mid_setLicense_e939c6558ae8d313,
              mid_setProgramName_e939c6558ae8d313,
              mid_setRunByName_e939c6558ae8d313,
              mid_setSatelliteSystem_a9204a81fe55aebe,
              mid_setStationInformation_e939c6558ae8d313,
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
