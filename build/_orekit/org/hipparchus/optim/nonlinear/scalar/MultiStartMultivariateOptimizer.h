#ifndef org_hipparchus_optim_nonlinear_scalar_MultiStartMultivariateOptimizer_H
#define org_hipparchus_optim_nonlinear_scalar_MultiStartMultivariateOptimizer_H

#include "org/hipparchus/optim/BaseMultiStartMultivariateOptimizer.h"

namespace org {
  namespace hipparchus {
    namespace random {
      class RandomVectorGenerator;
    }
    namespace exception {
      class MathIllegalArgumentException;
      class NullArgumentException;
    }
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          class MultivariateOptimizer;
        }
      }
      class PointValuePair;
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

          class MultiStartMultivariateOptimizer : public ::org::hipparchus::optim::BaseMultiStartMultivariateOptimizer {
           public:
            enum {
              mid_init$_c37061ecdb337b1c,
              mid_getOptima_80ecb9f5bff58fab,
              mid_clear_0640e6acf969ed28,
              mid_store_45c1422479aa96f0,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit MultiStartMultivariateOptimizer(jobject obj) : ::org::hipparchus::optim::BaseMultiStartMultivariateOptimizer(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            MultiStartMultivariateOptimizer(const MultiStartMultivariateOptimizer& obj) : ::org::hipparchus::optim::BaseMultiStartMultivariateOptimizer(obj) {}

            MultiStartMultivariateOptimizer(const ::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer &, jint, const ::org::hipparchus::random::RandomVectorGenerator &);

            JArray< ::org::hipparchus::optim::PointValuePair > getOptima() const;
          };
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
          extern PyType_Def PY_TYPE_DEF(MultiStartMultivariateOptimizer);
          extern PyTypeObject *PY_TYPE(MultiStartMultivariateOptimizer);

          class t_MultiStartMultivariateOptimizer {
          public:
            PyObject_HEAD
            MultiStartMultivariateOptimizer object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_MultiStartMultivariateOptimizer *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const MultiStartMultivariateOptimizer&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const MultiStartMultivariateOptimizer&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
