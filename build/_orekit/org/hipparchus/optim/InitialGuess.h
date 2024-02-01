#ifndef org_hipparchus_optim_InitialGuess_H
#define org_hipparchus_optim_InitialGuess_H

#include "java/lang/Object.h"

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
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace optim {

      class InitialGuess : public ::java::lang::Object {
       public:
        enum {
          mid_init$_a71c45509eaf92d1,
          mid_getInitialGuess_be783177b060994b,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit InitialGuess(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        InitialGuess(const InitialGuess& obj) : ::java::lang::Object(obj) {}

        InitialGuess(const JArray< jdouble > &);

        JArray< jdouble > getInitialGuess() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace optim {
      extern PyType_Def PY_TYPE_DEF(InitialGuess);
      extern PyTypeObject *PY_TYPE(InitialGuess);

      class t_InitialGuess {
      public:
        PyObject_HEAD
        InitialGuess object;
        static PyObject *wrap_Object(const InitialGuess&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
