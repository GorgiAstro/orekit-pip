#ifndef org_orekit_files_ilrs_CRD$Calibration_H
#define org_orekit_files_ilrs_CRD$Calibration_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class TimeStamped;
      class AbsoluteDate;
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        class CRD$Calibration : public ::java::lang::Object {
         public:
          enum {
            mid_init$_962a82a1818ef660,
            mid_getDate_c325492395d89b24,
            mid_getDelayShift_b74f83833fdad017,
            mid_getDetectorChannel_55546ef6a647f39b,
            mid_getKurtosis_b74f83833fdad017,
            mid_getNumberOfPointsRecorded_55546ef6a647f39b,
            mid_getNumberOfPointsUsed_55546ef6a647f39b,
            mid_getOneWayDistance_b74f83833fdad017,
            mid_getPeakMinusMean_b74f83833fdad017,
            mid_getReturnRate_b74f83833fdad017,
            mid_getRms_b74f83833fdad017,
            mid_getShiftTypeIndicator_55546ef6a647f39b,
            mid_getSkew_b74f83833fdad017,
            mid_getSpan_55546ef6a647f39b,
            mid_getSystemConfigurationId_1c1fa1e935d6cdcf,
            mid_getSystemDelay_b74f83833fdad017,
            mid_getTypeIndicator_55546ef6a647f39b,
            mid_getTypeOfData_55546ef6a647f39b,
            mid_toCrdString_1c1fa1e935d6cdcf,
            mid_toString_1c1fa1e935d6cdcf,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CRD$Calibration(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CRD$Calibration(const CRD$Calibration& obj) : ::java::lang::Object(obj) {}

          CRD$Calibration(const ::org::orekit::time::AbsoluteDate &, jint, const ::java::lang::String &, jint, jint, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jint, jint, jint, jint, jdouble);

          ::org::orekit::time::AbsoluteDate getDate() const;
          jdouble getDelayShift() const;
          jint getDetectorChannel() const;
          jdouble getKurtosis() const;
          jint getNumberOfPointsRecorded() const;
          jint getNumberOfPointsUsed() const;
          jdouble getOneWayDistance() const;
          jdouble getPeakMinusMean() const;
          jdouble getReturnRate() const;
          jdouble getRms() const;
          jint getShiftTypeIndicator() const;
          jdouble getSkew() const;
          jint getSpan() const;
          ::java::lang::String getSystemConfigurationId() const;
          jdouble getSystemDelay() const;
          jint getTypeIndicator() const;
          jint getTypeOfData() const;
          ::java::lang::String toCrdString() const;
          ::java::lang::String toString() const;
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
        extern PyType_Def PY_TYPE_DEF(CRD$Calibration);
        extern PyTypeObject *PY_TYPE(CRD$Calibration);

        class t_CRD$Calibration {
        public:
          PyObject_HEAD
          CRD$Calibration object;
          static PyObject *wrap_Object(const CRD$Calibration&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
