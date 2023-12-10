#ifndef org_orekit_propagation_semianalytical_dsst_utilities_FieldInterpolationGrid_H
#define org_orekit_propagation_semianalytical_dsst_utilities_FieldInterpolationGrid_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
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

            class FieldInterpolationGrid : public ::java::lang::Object {
             public:
              enum {
                mid_getGridPoints_492e97ecdce43bb1,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit FieldInterpolationGrid(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              FieldInterpolationGrid(const FieldInterpolationGrid& obj) : ::java::lang::Object(obj) {}

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
            extern PyType_Def PY_TYPE_DEF(FieldInterpolationGrid);
            extern PyTypeObject *PY_TYPE(FieldInterpolationGrid);

            class t_FieldInterpolationGrid {
            public:
              PyObject_HEAD
              FieldInterpolationGrid object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_FieldInterpolationGrid *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const FieldInterpolationGrid&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const FieldInterpolationGrid&, PyTypeObject *);
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
