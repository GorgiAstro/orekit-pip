#ifndef org_orekit_files_ilrs_CRD$NptRangeMeasurement_H
#define org_orekit_files_ilrs_CRD$NptRangeMeasurement_H

#include "org/orekit/files/ilrs/CRD$RangeMeasurement.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
    }
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
            mid_init$_ce9c96f5fdc70ab3,
            mid_init$_ec5895b47419eed5,
            mid_getBinKurtosis_b74f83833fdad017,
            mid_getBinPeakMinusMean_b74f83833fdad017,
            mid_getBinRms_b74f83833fdad017,
            mid_getBinSkew_b74f83833fdad017,
            mid_getDetectorChannel_55546ef6a647f39b,
            mid_getNumberOfRawRanges_55546ef6a647f39b,
            mid_getReturnRate_b74f83833fdad017,
            mid_getWindowLength_b74f83833fdad017,
            mid_toCrdString_1c1fa1e935d6cdcf,
            mid_toString_1c1fa1e935d6cdcf,
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
