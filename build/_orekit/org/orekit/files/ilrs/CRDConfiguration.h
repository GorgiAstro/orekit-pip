#ifndef org_orekit_files_ilrs_CRDConfiguration_H
#define org_orekit_files_ilrs_CRDConfiguration_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {
        class CRDConfiguration$SystemConfiguration;
        class CRDConfiguration$TimingSystemConfiguration;
        class CRDConfiguration$TransponderConfiguration;
        class CRDConfiguration$MeteorologicalConfiguration;
        class CRDConfiguration$BaseConfiguration;
        class CRDConfiguration$SoftwareConfiguration;
        class CRDConfiguration$LaserConfiguration;
        class CRDConfiguration$CalibrationTargetConfiguration;
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
            mid_init$_0640e6acf969ed28,
            mid_addConfigurationRecord_3e4532687383a122,
            mid_getCalibrationTargetRecord_896194a39e47435a,
            mid_getCalibrationTargetRecord_788d7a129602bdef,
            mid_getConfigurationRecord_b9f8b56930f02022,
            mid_getConfigurationRecordMap_1e62c2f73fbdd1c4,
            mid_getDetectorRecord_11032c9641e921e3,
            mid_getDetectorRecord_bd201d3a9d72147f,
            mid_getLaserRecord_276b68d6d0f7069c,
            mid_getLaserRecord_ff2241ad652ca0a4,
            mid_getLastSystemRecord_12dde8b8ed260082,
            mid_getMeteorologicalRecord_1c3d837ba88d7a54,
            mid_getMeteorologicalRecord_04c83f934ea83bb1,
            mid_getSoftwareRecord_7336e30d965e56ed,
            mid_getSoftwareRecord_6d7ff85ecb398c09,
            mid_getSystemConfigurationIds_2dfcbd371d62f4e1,
            mid_getSystemConfigurationRecords_0d9551367f7ecdef,
            mid_getSystemRecord_12dde8b8ed260082,
            mid_getSystemRecord_c06a99220828a904,
            mid_getTimingRecord_4ef9bf3ffda3d23f,
            mid_getTimingRecord_fb54cf7f9a5b05bd,
            mid_getTransponderRecord_e037088387a2faa4,
            mid_getTransponderRecord_21789e5cbcd52c6a,
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
