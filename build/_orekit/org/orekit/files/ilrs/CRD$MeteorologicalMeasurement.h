#ifndef org_orekit_files_ilrs_CRD$MeteorologicalMeasurement_H
#define org_orekit_files_ilrs_CRD$MeteorologicalMeasurement_H

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

        class CRD$MeteorologicalMeasurement : public ::java::lang::Object {
         public:
          enum {
            mid_init$_8509f4f9f0fe609c,
            mid_init$_6c8b9bcd18b0a073,
            mid_getDate_7a97f7e149e79afb,
            mid_getHumidity_557b8123390d8d0c,
            mid_getOriginOfValues_412668abc8d889e9,
            mid_getPressure_557b8123390d8d0c,
            mid_getTemperature_557b8123390d8d0c,
            mid_toCrdString_3cffd47377eca18a,
            mid_toString_3cffd47377eca18a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CRD$MeteorologicalMeasurement(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CRD$MeteorologicalMeasurement(const CRD$MeteorologicalMeasurement& obj) : ::java::lang::Object(obj) {}

          CRD$MeteorologicalMeasurement(const ::org::orekit::time::AbsoluteDate &, jdouble, jdouble, jdouble);
          CRD$MeteorologicalMeasurement(const ::org::orekit::time::AbsoluteDate &, jdouble, jdouble, jdouble, jint);

          ::org::orekit::time::AbsoluteDate getDate() const;
          jdouble getHumidity() const;
          jint getOriginOfValues() const;
          jdouble getPressure() const;
          jdouble getTemperature() const;
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
        extern PyType_Def PY_TYPE_DEF(CRD$MeteorologicalMeasurement);
        extern PyTypeObject *PY_TYPE(CRD$MeteorologicalMeasurement);

        class t_CRD$MeteorologicalMeasurement {
        public:
          PyObject_HEAD
          CRD$MeteorologicalMeasurement object;
          static PyObject *wrap_Object(const CRD$MeteorologicalMeasurement&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
