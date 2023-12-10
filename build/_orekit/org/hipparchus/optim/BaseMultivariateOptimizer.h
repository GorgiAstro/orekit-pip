#ifndef org_hipparchus_optim_BaseMultivariateOptimizer_H
#define org_hipparchus_optim_BaseMultivariateOptimizer_H

#include "org/hipparchus/optim/BaseOptimizer.h"

namespace org {
  namespace hipparchus {
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

      class BaseMultivariateOptimizer : public ::org::hipparchus::optim::BaseOptimizer {
       public:
        enum {
          mid_getLowerBound_60c7040667a7dc5c,
          mid_getStartPoint_60c7040667a7dc5c,
          mid_getUpperBound_60c7040667a7dc5c,
          mid_optimize_19319236ce3fd082,
          mid_parseOptimizationData_3d26e9f3a1d7e833,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit BaseMultivariateOptimizer(jobject obj) : ::org::hipparchus::optim::BaseOptimizer(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        BaseMultivariateOptimizer(const BaseMultivariateOptimizer& obj) : ::org::hipparchus::optim::BaseOptimizer(obj) {}

        JArray< jdouble > getLowerBound() const;
        JArray< jdouble > getStartPoint() const;
        JArray< jdouble > getUpperBound() const;
        ::java::lang::Object optimize(const JArray< ::org::hipparchus::optim::OptimizationData > &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace optim {
      extern PyType_Def PY_TYPE_DEF(BaseMultivariateOptimizer);
      extern PyTypeObject *PY_TYPE(BaseMultivariateOptimizer);

      class t_BaseMultivariateOptimizer {
      public:
        PyObject_HEAD
        BaseMultivariateOptimizer object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_BaseMultivariateOptimizer *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const BaseMultivariateOptimizer&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const BaseMultivariateOptimizer&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
