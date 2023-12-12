#ifndef org_orekit_files_ilrs_CRD$AnglesMeasurement_H
#define org_orekit_files_ilrs_CRD$AnglesMeasurement_H

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

        class CRD$AnglesMeasurement : public ::java::lang::Object {
         public:
          enum {
            mid_init$_60b7d33d13f2b96c,
            mid_getAzimuth_557b8123390d8d0c,
            mid_getAzimuthRate_557b8123390d8d0c,
            mid_getDate_7a97f7e149e79afb,
            mid_getDirectionFlag_412668abc8d889e9,
            mid_getElevation_557b8123390d8d0c,
            mid_getElevationRate_557b8123390d8d0c,
            mid_getOriginIndicator_412668abc8d889e9,
            mid_isRefractionCorrected_89b302893bdbe1f1,
            mid_toCrdString_3cffd47377eca18a,
            mid_toString_3cffd47377eca18a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CRD$AnglesMeasurement(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CRD$AnglesMeasurement(const CRD$AnglesMeasurement& obj) : ::java::lang::Object(obj) {}

          CRD$AnglesMeasurement(const ::org::orekit::time::AbsoluteDate &, jdouble, jdouble, jint, jint, jboolean, jdouble, jdouble);

          jdouble getAzimuth() const;
          jdouble getAzimuthRate() const;
          ::org::orekit::time::AbsoluteDate getDate() const;
          jint getDirectionFlag() const;
          jdouble getElevation() const;
          jdouble getElevationRate() const;
          jint getOriginIndicator() const;
          jboolean isRefractionCorrected() const;
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
        extern PyType_Def PY_TYPE_DEF(CRD$AnglesMeasurement);
        extern PyTypeObject *PY_TYPE(CRD$AnglesMeasurement);

        class t_CRD$AnglesMeasurement {
        public:
          PyObject_HEAD
          CRD$AnglesMeasurement object;
          static PyObject *wrap_Object(const CRD$AnglesMeasurement&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
