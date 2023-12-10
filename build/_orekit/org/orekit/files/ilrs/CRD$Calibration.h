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
            mid_init$_8911ec2fe4f4cc28,
            mid_getDate_85703d13e302437e,
            mid_getDelayShift_dff5885c2c873297,
            mid_getDetectorChannel_570ce0828f81a2c1,
            mid_getKurtosis_dff5885c2c873297,
            mid_getNumberOfPointsRecorded_570ce0828f81a2c1,
            mid_getNumberOfPointsUsed_570ce0828f81a2c1,
            mid_getOneWayDistance_dff5885c2c873297,
            mid_getPeakMinusMean_dff5885c2c873297,
            mid_getReturnRate_dff5885c2c873297,
            mid_getRms_dff5885c2c873297,
            mid_getShiftTypeIndicator_570ce0828f81a2c1,
            mid_getSkew_dff5885c2c873297,
            mid_getSpan_570ce0828f81a2c1,
            mid_getSystemConfigurationId_11b109bd155ca898,
            mid_getSystemDelay_dff5885c2c873297,
            mid_getTypeIndicator_570ce0828f81a2c1,
            mid_getTypeOfData_570ce0828f81a2c1,
            mid_toCrdString_11b109bd155ca898,
            mid_toString_11b109bd155ca898,
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
