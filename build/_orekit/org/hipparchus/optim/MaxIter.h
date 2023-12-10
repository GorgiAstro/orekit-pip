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
          mid_init$_99803b0791f320ff,
          mid_getMaxIter_570ce0828f81a2c1,
          mid_unlimited_e180e63eb968de6e,
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
