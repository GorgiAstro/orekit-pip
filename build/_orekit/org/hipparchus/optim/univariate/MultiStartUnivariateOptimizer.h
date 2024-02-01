#ifndef org_hipparchus_optim_univariate_MultiStartUnivariateOptimizer_H
#define org_hipparchus_optim_univariate_MultiStartUnivariateOptimizer_H

#include "org/hipparchus/optim/univariate/UnivariateOptimizer.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace univariate {
        class UnivariatePointValuePair;
      }
      class OptimizationData;
    }
    namespace random {
      class RandomGenerator;
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
      namespace univariate {

        class MultiStartUnivariateOptimizer : public ::org::hipparchus::optim::univariate::UnivariateOptimizer {
         public:
          enum {
            mid_init$_e4d93d959ad5a158,
            mid_getEvaluations_d6ab429752e7c267,
            mid_getOptima_0b09cd040eebf691,
            mid_optimize_d4d3dd9bd6992b67,
            mid_doOptimize_3bb7748f0ac76925,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MultiStartUnivariateOptimizer(jobject obj) : ::org::hipparchus::optim::univariate::UnivariateOptimizer(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MultiStartUnivariateOptimizer(const MultiStartUnivariateOptimizer& obj) : ::org::hipparchus::optim::univariate::UnivariateOptimizer(obj) {}

          MultiStartUnivariateOptimizer(const ::org::hipparchus::optim::univariate::UnivariateOptimizer &, jint, const ::org::hipparchus::random::RandomGenerator &);

          jint getEvaluations() const;
          JArray< ::org::hipparchus::optim::univariate::UnivariatePointValuePair > getOptima() const;
          ::org::hipparchus::optim::univariate::UnivariatePointValuePair optimize(const JArray< ::org::hipparchus::optim::OptimizationData > &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace univariate {
        extern PyType_Def PY_TYPE_DEF(MultiStartUnivariateOptimizer);
        extern PyTypeObject *PY_TYPE(MultiStartUnivariateOptimizer);

        class t_MultiStartUnivariateOptimizer {
        public:
          PyObject_HEAD
          MultiStartUnivariateOptimizer object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_MultiStartUnivariateOptimizer *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const MultiStartUnivariateOptimizer&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const MultiStartUnivariateOptimizer&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
