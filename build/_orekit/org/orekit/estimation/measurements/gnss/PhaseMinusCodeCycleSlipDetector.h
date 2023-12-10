#ifndef org_orekit_estimation_measurements_gnss_PhaseMinusCodeCycleSlipDetector_H
#define org_orekit_estimation_measurements_gnss_PhaseMinusCodeCycleSlipDetector_H

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

          class PhaseMinusCodeCycleSlipDetector : public ::org::orekit::estimation::measurements::gnss::AbstractCycleSlipDetector {
           public:
            enum {
              mid_init$_b5a15021085cabdb,
              mid_manageData_a74883e6a7063961,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PhaseMinusCodeCycleSlipDetector(jobject obj) : ::org::orekit::estimation::measurements::gnss::AbstractCycleSlipDetector(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PhaseMinusCodeCycleSlipDetector(const PhaseMinusCodeCycleSlipDetector& obj) : ::org::orekit::estimation::measurements::gnss::AbstractCycleSlipDetector(obj) {}

            PhaseMinusCodeCycleSlipDetector(jdouble, jdouble, jint, jint);
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
          extern PyType_Def PY_TYPE_DEF(PhaseMinusCodeCycleSlipDetector);
          extern PyTypeObject *PY_TYPE(PhaseMinusCodeCycleSlipDetector);

          class t_PhaseMinusCodeCycleSlipDetector {
          public:
            PyObject_HEAD
            PhaseMinusCodeCycleSlipDetector object;
            static PyObject *wrap_Object(const PhaseMinusCodeCycleSlipDetector&);
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
