#ifndef org_hipparchus_optim_MaxEval_H
#define org_hipparchus_optim_MaxEval_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      class MaxEval;
      class OptimizationData;
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

      class MaxEval : public ::java::lang::Object {
       public:
        enum {
          mid_init$_a3da1a935cb37f7b,
          mid_getMaxEval_412668abc8d889e9,
          mid_unlimited_df65f975db0d1d75,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit MaxEval(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        MaxEval(const MaxEval& obj) : ::java::lang::Object(obj) {}

        MaxEval(jint);

        jint getMaxEval() const;
        static MaxEval unlimited();
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace optim {
      extern PyType_Def PY_TYPE_DEF(MaxEval);
      extern PyTypeObject *PY_TYPE(MaxEval);

      class t_MaxEval {
      public:
        PyObject_HEAD
        MaxEval object;
        static PyObject *wrap_Object(const MaxEval&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
