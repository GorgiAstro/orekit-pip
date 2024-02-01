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
            mid_init$_6b96dc882ab9fbf5,
            mid_init$_c6ef3bf05ecd3759,
            mid_init$_cc3de2c8e70eba76,
            mid_getDate_80e11148db499dda,
            mid_getEpochEvent_d6ab429752e7c267,
            mid_getSnr_9981f74b2d109da6,
            mid_getSystemConfigurationId_d2c8eb4129821f0e,
            mid_getTimeOfFlight_9981f74b2d109da6,
            mid_toCrdString_d2c8eb4129821f0e,
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
