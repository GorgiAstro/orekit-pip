#ifndef org_orekit_files_ilrs_CRD$MeteorologicalMeasurement_H
#define org_orekit_files_ilrs_CRD$MeteorologicalMeasurement_H

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

        class CRD$MeteorologicalMeasurement : public ::java::lang::Object {
         public:
          enum {
            mid_init$_31c218e31eeb88a8,
            mid_init$_dbbcec0d9f0ca756,
            mid_getDate_aaa854c403487cf3,
            mid_getHumidity_456d9a2f64d6b28d,
            mid_getOriginOfValues_f2f64475e4580546,
            mid_getPressure_456d9a2f64d6b28d,
            mid_getTemperature_456d9a2f64d6b28d,
            mid_toCrdString_0090f7797e403f43,
            mid_toString_0090f7797e403f43,
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
