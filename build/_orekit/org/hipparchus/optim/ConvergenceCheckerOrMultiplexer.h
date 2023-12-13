#ifndef org_hipparchus_optim_ConvergenceCheckerOrMultiplexer_H
#define org_hipparchus_optim_ConvergenceCheckerOrMultiplexer_H

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

      class ConvergenceCheckerOrMultiplexer : public ::java::lang::Object {
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

        explicit ConvergenceCheckerOrMultiplexer(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        ConvergenceCheckerOrMultiplexer(const ConvergenceCheckerOrMultiplexer& obj) : ::java::lang::Object(obj) {}

        ConvergenceCheckerOrMultiplexer(const ::java::util::List &);

        jboolean converged(jint, const ::java::lang::Object &, const ::java::lang::Object &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace optim {
      extern PyType_Def PY_TYPE_DEF(ConvergenceCheckerOrMultiplexer);
      extern PyTypeObject *PY_TYPE(ConvergenceCheckerOrMultiplexer);

      class t_ConvergenceCheckerOrMultiplexer {
      public:
        PyObject_HEAD
        ConvergenceCheckerOrMultiplexer object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_ConvergenceCheckerOrMultiplexer *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const ConvergenceCheckerOrMultiplexer&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const ConvergenceCheckerOrMultiplexer&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
