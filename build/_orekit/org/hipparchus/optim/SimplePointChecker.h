#ifndef org_hipparchus_optim_SimplePointChecker_H
#define org_hipparchus_optim_SimplePointChecker_H

#include "org/hipparchus/optim/AbstractConvergenceChecker.h"

namespace java {
  namespace lang {
    class Class;
    class Object;
  }
}
namespace org {
  namespace hipparchus {
    namespace util {
      class Pair;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace optim {

      class SimplePointChecker : public ::org::hipparchus::optim::AbstractConvergenceChecker {
       public:
        enum {
          mid_init$_13edac039e8cc967,
          mid_init$_905e65280a4e6722,
          mid_converged_5c25e68860d2a05f,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit SimplePointChecker(jobject obj) : ::org::hipparchus::optim::AbstractConvergenceChecker(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        SimplePointChecker(const SimplePointChecker& obj) : ::org::hipparchus::optim::AbstractConvergenceChecker(obj) {}

        SimplePointChecker(jdouble, jdouble);
        SimplePointChecker(jdouble, jdouble, jint);

        jboolean converged(jint, const ::org::hipparchus::util::Pair &, const ::org::hipparchus::util::Pair &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace optim {
      extern PyType_Def PY_TYPE_DEF(SimplePointChecker);
      extern PyTypeObject *PY_TYPE(SimplePointChecker);

      class t_SimplePointChecker {
      public:
        PyObject_HEAD
        SimplePointChecker object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_SimplePointChecker *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const SimplePointChecker&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const SimplePointChecker&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
