#ifndef org_orekit_estimation_measurements_gnss_NarrowLaneCombination_H
#define org_orekit_estimation_measurements_gnss_NarrowLaneCombination_H

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

          class NarrowLaneCombination : public ::org::orekit::estimation::measurements::gnss::AbstractDualFrequencyCombination {
           public:
            enum {
              mid_getCombinedValue_17aea80d13f83b81,
              mid_getCombinedFrequency_f4c99548ccdd1967,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit NarrowLaneCombination(jobject obj) : ::org::orekit::estimation::measurements::gnss::AbstractDualFrequencyCombination(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            NarrowLaneCombination(const NarrowLaneCombination& obj) : ::org::orekit::estimation::measurements::gnss::AbstractDualFrequencyCombination(obj) {}
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
          extern PyType_Def PY_TYPE_DEF(NarrowLaneCombination);
          extern PyTypeObject *PY_TYPE(NarrowLaneCombination);

          class t_NarrowLaneCombination {
          public:
            PyObject_HEAD
            NarrowLaneCombination object;
            static PyObject *wrap_Object(const NarrowLaneCombination&);
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
