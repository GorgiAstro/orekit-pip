#ifndef org_orekit_estimation_measurements_gnss_GeometryFreeCycleSlipDetector_H
#define org_orekit_estimation_measurements_gnss_GeometryFreeCycleSlipDetector_H

#include "org/orekit/estimation/measurements/gnss/AbstractCycleSlipDetector.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          class GeometryFreeCycleSlipDetector : public ::org::orekit::estimation::measurements::gnss::AbstractCycleSlipDetector {
           public:
            enum {
              mid_init$_2aa803b9073e6a76,
              mid_manageData_e95b94a72b1c921a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GeometryFreeCycleSlipDetector(jobject obj) : ::org::orekit::estimation::measurements::gnss::AbstractCycleSlipDetector(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GeometryFreeCycleSlipDetector(const GeometryFreeCycleSlipDetector& obj) : ::org::orekit::estimation::measurements::gnss::AbstractCycleSlipDetector(obj) {}

            GeometryFreeCycleSlipDetector(jdouble, jdouble, jint);
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {
          extern PyType_Def PY_TYPE_DEF(GeometryFreeCycleSlipDetector);
          extern PyTypeObject *PY_TYPE(GeometryFreeCycleSlipDetector);

          class t_GeometryFreeCycleSlipDetector {
          public:
            PyObject_HEAD
            GeometryFreeCycleSlipDetector object;
            static PyObject *wrap_Object(const GeometryFreeCycleSlipDetector&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
