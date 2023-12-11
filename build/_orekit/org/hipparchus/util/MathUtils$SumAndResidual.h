#ifndef org_hipparchus_util_MathUtils$SumAndResidual_H
#define org_hipparchus_util_MathUtils$SumAndResidual_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace util {

      class MathUtils$SumAndResidual : public ::java::lang::Object {
       public:
        enum {
          mid_getResidual_557b8123390d8d0c,
          mid_getSum_557b8123390d8d0c,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit MathUtils$SumAndResidual(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        MathUtils$SumAndResidual(const MathUtils$SumAndResidual& obj) : ::java::lang::Object(obj) {}

        jdouble getResidual() const;
        jdouble getSum() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace util {
      extern PyType_Def PY_TYPE_DEF(MathUtils$SumAndResidual);
      extern PyTypeObject *PY_TYPE(MathUtils$SumAndResidual);

      class t_MathUtils$SumAndResidual {
      public:
        PyObject_HEAD
        MathUtils$SumAndResidual object;
        static PyObject *wrap_Object(const MathUtils$SumAndResidual&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
