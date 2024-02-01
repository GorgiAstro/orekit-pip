#ifndef org_hipparchus_optim_AbstractConvergenceChecker_H
#define org_hipparchus_optim_AbstractConvergenceChecker_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      class ConvergenceChecker;
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

      class AbstractConvergenceChecker : public ::java::lang::Object {
       public:
        enum {
          mid_init$_13edac039e8cc967,
          mid_converged_cb974f0dd5d76f8e,
          mid_getAbsoluteThreshold_9981f74b2d109da6,
          mid_getRelativeThreshold_9981f74b2d109da6,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit AbstractConvergenceChecker(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        AbstractConvergenceChecker(const AbstractConvergenceChecker& obj) : ::java::lang::Object(obj) {}

        AbstractConvergenceChecker(jdouble, jdouble);

        jboolean converged(jint, const ::java::lang::Object &, const ::java::lang::Object &) const;
        jdouble getAbsoluteThreshold() const;
        jdouble getRelativeThreshold() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace optim {
      extern PyType_Def PY_TYPE_DEF(AbstractConvergenceChecker);
      extern PyTypeObject *PY_TYPE(AbstractConvergenceChecker);

      class t_AbstractConvergenceChecker {
      public:
        PyObject_HEAD
        AbstractConvergenceChecker object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_AbstractConvergenceChecker *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const AbstractConvergenceChecker&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const AbstractConvergenceChecker&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
