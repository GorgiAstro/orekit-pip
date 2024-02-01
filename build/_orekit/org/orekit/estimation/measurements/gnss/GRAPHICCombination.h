#ifndef org_orekit_estimation_measurements_gnss_GRAPHICCombination_H
#define org_orekit_estimation_measurements_gnss_GRAPHICCombination_H

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

          class GRAPHICCombination : public ::org::orekit::estimation::measurements::gnss::AbstractSingleFrequencyCombination {
           public:
            enum {
              mid_getCombinedValue_82f92590f4247da1,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GRAPHICCombination(jobject obj) : ::org::orekit::estimation::measurements::gnss::AbstractSingleFrequencyCombination(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GRAPHICCombination(const GRAPHICCombination& obj) : ::org::orekit::estimation::measurements::gnss::AbstractSingleFrequencyCombination(obj) {}
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
          extern PyType_Def PY_TYPE_DEF(GRAPHICCombination);
          extern PyTypeObject *PY_TYPE(GRAPHICCombination);

          class t_GRAPHICCombination {
          public:
            PyObject_HEAD
            GRAPHICCombination object;
            static PyObject *wrap_Object(const GRAPHICCombination&);
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
