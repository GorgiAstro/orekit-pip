#ifndef org_orekit_propagation_semianalytical_dsst_utilities_InterpolationGrid_H
#define org_orekit_propagation_semianalytical_dsst_utilities_InterpolationGrid_H

#include "java/lang/Object.h"

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

            class InterpolationGrid : public ::java::lang::Object {
             public:
              enum {
                mid_getGridPoints_432c7f020b618085,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit InterpolationGrid(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              InterpolationGrid(const InterpolationGrid& obj) : ::java::lang::Object(obj) {}

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
            extern PyType_Def PY_TYPE_DEF(InterpolationGrid);
            extern PyTypeObject *PY_TYPE(InterpolationGrid);

            class t_InterpolationGrid {
            public:
              PyObject_HEAD
              InterpolationGrid object;
              static PyObject *wrap_Object(const InterpolationGrid&);
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
