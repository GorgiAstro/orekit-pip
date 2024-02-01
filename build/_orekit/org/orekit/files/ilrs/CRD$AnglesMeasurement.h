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
            mid_init$_8b4bd2f35d45ec76,
            mid_getAzimuth_9981f74b2d109da6,
            mid_getAzimuthRate_9981f74b2d109da6,
            mid_getDate_80e11148db499dda,
            mid_getDirectionFlag_d6ab429752e7c267,
            mid_getElevation_9981f74b2d109da6,
            mid_getElevationRate_9981f74b2d109da6,
            mid_getOriginIndicator_d6ab429752e7c267,
            mid_isRefractionCorrected_eee3de00fe971136,
            mid_toCrdString_d2c8eb4129821f0e,
            mid_toString_d2c8eb4129821f0e,
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
