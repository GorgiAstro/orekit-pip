#ifndef org_orekit_files_ilrs_CRD$CRDDataBlock_H
#define org_orekit_files_ilrs_CRD$CRDDataBlock_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {
        class CRD$SessionStatistics;
        class CRD$Calibration;
        class CRD$AnglesMeasurement;
        class CRD$RangeSupplement;
        class CRD$Meteo;
        class CRD$RangeMeasurement;
        class CRDConfiguration;
        class CRDHeader;
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
            mid_init$_0640e6acf969ed28,
            mid_addAnglesData_35383e0c843c3084,
            mid_addCalibrationData_cc0e8057595cb595,
            mid_addCalibrationDetailData_540c2ec67cb130ce,
            mid_addMeteoData_e118fb7db41bcff6,
            mid_addRangeData_922f4ef45083699e,
            mid_addRangeSupplementData_a0b8f90cbfce5723,
            mid_addSessionStatisticsData_0a7705e408a98b7b,
            mid_getAnglesData_0d9551367f7ecdef,
            mid_getCalibrationData_0d9551367f7ecdef,
            mid_getCalibrationDetailData_0d9551367f7ecdef,
            mid_getCalibrationDetailRecords_0d9551367f7ecdef,
            mid_getCalibrationDetailRecords_112f9b169ddc4fbe,
            mid_getCalibrationRecords_0d9551367f7ecdef,
            mid_getCalibrationRecords_112f9b169ddc4fbe,
            mid_getConfigurationRecords_6ff2a6b6ea3e1822,
            mid_getHeader_280bc464d093e3cf,
            mid_getMeteoData_fce7f079c8fc6110,
            mid_getRangeData_0d9551367f7ecdef,
            mid_getRangeSupplementData_0d9551367f7ecdef,
            mid_getSessionStatisticsData_0d9551367f7ecdef,
            mid_getSessionStatisticsRecord_a385ffee72bd3d9c,
            mid_getSessionStatisticsRecord_8d772f4eaa89cc95,
            mid_getWavelength_a02bac742ffcb9ae,
            mid_setConfigurationRecords_3b7f7f9152be91f0,
            mid_setHeader_03439c0671fe86ce,
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
