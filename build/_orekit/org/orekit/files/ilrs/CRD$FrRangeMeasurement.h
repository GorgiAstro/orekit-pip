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
            mid_init$_0f40c5eb9988d498,
            mid_getDetectorChannel_570ce0828f81a2c1,
            mid_getFilterFlag_570ce0828f81a2c1,
            mid_getReceiveAmplitude_570ce0828f81a2c1,
            mid_getStopNumber_570ce0828f81a2c1,
            mid_getTransmitAmplitude_570ce0828f81a2c1,
            mid_toCrdString_11b109bd155ca898,
            mid_toString_11b109bd155ca898,
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
