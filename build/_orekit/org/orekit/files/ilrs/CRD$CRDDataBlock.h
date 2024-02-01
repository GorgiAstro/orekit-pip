#ifndef org_orekit_files_ilrs_CRD$CRDDataBlock_H
#define org_orekit_files_ilrs_CRD$CRDDataBlock_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {
        class CRDHeader;
        class CRDConfiguration;
        class CRD$RangeMeasurement;
        class CRD$SessionStatistics;
        class CRD$RangeSupplement;
        class CRD$Calibration;
        class CRD$Meteo;
        class CRD$MeteorologicalMeasurement;
        class CRD$CalibrationDetail;
        class CRD$AnglesMeasurement;
      }
    }
  }
}
namespace java {
  namespace util {
    class List;
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

        class CRD$CRDDataBlock : public ::java::lang::Object {
         public:
          enum {
            mid_init$_ff7cb6c242604316,
            mid_addAnglesData_f2bfac9037809054,
            mid_addCalibrationData_6e0dd2e157f1601a,
            mid_addCalibrationDetailData_9b13cbecc6b3c8a9,
            mid_addMeteoData_a1ca9231f470ea62,
            mid_addRangeData_9ce32cf0c78fd5bf,
            mid_addRangeSupplementData_9233cb8f8891c1ab,
            mid_addSessionStatisticsData_c254e9fe3de7546e,
            mid_getAnglesData_d751c1a57012b438,
            mid_getCalibrationData_d751c1a57012b438,
            mid_getCalibrationDetailData_d751c1a57012b438,
            mid_getCalibrationDetailRecords_d751c1a57012b438,
            mid_getCalibrationDetailRecords_7a823e7285fdf3d6,
            mid_getCalibrationRecords_d751c1a57012b438,
            mid_getCalibrationRecords_7a823e7285fdf3d6,
            mid_getConfigurationRecords_6e32e8b866334f5e,
            mid_getHeader_d0b4695981cdbc10,
            mid_getMeteoData_a2084375ef6ad5f8,
            mid_getRangeData_d751c1a57012b438,
            mid_getRangeSupplementData_d751c1a57012b438,
            mid_getSessionStatisticsData_d751c1a57012b438,
            mid_getSessionStatisticsRecord_5326ab78ce7f8b48,
            mid_getSessionStatisticsRecord_3b6d4cff27a39031,
            mid_getWavelength_3cf80904f47a50fa,
            mid_setConfigurationRecords_ad84646f4832598c,
            mid_setHeader_6708e6c1ee816130,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CRD$CRDDataBlock(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CRD$CRDDataBlock(const CRD$CRDDataBlock& obj) : ::java::lang::Object(obj) {}

          CRD$CRDDataBlock();

          void addAnglesData(const ::org::orekit::files::ilrs::CRD$AnglesMeasurement &) const;
          void addCalibrationData(const ::org::orekit::files::ilrs::CRD$Calibration &) const;
          void addCalibrationDetailData(const ::org::orekit::files::ilrs::CRD$CalibrationDetail &) const;
          void addMeteoData(const ::org::orekit::files::ilrs::CRD$MeteorologicalMeasurement &) const;
          void addRangeData(const ::org::orekit::files::ilrs::CRD$RangeMeasurement &) const;
          void addRangeSupplementData(const ::org::orekit::files::ilrs::CRD$RangeSupplement &) const;
          void addSessionStatisticsData(const ::org::orekit::files::ilrs::CRD$SessionStatistics &) const;
          ::java::util::List getAnglesData() const;
          ::java::util::List getCalibrationData() const;
          ::java::util::List getCalibrationDetailData() const;
          ::java::util::List getCalibrationDetailRecords() const;
          ::java::util::List getCalibrationDetailRecords(const ::java::lang::String &) const;
          ::java::util::List getCalibrationRecords() const;
          ::java::util::List getCalibrationRecords(const ::java::lang::String &) const;
          ::org::orekit::files::ilrs::CRDConfiguration getConfigurationRecords() const;
          ::org::orekit::files::ilrs::CRDHeader getHeader() const;
          ::org::orekit::files::ilrs::CRD$Meteo getMeteoData() const;
          ::java::util::List getRangeData() const;
          ::java::util::List getRangeSupplementData() const;
          ::java::util::List getSessionStatisticsData() const;
          ::org::orekit::files::ilrs::CRD$SessionStatistics getSessionStatisticsRecord() const;
          ::org::orekit::files::ilrs::CRD$SessionStatistics getSessionStatisticsRecord(const ::java::lang::String &) const;
          jdouble getWavelength(const ::org::orekit::files::ilrs::CRD$RangeMeasurement &) const;
          void setConfigurationRecords(const ::org::orekit::files::ilrs::CRDConfiguration &) const;
          void setHeader(const ::org::orekit::files::ilrs::CRDHeader &) const;
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
        extern PyType_Def PY_TYPE_DEF(CRD$CRDDataBlock);
        extern PyTypeObject *PY_TYPE(CRD$CRDDataBlock);

        class t_CRD$CRDDataBlock {
        public:
          PyObject_HEAD
          CRD$CRDDataBlock object;
          static PyObject *wrap_Object(const CRD$CRDDataBlock&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
