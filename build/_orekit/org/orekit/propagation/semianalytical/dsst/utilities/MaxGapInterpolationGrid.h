#ifndef org_orekit_propagation_semianalytical_dsst_utilities_MaxGapInterpolationGrid_H
#define org_orekit_propagation_semianalytical_dsst_utilities_MaxGapInterpolationGrid_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
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
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            class MaxGapInterpolationGrid : public ::java::lang::Object {
             public:
              enum {
                mid_init$_1ad26e8c8c0cd65b,
                mid_getGridPoints_4c8160a53aa8811b,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit MaxGapInterpolationGrid(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              MaxGapInterpolationGrid(const MaxGapInterpolationGrid& obj) : ::java::lang::Object(obj) {}

              MaxGapInterpolationGrid(jdouble);

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
            extern PyType_Def PY_TYPE_DEF(MaxGapInterpolationGrid);
            extern PyTypeObject *PY_TYPE(MaxGapInterpolationGrid);

            class t_MaxGapInterpolationGrid {
            public:
              PyObject_HEAD
              MaxGapInterpolationGrid object;
              static PyObject *wrap_Object(const MaxGapInterpolationGrid&);
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
