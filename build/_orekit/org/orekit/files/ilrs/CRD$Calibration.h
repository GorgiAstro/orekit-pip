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
            mid_init$_eafe5b3d04932887,
            mid_getDate_7a97f7e149e79afb,
            mid_getDelayShift_557b8123390d8d0c,
            mid_getDetectorChannel_412668abc8d889e9,
            mid_getKurtosis_557b8123390d8d0c,
            mid_getNumberOfPointsRecorded_412668abc8d889e9,
            mid_getNumberOfPointsUsed_412668abc8d889e9,
            mid_getOneWayDistance_557b8123390d8d0c,
            mid_getPeakMinusMean_557b8123390d8d0c,
            mid_getReturnRate_557b8123390d8d0c,
            mid_getRms_557b8123390d8d0c,
            mid_getShiftTypeIndicator_412668abc8d889e9,
            mid_getSkew_557b8123390d8d0c,
            mid_getSpan_412668abc8d889e9,
            mid_getSystemConfigurationId_3cffd47377eca18a,
            mid_getSystemDelay_557b8123390d8d0c,
            mid_getTypeIndicator_412668abc8d889e9,
            mid_getTypeOfData_412668abc8d889e9,
            mid_toCrdString_3cffd47377eca18a,
            mid_toString_3cffd47377eca18a,
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
