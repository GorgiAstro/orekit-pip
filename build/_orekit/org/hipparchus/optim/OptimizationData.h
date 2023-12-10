#ifndef org_hipparchus_optim_OptimizationData_H
#define org_hipparchus_optim_OptimizationData_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace optim {

      class OptimizationData : public ::java::lang::Object {
       public:

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit OptimizationData(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        OptimizationData(const OptimizationData& obj) : ::java::lang::Object(obj) {}
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace optim {
      extern PyType_Def PY_TYPE_DEF(OptimizationData);
      extern PyTypeObject *PY_TYPE(OptimizationData);

      class t_OptimizationData {
      public:
        PyObject_HEAD
        OptimizationData object;
        static PyObject *wrap_Object(const OptimizationData&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
