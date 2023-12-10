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
            mid_init$_89dd5677feda5af6,
            mid_getDate_aaa854c403487cf3,
            mid_getDelayShift_456d9a2f64d6b28d,
            mid_getDetectorChannel_f2f64475e4580546,
            mid_getKurtosis_456d9a2f64d6b28d,
            mid_getNumberOfPointsRecorded_f2f64475e4580546,
            mid_getNumberOfPointsUsed_f2f64475e4580546,
            mid_getOneWayDistance_456d9a2f64d6b28d,
            mid_getPeakMinusMean_456d9a2f64d6b28d,
            mid_getReturnRate_456d9a2f64d6b28d,
            mid_getRms_456d9a2f64d6b28d,
            mid_getShiftTypeIndicator_f2f64475e4580546,
            mid_getSkew_456d9a2f64d6b28d,
            mid_getSpan_f2f64475e4580546,
            mid_getSystemConfigurationId_0090f7797e403f43,
            mid_getSystemDelay_456d9a2f64d6b28d,
            mid_getTypeIndicator_f2f64475e4580546,
            mid_getTypeOfData_f2f64475e4580546,
            mid_toCrdString_0090f7797e403f43,
            mid_toString_0090f7797e403f43,
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
