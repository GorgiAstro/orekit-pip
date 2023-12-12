#ifndef org_orekit_files_ilrs_CRD$FrRangeMeasurement_H
#define org_orekit_files_ilrs_CRD$FrRangeMeasurement_H

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

        class CRD$FrRangeMeasurement : public ::org::orekit::files::ilrs::CRD$RangeMeasurement {
         public:
          enum {
            mid_init$_7f9a0ec64fb18faf,
            mid_getDetectorChannel_412668abc8d889e9,
            mid_getFilterFlag_412668abc8d889e9,
            mid_getReceiveAmplitude_412668abc8d889e9,
            mid_getStopNumber_412668abc8d889e9,
            mid_getTransmitAmplitude_412668abc8d889e9,
            mid_toCrdString_3cffd47377eca18a,
            mid_toString_3cffd47377eca18a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CRD$FrRangeMeasurement(jobject obj) : ::org::orekit::files::ilrs::CRD$RangeMeasurement(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CRD$FrRangeMeasurement(const CRD$FrRangeMeasurement& obj) : ::org::orekit::files::ilrs::CRD$RangeMeasurement(obj) {}

          CRD$FrRangeMeasurement(const ::org::orekit::time::AbsoluteDate &, jdouble, jint, const ::java::lang::String &, jint, jint, jint, jint, jint);

          jint getDetectorChannel() const;
          jint getFilterFlag() const;
          jint getReceiveAmplitude() const;
          jint getStopNumber() const;
          jint getTransmitAmplitude() const;
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
        extern PyType_Def PY_TYPE_DEF(CRD$FrRangeMeasurement);
        extern PyTypeObject *PY_TYPE(CRD$FrRangeMeasurement);

        class t_CRD$FrRangeMeasurement {
        public:
          PyObject_HEAD
          CRD$FrRangeMeasurement object;
          static PyObject *wrap_Object(const CRD$FrRangeMeasurement&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
