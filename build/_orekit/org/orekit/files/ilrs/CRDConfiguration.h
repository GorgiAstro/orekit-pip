#ifndef org_orekit_files_ilrs_CRDConfiguration_H
#define org_orekit_files_ilrs_CRDConfiguration_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {
        class CRDConfiguration$MeteorologicalConfiguration;
        class CRDConfiguration$BaseConfiguration;
        class CRDConfiguration$TransponderConfiguration;
        class CRDConfiguration$SystemConfiguration;
        class CRDConfiguration$LaserConfiguration;
        class CRDConfiguration$TimingSystemConfiguration;
        class CRDConfiguration$DetectorConfiguration;
        class CRDConfiguration$SoftwareConfiguration;
        class CRDConfiguration$CalibrationTargetConfiguration;
      }
    }
  }
}
namespace java {
  namespace util {
    class Map;
    class List;
    class Set;
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
      namespace ilrs {

        class CRDConfiguration : public ::java::lang::Object {
         public:
          enum {
            mid_init$_ff7cb6c242604316,
            mid_addConfigurationRecord_11245a520c9c98e7,
            mid_getCalibrationTargetRecord_6e8e873c75001146,
            mid_getCalibrationTargetRecord_4b2ea46ed3fc3e9d,
            mid_getConfigurationRecord_33f8649bcc299ca9,
            mid_getConfigurationRecordMap_dbcb8bbac6b35e0d,
            mid_getDetectorRecord_392d35737f512715,
            mid_getDetectorRecord_e6f973aab4d967f8,
            mid_getLaserRecord_63d9d008da5c7396,
            mid_getLaserRecord_0247691365fa7c76,
            mid_getLastSystemRecord_4483bde962d92750,
            mid_getMeteorologicalRecord_02c143d56de1a9aa,
            mid_getMeteorologicalRecord_3eca2340c6fce9fa,
            mid_getSoftwareRecord_58a9b47752cd2839,
            mid_getSoftwareRecord_2ee27eb48b772397,
            mid_getSystemConfigurationIds_6b191a9b12c1004b,
            mid_getSystemConfigurationRecords_d751c1a57012b438,
            mid_getSystemRecord_4483bde962d92750,
            mid_getSystemRecord_37e2c7548a758507,
            mid_getTimingRecord_3abf7a81b854aeef,
            mid_getTimingRecord_0f7add600b6f2cb1,
            mid_getTransponderRecord_fff0218714836f9b,
            mid_getTransponderRecord_250ed8028bb49849,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CRDConfiguration(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CRDConfiguration(const CRDConfiguration& obj) : ::java::lang::Object(obj) {}

          CRDConfiguration();

          void addConfigurationRecord(const ::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration &) const;
          ::org::orekit::files::ilrs::CRDConfiguration$CalibrationTargetConfiguration getCalibrationTargetRecord() const;
          ::org::orekit::files::ilrs::CRDConfiguration$CalibrationTargetConfiguration getCalibrationTargetRecord(const ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration &) const;
          ::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration getConfigurationRecord(const ::java::lang::String &) const;
          ::java::util::Map getConfigurationRecordMap() const;
          ::org::orekit::files::ilrs::CRDConfiguration$DetectorConfiguration getDetectorRecord() const;
          ::org::orekit::files::ilrs::CRDConfiguration$DetectorConfiguration getDetectorRecord(const ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration &) const;
          ::org::orekit::files::ilrs::CRDConfiguration$LaserConfiguration getLaserRecord() const;
          ::org::orekit::files::ilrs::CRDConfiguration$LaserConfiguration getLaserRecord(const ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration &) const;
          ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration getLastSystemRecord() const;
          ::org::orekit::files::ilrs::CRDConfiguration$MeteorologicalConfiguration getMeteorologicalRecord() const;
          ::org::orekit::files::ilrs::CRDConfiguration$MeteorologicalConfiguration getMeteorologicalRecord(const ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration &) const;
          ::org::orekit::files::ilrs::CRDConfiguration$SoftwareConfiguration getSoftwareRecord() const;
          ::org::orekit::files::ilrs::CRDConfiguration$SoftwareConfiguration getSoftwareRecord(const ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration &) const;
          ::java::util::Set getSystemConfigurationIds() const;
          ::java::util::List getSystemConfigurationRecords() const;
          ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration getSystemRecord() const;
          ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration getSystemRecord(const ::java::lang::String &) const;
          ::org::orekit::files::ilrs::CRDConfiguration$TimingSystemConfiguration getTimingRecord() const;
          ::org::orekit::files::ilrs::CRDConfiguration$TimingSystemConfiguration getTimingRecord(const ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration &) const;
          ::org::orekit::files::ilrs::CRDConfiguration$TransponderConfiguration getTransponderRecord() const;
          ::org::orekit::files::ilrs::CRDConfiguration$TransponderConfiguration getTransponderRecord(const ::org::orekit::files::ilrs::CRDConfiguration$SystemConfiguration &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {
        extern PyType_Def PY_TYPE_DEF(CRDConfiguration);
        extern PyTypeObject *PY_TYPE(CRDConfiguration);

        class t_CRDConfiguration {
        public:
          PyObject_HEAD
          CRDConfiguration object;
          static PyObject *wrap_Object(const CRDConfiguration&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
