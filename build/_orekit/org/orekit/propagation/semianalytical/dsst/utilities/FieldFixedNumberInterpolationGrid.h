#ifndef org_orekit_propagation_semianalytical_dsst_utilities_FieldFixedNumberInterpolationGrid_H
#define org_orekit_propagation_semianalytical_dsst_utilities_FieldFixedNumberInterpolationGrid_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
    class Field;
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

            class FieldFixedNumberInterpolationGrid : public ::java::lang::Object {
             public:
              enum {
                mid_init$_a69d58691b2f6a42,
                mid_getGridPoints_492e97ecdce43bb1,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit FieldFixedNumberInterpolationGrid(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              FieldFixedNumberInterpolationGrid(const FieldFixedNumberInterpolationGrid& obj) : ::java::lang::Object(obj) {}

              FieldFixedNumberInterpolationGrid(const ::org::hipparchus::Field &, jint);

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
            extern PyType_Def PY_TYPE_DEF(FieldFixedNumberInterpolationGrid);
            extern PyTypeObject *PY_TYPE(FieldFixedNumberInterpolationGrid);

            class t_FieldFixedNumberInterpolationGrid {
            public:
              PyObject_HEAD
              FieldFixedNumberInterpolationGrid object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_FieldFixedNumberInterpolationGrid *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const FieldFixedNumberInterpolationGrid&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const FieldFixedNumberInterpolationGrid&, PyTypeObject *);
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
