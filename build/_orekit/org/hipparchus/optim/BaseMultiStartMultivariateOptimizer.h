#ifndef org_hipparchus_optim_BaseMultiStartMultivariateOptimizer_H
#define org_hipparchus_optim_BaseMultiStartMultivariateOptimizer_H

#include "org/hipparchus/optim/BaseMultivariateOptimizer.h"

namespace org {
  namespace hipparchus {
    namespace random {
      class RandomVectorGenerator;
    }
    namespace optim {
      class OptimizationData;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class Object;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace optim {

      class BaseMultiStartMultivariateOptimizer : public ::org::hipparchus::optim::BaseMultivariateOptimizer {
       public:
        enum {
          mid_init$_21803bda49e8e21c,
          mid_getEvaluations_570ce0828f81a2c1,
          mid_getOptima_b93c730013ce64c6,
          mid_optimize_19319236ce3fd082,
          mid_doOptimize_4d26fd885228c716,
          mid_clear_0fa09c18fee449d5,
          mid_store_2990946c992aafed,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit BaseMultiStartMultivariateOptimizer(jobject obj) : ::org::hipparchus::optim::BaseMultivariateOptimizer(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        BaseMultiStartMultivariateOptimizer(const BaseMultiStartMultivariateOptimizer& obj) : ::org::hipparchus::optim::BaseMultivariateOptimizer(obj) {}

        BaseMultiStartMultivariateOptimizer(const ::org::hipparchus::optim::BaseMultivariateOptimizer &, jint, const ::org::hipparchus::random::RandomVectorGenerator &);

        jint getEvaluations() const;
        JArray< ::java::lang::Object > getOptima() const;
        ::java::lang::Object optimize(const JArray< ::org::hipparchus::optim::OptimizationData > &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace optim {
      extern PyType_Def PY_TYPE_DEF(BaseMultiStartMultivariateOptimizer);
      extern PyTypeObject *PY_TYPE(BaseMultiStartMultivariateOptimizer);

      class t_BaseMultiStartMultivariateOptimizer {
      public:
        PyObject_HEAD
        BaseMultiStartMultivariateOptimizer object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_BaseMultiStartMultivariateOptimizer *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const BaseMultiStartMultivariateOptimizer&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const BaseMultiStartMultivariateOptimizer&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
