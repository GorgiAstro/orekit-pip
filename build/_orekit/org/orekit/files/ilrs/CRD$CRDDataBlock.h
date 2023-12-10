#ifndef org_orekit_files_ilrs_CRD$CRDDataBlock_H
#define org_orekit_files_ilrs_CRD$CRDDataBlock_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {
        class CRD$RangeSupplement;
        class CRD$Meteo;
        class CRDHeader;
        class CRD$AnglesMeasurement;
        class CRD$SessionStatistics;
        class CRDConfiguration;
        class CRD$Calibration;
        class CRD$RangeMeasurement;
        class CRD$CalibrationDetail;
        class CRD$MeteorologicalMeasurement;
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
            mid_init$_0fa09c18fee449d5,
            mid_addAnglesData_e1c9729d63e3bf8c,
            mid_addCalibrationData_b67c956e14455568,
            mid_addCalibrationDetailData_4290ad220666e670,
            mid_addMeteoData_0bc8957e5ebed1cb,
            mid_addRangeData_381def2f82634b72,
            mid_addRangeSupplementData_aed86880c02a39ba,
            mid_addSessionStatisticsData_a03b13e5108ccf85,
            mid_getAnglesData_2afa36052df4765d,
            mid_getCalibrationData_2afa36052df4765d,
            mid_getCalibrationDetailData_2afa36052df4765d,
            mid_getCalibrationDetailRecords_2afa36052df4765d,
            mid_getCalibrationDetailRecords_aade4ea8882e7a2c,
            mid_getCalibrationRecords_2afa36052df4765d,
            mid_getCalibrationRecords_aade4ea8882e7a2c,
            mid_getConfigurationRecords_ec13daa2694209ba,
            mid_getHeader_3e90095384e815b3,
            mid_getMeteoData_9459dd149ced72d3,
            mid_getRangeData_2afa36052df4765d,
            mid_getRangeSupplementData_2afa36052df4765d,
            mid_getSessionStatisticsData_2afa36052df4765d,
            mid_getSessionStatisticsRecord_175ecc667c3042a0,
            mid_getSessionStatisticsRecord_0d71ee317acb3db8,
            mid_getWavelength_9ab55b39347deb7b,
            mid_setConfigurationRecords_7433965f70e12915,
            mid_setHeader_a1f5a92ac3db7946,
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
