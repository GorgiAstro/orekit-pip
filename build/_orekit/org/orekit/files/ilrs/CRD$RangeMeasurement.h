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
            mid_init$_85622290a07d1cb6,
            mid_init$_d9839f7b76900b24,
            mid_init$_ce9c96f5fdc70ab3,
            mid_getDate_c325492395d89b24,
            mid_getEpochEvent_55546ef6a647f39b,
            mid_getSnr_b74f83833fdad017,
            mid_getSystemConfigurationId_1c1fa1e935d6cdcf,
            mid_getTimeOfFlight_b74f83833fdad017,
            mid_toCrdString_1c1fa1e935d6cdcf,
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
