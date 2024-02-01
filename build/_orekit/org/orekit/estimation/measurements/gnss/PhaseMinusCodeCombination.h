#ifndef org_orekit_estimation_measurements_gnss_PhaseMinusCodeCombination_H
#define org_orekit_estimation_measurements_gnss_PhaseMinusCodeCombination_H

#include "org/orekit/estimation/measurements/gnss/AbstractSingleFrequencyCombination.h"

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

          class PhaseMinusCodeCombination : public ::org::orekit::estimation::measurements::gnss::AbstractSingleFrequencyCombination {
           public:
            enum {
              mid_getCombinedValue_82f92590f4247da1,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PhaseMinusCodeCombination(jobject obj) : ::org::orekit::estimation::measurements::gnss::AbstractSingleFrequencyCombination(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PhaseMinusCodeCombination(const PhaseMinusCodeCombination& obj) : ::org::orekit::estimation::measurements::gnss::AbstractSingleFrequencyCombination(obj) {}
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
          extern PyType_Def PY_TYPE_DEF(PhaseMinusCodeCombination);
          extern PyTypeObject *PY_TYPE(PhaseMinusCodeCombination);

          class t_PhaseMinusCodeCombination {
          public:
            PyObject_HEAD
            PhaseMinusCodeCombination object;
            static PyObject *wrap_Object(const PhaseMinusCodeCombination&);
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
