#ifndef org_hipparchus_optim_SimpleValueChecker_H
#define org_hipparchus_optim_SimpleValueChecker_H

#include "org/hipparchus/optim/AbstractConvergenceChecker.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      class PointValuePair;
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

      class SimpleValueChecker : public ::org::hipparchus::optim::AbstractConvergenceChecker {
       public:
        enum {
          mid_init$_13edac039e8cc967,
          mid_init$_905e65280a4e6722,
          mid_converged_a1d1049a885bc8f5,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit SimpleValueChecker(jobject obj) : ::org::hipparchus::optim::AbstractConvergenceChecker(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        SimpleValueChecker(const SimpleValueChecker& obj) : ::org::hipparchus::optim::AbstractConvergenceChecker(obj) {}

        SimpleValueChecker(jdouble, jdouble);
        SimpleValueChecker(jdouble, jdouble, jint);

        jboolean converged(jint, const ::org::hipparchus::optim::PointValuePair &, const ::org::hipparchus::optim::PointValuePair &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace optim {
      extern PyType_Def PY_TYPE_DEF(SimpleValueChecker);
      extern PyTypeObject *PY_TYPE(SimpleValueChecker);

      class t_SimpleValueChecker {
      public:
        PyObject_HEAD
        SimpleValueChecker object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_SimpleValueChecker *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const SimpleValueChecker&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const SimpleValueChecker&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
