#ifndef org_orekit_files_ilrs_CRD$AnglesMeasurement_H
#define org_orekit_files_ilrs_CRD$AnglesMeasurement_H

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

        class CRD$AnglesMeasurement : public ::java::lang::Object {
         public:
          enum {
            mid_init$_630e84c09ee04cf2,
            mid_getAzimuth_456d9a2f64d6b28d,
            mid_getAzimuthRate_456d9a2f64d6b28d,
            mid_getDate_aaa854c403487cf3,
            mid_getDirectionFlag_f2f64475e4580546,
            mid_getElevation_456d9a2f64d6b28d,
            mid_getElevationRate_456d9a2f64d6b28d,
            mid_getOriginIndicator_f2f64475e4580546,
            mid_isRefractionCorrected_e470b6d9e0d979db,
            mid_toCrdString_0090f7797e403f43,
            mid_toString_0090f7797e403f43,
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
