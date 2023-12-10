#ifndef org_orekit_files_ilrs_CRD$CRDDataBlock_H
#define org_orekit_files_ilrs_CRD$CRDDataBlock_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {
        class CRD$CalibrationDetail;
        class CRD$RangeSupplement;
        class CRD$AnglesMeasurement;
        class CRDHeader;
        class CRD$Calibration;
        class CRDConfiguration;
        class CRD$RangeMeasurement;
        class CRD$MeteorologicalMeasurement;
        class CRD$Meteo;
        class CRD$SessionStatistics;
      }
    }
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
            mid_init$_7ae3461a92a43152,
            mid_addAnglesData_fdbc10f5869cf001,
            mid_addCalibrationData_1979c13861d37d85,
            mid_addCalibrationDetailData_de1d36ea8533ded1,
            mid_addMeteoData_f2d3e2233ad03dba,
            mid_addRangeData_48b73d8623943b9d,
            mid_addRangeSupplementData_d17923b8d3860522,
            mid_addSessionStatisticsData_bf9a1af7f7500e5f,
            mid_getAnglesData_a6156df500549a58,
            mid_getCalibrationData_a6156df500549a58,
            mid_getCalibrationDetailData_a6156df500549a58,
            mid_getCalibrationDetailRecords_a6156df500549a58,
            mid_getCalibrationDetailRecords_720e76ad3b86a46a,
            mid_getCalibrationRecords_a6156df500549a58,
            mid_getCalibrationRecords_720e76ad3b86a46a,
            mid_getConfigurationRecords_c078d1163d6e31e6,
            mid_getHeader_a6ac000995869c89,
            mid_getMeteoData_4098865cefc5362e,
            mid_getRangeData_a6156df500549a58,
            mid_getRangeSupplementData_a6156df500549a58,
            mid_getSessionStatisticsData_a6156df500549a58,
            mid_getSessionStatisticsRecord_dd0bf23a6792e381,
            mid_getSessionStatisticsRecord_97d81f26b5df075c,
            mid_getWavelength_7940055cb2c5196d,
            mid_setConfigurationRecords_03c50d7ef630256e,
            mid_setHeader_681264e50bdf7b51,
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
