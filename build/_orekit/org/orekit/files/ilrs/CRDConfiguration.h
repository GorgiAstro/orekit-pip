#ifndef org_orekit_files_ilrs_CRDConfiguration_H
#define org_orekit_files_ilrs_CRDConfiguration_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {
        class CRDConfiguration$TransponderConfiguration;
        class CRDConfiguration$SoftwareConfiguration;
        class CRDConfiguration$DetectorConfiguration;
        class CRDConfiguration$BaseConfiguration;
        class CRDConfiguration$LaserConfiguration;
        class CRDConfiguration$MeteorologicalConfiguration;
        class CRDConfiguration$SystemConfiguration;
        class CRDConfiguration$TimingSystemConfiguration;
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
            mid_init$_a1fa5dae97ea5ed2,
            mid_addConfigurationRecord_f1b594df82bfed08,
            mid_getCalibrationTargetRecord_db6bb1f1065e5821,
            mid_getCalibrationTargetRecord_445ac2923880777e,
            mid_getConfigurationRecord_01eed6bceae98227,
            mid_getConfigurationRecordMap_810bed48fafb0b9a,
            mid_getDetectorRecord_fbeba91b97dc9438,
            mid_getDetectorRecord_7d8ffbbca01ee45d,
            mid_getLaserRecord_3da64c57c8fb5a61,
            mid_getLaserRecord_21d3ab247db7335a,
            mid_getLastSystemRecord_ffed19394f3022ee,
            mid_getMeteorologicalRecord_90978aa34fe79fd7,
            mid_getMeteorologicalRecord_f4f67e33c7c208e8,
            mid_getSoftwareRecord_8e11b72a62138a38,
            mid_getSoftwareRecord_2d01fb7d10c0c14a,
            mid_getSystemConfigurationIds_7e8f11dd23d1142c,
            mid_getSystemConfigurationRecords_e62d3bb06d56d7e3,
            mid_getSystemRecord_ffed19394f3022ee,
            mid_getSystemRecord_9bd899069035f776,
            mid_getTimingRecord_455c4ecc118e8d50,
            mid_getTimingRecord_8f4aa879682f3fa7,
            mid_getTransponderRecord_4143a03a9931db89,
            mid_getTransponderRecord_6397dd21406495e1,
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
