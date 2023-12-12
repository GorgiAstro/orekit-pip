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
          mid_init$_0640e6acf969ed28,
          mid_fit_b9db3c3b8b3696c0,
          mid_getProblem_cf073573d4101d89,
          mid_getOptimizer_7e2fe2387b2795bd,
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
