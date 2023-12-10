#ifndef org_hipparchus_optim_MaxIter_H
#define org_hipparchus_optim_MaxIter_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      class OptimizationData;
      class MaxIter;
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

      class MaxIter : public ::java::lang::Object {
       public:
        enum {
          mid_init$_0a2a1ac2721c0336,
          mid_getMaxIter_f2f64475e4580546,
          mid_unlimited_e7a0d71697a76da2,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit MaxIter(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        MaxIter(const MaxIter& obj) : ::java::lang::Object(obj) {}

        MaxIter(jint);

        jint getMaxIter() const;
        static MaxIter unlimited();
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace optim {
      extern PyType_Def PY_TYPE_DEF(MaxIter);
      extern PyTypeObject *PY_TYPE(MaxIter);

      class t_MaxIter {
      public:
        PyObject_HEAD
        MaxIter object;
        static PyObject *wrap_Object(const MaxIter&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
