#ifndef org_orekit_files_ilrs_CRDConfiguration_H
#define org_orekit_files_ilrs_CRDConfiguration_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {
        class CRDConfiguration$SoftwareConfiguration;
        class CRDConfiguration$BaseConfiguration;
        class CRDConfiguration$LaserConfiguration;
        class CRDConfiguration$SystemConfiguration;
        class CRDConfiguration$CalibrationTargetConfiguration;
        class CRDConfiguration$MeteorologicalConfiguration;
        class CRDConfiguration$TransponderConfiguration;
        class CRDConfiguration$TimingSystemConfiguration;
        class CRDConfiguration$DetectorConfiguration;
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
            mid_init$_7ae3461a92a43152,
            mid_addConfigurationRecord_43bce5c3c245d674,
            mid_getCalibrationTargetRecord_d46fcb0e2c08e5e6,
            mid_getCalibrationTargetRecord_2e4eeb0bce6218e5,
            mid_getConfigurationRecord_d08231771b05f006,
            mid_getConfigurationRecordMap_d6753b7055940a54,
            mid_getDetectorRecord_79c23328a6086e61,
            mid_getDetectorRecord_7c33dc2714e034d3,
            mid_getLaserRecord_196962bc7339c5e1,
            mid_getLaserRecord_8cf14eea7e190019,
            mid_getLastSystemRecord_828d49b4ed6324e0,
            mid_getMeteorologicalRecord_c1ce446adb70c413,
            mid_getMeteorologicalRecord_b5ed8cba9094b0a2,
            mid_getSoftwareRecord_8613c1e2be43317c,
            mid_getSoftwareRecord_64fcb6bbee2d58d6,
            mid_getSystemConfigurationIds_e9e1a6780fe94297,
            mid_getSystemConfigurationRecords_a6156df500549a58,
            mid_getSystemRecord_828d49b4ed6324e0,
            mid_getSystemRecord_2662eb82a9f4a14d,
            mid_getTimingRecord_1c6190f91b1ddeec,
            mid_getTimingRecord_8275c3cbe919ac21,
            mid_getTransponderRecord_fe34e3b193be0757,
            mid_getTransponderRecord_0b6199f6050cc84b,
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
