#ifndef org_orekit_propagation_semianalytical_dsst_utilities_FieldMaxGapInterpolationGrid_H
#define org_orekit_propagation_semianalytical_dsst_utilities_FieldMaxGapInterpolationGrid_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class Field;
    class CalculusFieldElement;
  }
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            class FieldInterpolationGrid;
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

            class FieldMaxGapInterpolationGrid : public ::java::lang::Object {
             public:
              enum {
                mid_init$_88bffd71fb0313dc,
                mid_getGridPoints_0fb3037dbc9bf797,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit FieldMaxGapInterpolationGrid(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              FieldMaxGapInterpolationGrid(const FieldMaxGapInterpolationGrid& obj) : ::java::lang::Object(obj) {}

              FieldMaxGapInterpolationGrid(const ::org::hipparchus::Field &, const ::org::hipparchus::CalculusFieldElement &);

              JArray< ::org::hipparchus::CalculusFieldElement > getGridPoints(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &) const;
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
            extern PyType_Def PY_TYPE_DEF(FieldMaxGapInterpolationGrid);
            extern PyTypeObject *PY_TYPE(FieldMaxGapInterpolationGrid);

            class t_FieldMaxGapInterpolationGrid {
            public:
              PyObject_HEAD
              FieldMaxGapInterpolationGrid object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_FieldMaxGapInterpolationGrid *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const FieldMaxGapInterpolationGrid&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const FieldMaxGapInterpolationGrid&, PyTypeObject *);
              static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
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
