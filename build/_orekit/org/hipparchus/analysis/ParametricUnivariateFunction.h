#ifndef org_hipparchus_analysis_ParametricUnivariateFunction_H
#define org_hipparchus_analysis_ParametricUnivariateFunction_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace analysis {

      class ParametricUnivariateFunction : public ::java::lang::Object {
       public:
        enum {
          mid_gradient_31b9a2982d73e37a,
          mid_value_1bc40469b56f2c3c,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit ParametricUnivariateFunction(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        ParametricUnivariateFunction(const ParametricUnivariateFunction& obj) : ::java::lang::Object(obj) {}

        JArray< jdouble > gradient(jdouble, const JArray< jdouble > &) const;
        jdouble value(jdouble, const JArray< jdouble > &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace analysis {
      extern PyType_Def PY_TYPE_DEF(ParametricUnivariateFunction);
      extern PyTypeObject *PY_TYPE(ParametricUnivariateFunction);

      class t_ParametricUnivariateFunction {
      public:
        PyObject_HEAD
        ParametricUnivariateFunction object;
        static PyObject *wrap_Object(const ParametricUnivariateFunction&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
