#ifndef org_hipparchus_optim_SimpleVectorValueChecker_H
#define org_hipparchus_optim_SimpleVectorValueChecker_H

#include "org/hipparchus/optim/AbstractConvergenceChecker.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace optim {
      class PointVectorValuePair;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace optim {

      class SimpleVectorValueChecker : public ::org::hipparchus::optim::AbstractConvergenceChecker {
       public:
        enum {
          mid_init$_8f2e782d5278b131,
          mid_init$_01fb2c777e5def32,
          mid_converged_caf08c7242b15bc0,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit SimpleVectorValueChecker(jobject obj) : ::org::hipparchus::optim::AbstractConvergenceChecker(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        SimpleVectorValueChecker(const SimpleVectorValueChecker& obj) : ::org::hipparchus::optim::AbstractConvergenceChecker(obj) {}

        SimpleVectorValueChecker(jdouble, jdouble);
        SimpleVectorValueChecker(jdouble, jdouble, jint);

        jboolean converged(jint, const ::org::hipparchus::optim::PointVectorValuePair &, const ::org::hipparchus::optim::PointVectorValuePair &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace optim {
      extern PyType_Def PY_TYPE_DEF(SimpleVectorValueChecker);
      extern PyTypeObject *PY_TYPE(SimpleVectorValueChecker);

      class t_SimpleVectorValueChecker {
      public:
        PyObject_HEAD
        SimpleVectorValueChecker object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_SimpleVectorValueChecker *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const SimpleVectorValueChecker&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const SimpleVectorValueChecker&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
