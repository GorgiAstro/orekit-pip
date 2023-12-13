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
            mid_init$_1ed44afdd035b61a,
            mid_getAzimuth_b74f83833fdad017,
            mid_getAzimuthRate_b74f83833fdad017,
            mid_getDate_c325492395d89b24,
            mid_getDirectionFlag_55546ef6a647f39b,
            mid_getElevation_b74f83833fdad017,
            mid_getElevationRate_b74f83833fdad017,
            mid_getOriginIndicator_55546ef6a647f39b,
            mid_isRefractionCorrected_9ab94ac1dc23b105,
            mid_toCrdString_1c1fa1e935d6cdcf,
            mid_toString_1c1fa1e935d6cdcf,
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
