#ifndef org_orekit_files_ilrs_CRDConfiguration_H
#define org_orekit_files_ilrs_CRDConfiguration_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {
        class CRDConfiguration$TransponderConfiguration;
        class CRDConfiguration$MeteorologicalConfiguration;
        class CRDConfiguration$SystemConfiguration;
        class CRDConfiguration$SoftwareConfiguration;
        class CRDConfiguration$BaseConfiguration;
        class CRDConfiguration$TimingSystemConfiguration;
        class CRDConfiguration$DetectorConfiguration;
        class CRDConfiguration$CalibrationTargetConfiguration;
        class CRDConfiguration$LaserConfiguration;
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
            mid_init$_0fa09c18fee449d5,
            mid_addConfigurationRecord_8b3e0a4f894ba11c,
            mid_getCalibrationTargetRecord_cd6619333c77c489,
            mid_getCalibrationTargetRecord_0252aa917b1bbb85,
            mid_getConfigurationRecord_d7e9ce1cff611013,
            mid_getConfigurationRecordMap_6f5a75ccd8c04465,
            mid_getDetectorRecord_3babdc1b4d9c624c,
            mid_getDetectorRecord_feb4ea0f8f3fdae1,
            mid_getLaserRecord_6c59a5fa09548592,
            mid_getLaserRecord_043e160309ef2428,
            mid_getLastSystemRecord_b48c5787e7261c06,
            mid_getMeteorologicalRecord_beafc3359baf9328,
            mid_getMeteorologicalRecord_4fc2bab4188cd05b,
            mid_getSoftwareRecord_6c2b931616df67e5,
            mid_getSoftwareRecord_93ad485039858a20,
            mid_getSystemConfigurationIds_015730311a5bacdc,
            mid_getSystemConfigurationRecords_2afa36052df4765d,
            mid_getSystemRecord_b48c5787e7261c06,
            mid_getSystemRecord_48486ca5142e08d8,
            mid_getTimingRecord_c51dc370e26c8235,
            mid_getTimingRecord_21955e3768694071,
            mid_getTransponderRecord_d69aacf2155065bf,
            mid_getTransponderRecord_98b46165ac0f93d6,
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
