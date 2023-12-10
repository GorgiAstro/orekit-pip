#ifndef org_hipparchus_optim_SimpleBounds_H
#define org_hipparchus_optim_SimpleBounds_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      class OptimizationData;
      class SimpleBounds;
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

      class SimpleBounds : public ::java::lang::Object {
       public:
        enum {
          mid_init$_0d03c8a1d7f56f02,
          mid_getLower_7cdc325af0834901,
          mid_getUpper_7cdc325af0834901,
          mid_unbounded_d944268fde9fcc18,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit SimpleBounds(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        SimpleBounds(const SimpleBounds& obj) : ::java::lang::Object(obj) {}

        SimpleBounds(const JArray< jdouble > &, const JArray< jdouble > &);

        JArray< jdouble > getLower() const;
        JArray< jdouble > getUpper() const;
        static SimpleBounds unbounded(jint);
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace optim {
      extern PyType_Def PY_TYPE_DEF(SimpleBounds);
      extern PyTypeObject *PY_TYPE(SimpleBounds);

      class t_SimpleBounds {
      public:
        PyObject_HEAD
        SimpleBounds object;
        static PyObject *wrap_Object(const SimpleBounds&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
