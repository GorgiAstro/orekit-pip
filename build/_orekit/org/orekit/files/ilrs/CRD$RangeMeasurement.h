#ifndef org_orekit_files_ilrs_CRD$RangeMeasurement_H
#define org_orekit_files_ilrs_CRD$RangeMeasurement_H

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

        class CRD$RangeMeasurement : public ::java::lang::Object {
         public:
          enum {
            mid_init$_54d5095bd6b0c726,
            mid_init$_ccc2406a0e104c30,
            mid_init$_ba58bdeca658222c,
            mid_getDate_aaa854c403487cf3,
            mid_getEpochEvent_f2f64475e4580546,
            mid_getSnr_456d9a2f64d6b28d,
            mid_getSystemConfigurationId_0090f7797e403f43,
            mid_getTimeOfFlight_456d9a2f64d6b28d,
            mid_toCrdString_0090f7797e403f43,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CRD$RangeMeasurement(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CRD$RangeMeasurement(const CRD$RangeMeasurement& obj) : ::java::lang::Object(obj) {}

          CRD$RangeMeasurement(const ::org::orekit::time::AbsoluteDate &, jdouble, jint);
          CRD$RangeMeasurement(const ::org::orekit::time::AbsoluteDate &, jdouble, jint, jdouble);
          CRD$RangeMeasurement(const ::org::orekit::time::AbsoluteDate &, jdouble, jint, jdouble, const ::java::lang::String &);

          ::org::orekit::time::AbsoluteDate getDate() const;
          jint getEpochEvent() const;
          jdouble getSnr() const;
          ::java::lang::String getSystemConfigurationId() const;
          jdouble getTimeOfFlight() const;
          ::java::lang::String toCrdString() const;
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
        extern PyType_Def PY_TYPE_DEF(CRD$RangeMeasurement);
        extern PyTypeObject *PY_TYPE(CRD$RangeMeasurement);

        class t_CRD$RangeMeasurement {
        public:
          PyObject_HEAD
          CRD$RangeMeasurement object;
          static PyObject *wrap_Object(const CRD$RangeMeasurement&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
