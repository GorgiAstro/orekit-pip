#ifndef org_hipparchus_optim_MaxEval_H
#define org_hipparchus_optim_MaxEval_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      class OptimizationData;
      class MaxEval;
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
          mid_init$_99803b0791f320ff,
          mid_getMaxEval_570ce0828f81a2c1,
          mid_unlimited_eef1161a66513938,
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
