#ifndef org_hipparchus_optim_nonlinear_scalar_noderiv_CMAESOptimizer$PopulationSize_H
#define org_hipparchus_optim_nonlinear_scalar_noderiv_CMAESOptimizer$PopulationSize_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      class PointValuePair;
      class OptimizationData;
    }
    namespace exception {
      class MathIllegalArgumentException;
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
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          namespace noderiv {

            class CMAESOptimizer$PopulationSize : public ::java::lang::Object {
             public:
              enum {
                mid_init$_0a2a1ac2721c0336,
                mid_getPopulationSize_f2f64475e4580546,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit CMAESOptimizer$PopulationSize(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              CMAESOptimizer$PopulationSize(const CMAESOptimizer$PopulationSize& obj) : ::java::lang::Object(obj) {}

              CMAESOptimizer$PopulationSize(jint);

              jint getPopulationSize() const;
            };
          }
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          namespace noderiv {
            extern PyType_Def PY_TYPE_DEF(CMAESOptimizer$PopulationSize);
            extern PyTypeObject *PY_TYPE(CMAESOptimizer$PopulationSize);

            class t_CMAESOptimizer$PopulationSize {
            public:
              PyObject_HEAD
              CMAESOptimizer$PopulationSize object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_CMAESOptimizer$PopulationSize *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const CMAESOptimizer$PopulationSize&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const CMAESOptimizer$PopulationSize&, PyTypeObject *);
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
