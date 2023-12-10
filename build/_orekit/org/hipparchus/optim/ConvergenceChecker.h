#ifndef org_hipparchus_optim_ConvergenceChecker_H
#define org_hipparchus_optim_ConvergenceChecker_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace optim {

      class ConvergenceChecker : public ::java::lang::Object {
       public:
        enum {
          mid_converged_530133671081dc04,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit ConvergenceChecker(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        ConvergenceChecker(const ConvergenceChecker& obj) : ::java::lang::Object(obj) {}

        jboolean converged(jint, const ::java::lang::Object &, const ::java::lang::Object &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace optim {
      extern PyType_Def PY_TYPE_DEF(ConvergenceChecker);
      extern PyTypeObject *PY_TYPE(ConvergenceChecker);

      class t_ConvergenceChecker {
      public:
        PyObject_HEAD
        ConvergenceChecker object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_ConvergenceChecker *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const ConvergenceChecker&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const ConvergenceChecker&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
