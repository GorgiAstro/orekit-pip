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
            mid_init$_399a69c3c034fff4,
            mid_init$_1f869b32d549ac87,
            mid_init$_94189024dc8d45f2,
            mid_getDate_85703d13e302437e,
            mid_getEpochEvent_570ce0828f81a2c1,
            mid_getSnr_dff5885c2c873297,
            mid_getSystemConfigurationId_11b109bd155ca898,
            mid_getTimeOfFlight_dff5885c2c873297,
            mid_toCrdString_11b109bd155ca898,
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
