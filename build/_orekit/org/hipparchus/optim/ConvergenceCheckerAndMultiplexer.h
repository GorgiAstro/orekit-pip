#ifndef org_hipparchus_optim_ConvergenceCheckerAndMultiplexer_H
#define org_hipparchus_optim_ConvergenceCheckerAndMultiplexer_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      class ConvergenceChecker;
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace optim {

      class ConvergenceCheckerAndMultiplexer : public ::java::lang::Object {
       public:
        enum {
          mid_init$_0e7c3032c7c93ed3,
          mid_converged_061aaa68e115701e,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit ConvergenceCheckerAndMultiplexer(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        ConvergenceCheckerAndMultiplexer(const ConvergenceCheckerAndMultiplexer& obj) : ::java::lang::Object(obj) {}

        ConvergenceCheckerAndMultiplexer(const ::java::util::List &);

        jboolean converged(jint, const ::java::lang::Object &, const ::java::lang::Object &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace optim {
      extern PyType_Def PY_TYPE_DEF(ConvergenceCheckerAndMultiplexer);
      extern PyTypeObject *PY_TYPE(ConvergenceCheckerAndMultiplexer);

      class t_ConvergenceCheckerAndMultiplexer {
      public:
        PyObject_HEAD
        ConvergenceCheckerAndMultiplexer object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_ConvergenceCheckerAndMultiplexer *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const ConvergenceCheckerAndMultiplexer&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const ConvergenceCheckerAndMultiplexer&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
