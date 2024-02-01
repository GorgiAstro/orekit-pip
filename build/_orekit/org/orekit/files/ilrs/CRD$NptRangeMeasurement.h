#ifndef org_orekit_files_ilrs_CRD$NptRangeMeasurement_H
#define org_orekit_files_ilrs_CRD$NptRangeMeasurement_H

#include "org/orekit/files/ilrs/CRD$RangeMeasurement.h"

namespace org {
  namespace orekit {
    namespace time {
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

        class CRD$NptRangeMeasurement : public ::org::orekit::files::ilrs::CRD$RangeMeasurement {
         public:
          enum {
            mid_init$_cc3de2c8e70eba76,
            mid_init$_3653e9a749c438d9,
            mid_getBinKurtosis_9981f74b2d109da6,
            mid_getBinPeakMinusMean_9981f74b2d109da6,
            mid_getBinRms_9981f74b2d109da6,
            mid_getBinSkew_9981f74b2d109da6,
            mid_getDetectorChannel_d6ab429752e7c267,
            mid_getNumberOfRawRanges_d6ab429752e7c267,
            mid_getReturnRate_9981f74b2d109da6,
            mid_getWindowLength_9981f74b2d109da6,
            mid_toCrdString_d2c8eb4129821f0e,
            mid_toString_d2c8eb4129821f0e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CRD$NptRangeMeasurement(jobject obj) : ::org::orekit::files::ilrs::CRD$RangeMeasurement(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CRD$NptRangeMeasurement(const CRD$NptRangeMeasurement& obj) : ::org::orekit::files::ilrs::CRD$RangeMeasurement(obj) {}

          CRD$NptRangeMeasurement(const ::org::orekit::time::AbsoluteDate &, jdouble, jint, jdouble, const ::java::lang::String &);
          CRD$NptRangeMeasurement(const ::org::orekit::time::AbsoluteDate &, jdouble, jint, jdouble, const ::java::lang::String &, jdouble, jint, jdouble, jdouble, jdouble, jdouble, jdouble, jint);

          jdouble getBinKurtosis() const;
          jdouble getBinPeakMinusMean() const;
          jdouble getBinRms() const;
          jdouble getBinSkew() const;
          jint getDetectorChannel() const;
          jint getNumberOfRawRanges() const;
          jdouble getReturnRate() const;
          jdouble getWindowLength() const;
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
        extern PyType_Def PY_TYPE_DEF(CRD$NptRangeMeasurement);
        extern PyTypeObject *PY_TYPE(CRD$NptRangeMeasurement);

        class t_CRD$NptRangeMeasurement {
        public:
          PyObject_HEAD
          CRD$NptRangeMeasurement object;
          static PyObject *wrap_Object(const CRD$NptRangeMeasurement&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
