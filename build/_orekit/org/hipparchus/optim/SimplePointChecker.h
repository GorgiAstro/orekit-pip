#ifndef org_hipparchus_optim_SimplePointChecker_H
#define org_hipparchus_optim_SimplePointChecker_H

#include "org/hipparchus/optim/AbstractConvergenceChecker.h"

namespace org {
  namespace hipparchus {
    namespace util {
      class Pair;
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

      class SimplePointChecker : public ::org::hipparchus::optim::AbstractConvergenceChecker {
       public:
        enum {
          mid_init$_ab23f4ae0fb33968,
          mid_init$_427af08acba367ca,
          mid_converged_ca0d344f89e25c9c,
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
