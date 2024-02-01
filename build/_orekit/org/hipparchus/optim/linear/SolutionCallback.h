#ifndef org_hipparchus_optim_linear_SolutionCallback_H
#define org_hipparchus_optim_linear_SolutionCallback_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      class OptimizationData;
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
      namespace linear {

        class SolutionCallback : public ::java::lang::Object {
         public:
          enum {
            mid_init$_ff7cb6c242604316,
            mid_getSolution_a812a1ba2cf9f7b4,
            mid_isSolutionOptimal_eee3de00fe971136,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SolutionCallback(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SolutionCallback(const SolutionCallback& obj) : ::java::lang::Object(obj) {}

          SolutionCallback();

          ::org::hipparchus::optim::PointValuePair getSolution() const;
          jboolean isSolutionOptimal() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace linear {
        extern PyType_Def PY_TYPE_DEF(SolutionCallback);
        extern PyTypeObject *PY_TYPE(SolutionCallback);

        class t_SolutionCallback {
        public:
          PyObject_HEAD
          SolutionCallback object;
          static PyObject *wrap_Object(const SolutionCallback&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
