#ifndef org_orekit_estimation_measurements_gnss_IntegerLeastSquareComparator_H
#define org_orekit_estimation_measurements_gnss_IntegerLeastSquareComparator_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class Serializable;
  }
  namespace util {
    class Comparator;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {
          class IntegerLeastSquareSolution;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          class IntegerLeastSquareComparator : public ::java::lang::Object {
           public:
            enum {
              mid_init$_7ae3461a92a43152,
              mid_compare_78c893983933e0d0,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit IntegerLeastSquareComparator(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            IntegerLeastSquareComparator(const IntegerLeastSquareComparator& obj) : ::java::lang::Object(obj) {}

            IntegerLeastSquareComparator();

            jint compare(const ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution &, const ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution &) const;
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
          extern PyType_Def PY_TYPE_DEF(IntegerLeastSquareComparator);
          extern PyTypeObject *PY_TYPE(IntegerLeastSquareComparator);

          class t_IntegerLeastSquareComparator {
          public:
            PyObject_HEAD
            IntegerLeastSquareComparator object;
            static PyObject *wrap_Object(const IntegerLeastSquareComparator&);
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
