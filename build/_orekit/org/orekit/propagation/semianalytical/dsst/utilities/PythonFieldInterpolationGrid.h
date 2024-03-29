#ifndef org_orekit_propagation_semianalytical_dsst_utilities_PythonFieldInterpolationGrid_H
#define org_orekit_propagation_semianalytical_dsst_utilities_PythonFieldInterpolationGrid_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
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
    class Throwable;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            class PythonFieldInterpolationGrid : public ::java::lang::Object {
             public:
              enum {
                mid_init$_ff7cb6c242604316,
                mid_finalize_ff7cb6c242604316,
                mid_getGridPoints_0fb3037dbc9bf797,
                mid_pythonDecRef_ff7cb6c242604316,
                mid_pythonExtension_42c72b98e3c2e08a,
                mid_pythonExtension_f5bbab7e97879358,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit PythonFieldInterpolationGrid(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              PythonFieldInterpolationGrid(const PythonFieldInterpolationGrid& obj) : ::java::lang::Object(obj) {}

              PythonFieldInterpolationGrid();

              void finalize() const;
              JArray< ::org::hipparchus::CalculusFieldElement > getGridPoints(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &) const;
              void pythonDecRef() const;
              jlong pythonExtension() const;
              void pythonExtension(jlong) const;
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
            extern PyType_Def PY_TYPE_DEF(PythonFieldInterpolationGrid);
            extern PyTypeObject *PY_TYPE(PythonFieldInterpolationGrid);

            class t_PythonFieldInterpolationGrid {
            public:
              PyObject_HEAD
              PythonFieldInterpolationGrid object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_PythonFieldInterpolationGrid *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const PythonFieldInterpolationGrid&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const PythonFieldInterpolationGrid&, PyTypeObject *);
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
