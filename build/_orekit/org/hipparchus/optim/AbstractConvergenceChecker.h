#ifndef org_hipparchus_optim_AbstractConvergenceChecker_H
#define org_hipparchus_optim_AbstractConvergenceChecker_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace optim {
      class ConvergenceChecker;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace optim {

      class AbstractConvergenceChecker : public ::java::lang::Object {
       public:
        enum {
          mid_init$_1d715fa3b7b756e1,
          mid_converged_530133671081dc04,
          mid_getAbsoluteThreshold_456d9a2f64d6b28d,
          mid_getRelativeThreshold_456d9a2f64d6b28d,
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
