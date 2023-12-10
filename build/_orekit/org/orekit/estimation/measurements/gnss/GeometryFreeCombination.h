#ifndef org_orekit_estimation_measurements_gnss_GeometryFreeCombination_H
#define org_orekit_estimation_measurements_gnss_GeometryFreeCombination_H

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

          class GeometryFreeCombination : public ::org::orekit::estimation::measurements::gnss::AbstractDualFrequencyCombination {
           public:
            enum {
              mid_getCombinedValue_e0f2baaf2a2ab093,
              mid_getCombinedFrequency_6baf140b93832af8,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GeometryFreeCombination(jobject obj) : ::org::orekit::estimation::measurements::gnss::AbstractDualFrequencyCombination(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GeometryFreeCombination(const GeometryFreeCombination& obj) : ::org::orekit::estimation::measurements::gnss::AbstractDualFrequencyCombination(obj) {}
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
          extern PyType_Def PY_TYPE_DEF(GeometryFreeCombination);
          extern PyTypeObject *PY_TYPE(GeometryFreeCombination);

          class t_GeometryFreeCombination {
          public:
            PyObject_HEAD
            GeometryFreeCombination object;
            static PyObject *wrap_Object(const GeometryFreeCombination&);
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
