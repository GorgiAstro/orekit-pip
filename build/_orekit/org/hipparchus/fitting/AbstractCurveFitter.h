#ifndef org_hipparchus_fitting_AbstractCurveFitter_H
#define org_hipparchus_fitting_AbstractCurveFitter_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Collection;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace fitting {
      class WeightedObservedPoint;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace fitting {

      class AbstractCurveFitter : public ::java::lang::Object {
       public:
        enum {
          mid_init$_a1fa5dae97ea5ed2,
          mid_fit_c635a920a1414ef9,
          mid_getOptimizer_c2c32f8aeab465c5,
          mid_getProblem_067ae4e9e4e5b47a,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit AbstractCurveFitter(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        AbstractCurveFitter(const AbstractCurveFitter& obj) : ::java::lang::Object(obj) {}

        AbstractCurveFitter();

        JArray< jdouble > fit(const ::java::util::Collection &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace fitting {
      extern PyType_Def PY_TYPE_DEF(AbstractCurveFitter);
      extern PyTypeObject *PY_TYPE(AbstractCurveFitter);

      class t_AbstractCurveFitter {
      public:
        PyObject_HEAD
        AbstractCurveFitter object;
        static PyObject *wrap_Object(const AbstractCurveFitter&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
