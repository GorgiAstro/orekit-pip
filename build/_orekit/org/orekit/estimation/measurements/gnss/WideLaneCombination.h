#ifndef org_orekit_estimation_measurements_gnss_WideLaneCombination_H
#define org_orekit_estimation_measurements_gnss_WideLaneCombination_H

#include "org/orekit/estimation/measurements/gnss/AbstractDualFrequencyCombination.h"

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

          class WideLaneCombination : public ::org::orekit::estimation::measurements::gnss::AbstractDualFrequencyCombination {
           public:
            enum {
              mid_getCombinedValue_ac28f5c378fae636,
              mid_getCombinedFrequency_9364fb0b7015b098,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit WideLaneCombination(jobject obj) : ::org::orekit::estimation::measurements::gnss::AbstractDualFrequencyCombination(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            WideLaneCombination(const WideLaneCombination& obj) : ::org::orekit::estimation::measurements::gnss::AbstractDualFrequencyCombination(obj) {}
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
          extern PyType_Def PY_TYPE_DEF(WideLaneCombination);
          extern PyTypeObject *PY_TYPE(WideLaneCombination);

          class t_WideLaneCombination {
          public:
            PyObject_HEAD
            WideLaneCombination object;
            static PyObject *wrap_Object(const WideLaneCombination&);
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
