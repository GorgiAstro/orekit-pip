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
            mid_init$_8cc469ee0a9203d0,
            mid_init$_602a63585f6f07eb,
            mid_getBinKurtosis_557b8123390d8d0c,
            mid_getBinPeakMinusMean_557b8123390d8d0c,
            mid_getBinRms_557b8123390d8d0c,
            mid_getBinSkew_557b8123390d8d0c,
            mid_getDetectorChannel_412668abc8d889e9,
            mid_getNumberOfRawRanges_412668abc8d889e9,
            mid_getReturnRate_557b8123390d8d0c,
            mid_getWindowLength_557b8123390d8d0c,
            mid_toCrdString_3cffd47377eca18a,
            mid_toString_3cffd47377eca18a,
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
