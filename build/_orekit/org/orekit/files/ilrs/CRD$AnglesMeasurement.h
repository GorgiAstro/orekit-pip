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
            mid_init$_40fb827d152567d2,
            mid_getAzimuth_dff5885c2c873297,
            mid_getAzimuthRate_dff5885c2c873297,
            mid_getDate_85703d13e302437e,
            mid_getDirectionFlag_570ce0828f81a2c1,
            mid_getElevation_dff5885c2c873297,
            mid_getElevationRate_dff5885c2c873297,
            mid_getOriginIndicator_570ce0828f81a2c1,
            mid_isRefractionCorrected_b108b35ef48e27bd,
            mid_toCrdString_11b109bd155ca898,
            mid_toString_11b109bd155ca898,
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
