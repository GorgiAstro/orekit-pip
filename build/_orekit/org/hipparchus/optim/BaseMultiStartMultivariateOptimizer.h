#ifndef org_hipparchus_optim_BaseMultiStartMultivariateOptimizer_H
#define org_hipparchus_optim_BaseMultiStartMultivariateOptimizer_H

#include "org/hipparchus/optim/BaseMultivariateOptimizer.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      class OptimizationData;
    }
    namespace random {
      class RandomVectorGenerator;
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
          mid_init$_56fd5115385e7d35,
          mid_getEvaluations_d6ab429752e7c267,
          mid_getOptima_2ab86268ef7a6631,
          mid_optimize_7c1cfcae8b9ddcfc,
          mid_doOptimize_704a5bee58538972,
          mid_clear_ff7cb6c242604316,
          mid_store_83ee235bb1e64e94,
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
