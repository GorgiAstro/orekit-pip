#ifndef org_orekit_estimation_measurements_filtering_PythonHatchFilter_H
#define org_orekit_estimation_measurements_filtering_PythonHatchFilter_H

#include "org/orekit/estimation/measurements/filtering/HatchFilter.h"

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
        namespace filtering {

          class PythonHatchFilter : public ::org::orekit::estimation::measurements::filtering::HatchFilter {
           public:

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PythonHatchFilter(jobject obj) : ::org::orekit::estimation::measurements::filtering::HatchFilter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PythonHatchFilter(const PythonHatchFilter& obj) : ::org::orekit::estimation::measurements::filtering::HatchFilter(obj) {}
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
        namespace filtering {
          extern PyType_Def PY_TYPE_DEF(PythonHatchFilter);
          extern PyTypeObject *PY_TYPE(PythonHatchFilter);

          class t_PythonHatchFilter {
          public:
            PyObject_HEAD
            PythonHatchFilter object;
            static PyObject *wrap_Object(const PythonHatchFilter&);
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
