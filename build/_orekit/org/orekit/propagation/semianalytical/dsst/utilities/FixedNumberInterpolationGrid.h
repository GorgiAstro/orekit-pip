#ifndef org_orekit_propagation_semianalytical_dsst_utilities_FixedNumberInterpolationGrid_H
#define org_orekit_propagation_semianalytical_dsst_utilities_FixedNumberInterpolationGrid_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            class InterpolationGrid;
          }
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            class FixedNumberInterpolationGrid : public ::java::lang::Object {
             public:
              enum {
                mid_init$_99803b0791f320ff,
                mid_getGridPoints_432c7f020b618085,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit FixedNumberInterpolationGrid(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              FixedNumberInterpolationGrid(const FixedNumberInterpolationGrid& obj) : ::java::lang::Object(obj) {}

              FixedNumberInterpolationGrid(jint);

              JArray< jdouble > getGridPoints(jdouble, jdouble) const;
            };
          }
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            extern PyType_Def PY_TYPE_DEF(FixedNumberInterpolationGrid);
            extern PyTypeObject *PY_TYPE(FixedNumberInterpolationGrid);

            class t_FixedNumberInterpolationGrid {
            public:
              PyObject_HEAD
              FixedNumberInterpolationGrid object;
              static PyObject *wrap_Object(const FixedNumberInterpolationGrid&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
