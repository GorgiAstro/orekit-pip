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
        class CRD$RangeMeasurement;
        class CRD$Calibration;
        class CRD$RangeSupplement;
        class CRDHeader;
        class CRD$CalibrationDetail;
        class CRDConfiguration;
        class CRD$AnglesMeasurement;
        class CRD$SessionStatistics;
        class CRD$MeteorologicalMeasurement;
        class CRD$Meteo;
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
            mid_init$_a1fa5dae97ea5ed2,
            mid_addAnglesData_fbc37bc61c949d81,
            mid_addCalibrationData_63900ae0399b7890,
            mid_addCalibrationDetailData_5db45890b1fb8d37,
            mid_addMeteoData_968e9dab248d11bf,
            mid_addRangeData_e3d6d95f6db75380,
            mid_addRangeSupplementData_d1790059222d58bd,
            mid_addSessionStatisticsData_b86eb554edcc3354,
            mid_getAnglesData_e62d3bb06d56d7e3,
            mid_getCalibrationData_e62d3bb06d56d7e3,
            mid_getCalibrationDetailData_e62d3bb06d56d7e3,
            mid_getCalibrationDetailRecords_e62d3bb06d56d7e3,
            mid_getCalibrationDetailRecords_abe6e889bc24795d,
            mid_getCalibrationRecords_e62d3bb06d56d7e3,
            mid_getCalibrationRecords_abe6e889bc24795d,
            mid_getConfigurationRecords_4d6fc0a1d2e05f0e,
            mid_getHeader_281c24c358e171c9,
            mid_getMeteoData_f3d4ff867f33b20a,
            mid_getRangeData_e62d3bb06d56d7e3,
            mid_getRangeSupplementData_e62d3bb06d56d7e3,
            mid_getSessionStatisticsData_e62d3bb06d56d7e3,
            mid_getSessionStatisticsRecord_1af4734de6ce8980,
            mid_getSessionStatisticsRecord_a26d4619c23066d9,
            mid_getWavelength_e6d3d030f7d2838e,
            mid_setConfigurationRecords_8d91c1ee735c647f,
            mid_setHeader_44b4531a0cdbd508,
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
