#ifndef org_orekit_files_ilrs_CRD$Calibration_H
#define org_orekit_files_ilrs_CRD$Calibration_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
      class TimeStamped;
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
            mid_init$_6c7b9069bc71a9b1,
            mid_getDate_80e11148db499dda,
            mid_getDelayShift_9981f74b2d109da6,
            mid_getDetectorChannel_d6ab429752e7c267,
            mid_getKurtosis_9981f74b2d109da6,
            mid_getNumberOfPointsRecorded_d6ab429752e7c267,
            mid_getNumberOfPointsUsed_d6ab429752e7c267,
            mid_getOneWayDistance_9981f74b2d109da6,
            mid_getPeakMinusMean_9981f74b2d109da6,
            mid_getReturnRate_9981f74b2d109da6,
            mid_getRms_9981f74b2d109da6,
            mid_getShiftTypeIndicator_d6ab429752e7c267,
            mid_getSkew_9981f74b2d109da6,
            mid_getSpan_d6ab429752e7c267,
            mid_getSystemConfigurationId_d2c8eb4129821f0e,
            mid_getSystemDelay_9981f74b2d109da6,
            mid_getTypeIndicator_d6ab429752e7c267,
            mid_getTypeOfData_d6ab429752e7c267,
            mid_toCrdString_d2c8eb4129821f0e,
            mid_toString_d2c8eb4129821f0e,
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
