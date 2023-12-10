#ifndef org_orekit_files_ilrs_CRD$CalibrationDetail_H
#define org_orekit_files_ilrs_CRD$CalibrationDetail_H

#include "org/orekit/files/ilrs/CRD$Calibration.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        class CRD$CalibrationDetail : public ::org::orekit::files::ilrs::CRD$Calibration {
         public:
          enum {
            mid_init$_89dd5677feda5af6,
            mid_toCrdString_0090f7797e403f43,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CRD$CalibrationDetail(jobject obj) : ::org::orekit::files::ilrs::CRD$Calibration(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CRD$CalibrationDetail(const CRD$CalibrationDetail& obj) : ::org::orekit::files::ilrs::CRD$Calibration(obj) {}

          CRD$CalibrationDetail(const ::org::orekit::time::AbsoluteDate &, jint, const ::java::lang::String &, jint, jint, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jint, jint, jint, jint, jdouble);

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
        extern PyType_Def PY_TYPE_DEF(CRD$CalibrationDetail);
        extern PyTypeObject *PY_TYPE(CRD$CalibrationDetail);

        class t_CRD$CalibrationDetail {
        public:
          PyObject_HEAD
          CRD$CalibrationDetail object;
          static PyObject *wrap_Object(const CRD$CalibrationDetail&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif