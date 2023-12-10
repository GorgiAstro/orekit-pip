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
              mid_init$_01fb2c777e5def32,
              mid_manageData_5e249044f63168db,
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
