#ifndef org_hipparchus_optim_nonlinear_scalar_MultiStartMultivariateOptimizer_H
#define org_hipparchus_optim_nonlinear_scalar_MultiStartMultivariateOptimizer_H

#include "org/hipparchus/optim/BaseMultiStartMultivariateOptimizer.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          class MultivariateOptimizer;
        }
      }
      class PointValuePair;
    }
    namespace exception {
      class NullArgumentException;
      class MathIllegalArgumentException;
    }
    namespace random {
      class RandomVectorGenerator;
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
              mid_init$_088236b2089b209e,
              mid_getOptima_fb04b599bc7d04e3,
              mid_clear_0fa09c18fee449d5,
              mid_store_ba76051a64c2f341,
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
