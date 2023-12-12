#ifndef org_orekit_files_ilrs_CRD$RangeMeasurement_H
#define org_orekit_files_ilrs_CRD$RangeMeasurement_H

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

        class CRD$RangeMeasurement : public ::java::lang::Object {
         public:
          enum {
            mid_init$_8bee68461ef1d830,
            mid_init$_a710cda32bdb5ed9,
            mid_init$_8cc469ee0a9203d0,
            mid_getDate_7a97f7e149e79afb,
            mid_getEpochEvent_412668abc8d889e9,
            mid_getSnr_557b8123390d8d0c,
            mid_getSystemConfigurationId_3cffd47377eca18a,
            mid_getTimeOfFlight_557b8123390d8d0c,
            mid_toCrdString_3cffd47377eca18a,
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
