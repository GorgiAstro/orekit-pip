#ifndef org_hipparchus_analysis_CalculusFieldMultivariateMatrixFunction_H
#define org_hipparchus_analysis_CalculusFieldMultivariateMatrixFunction_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
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
    namespace analysis {

      class CalculusFieldMultivariateMatrixFunction : public ::java::lang::Object {
       public:
        enum {
          mid_value_f77247e6b79358da,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit CalculusFieldMultivariateMatrixFunction(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        CalculusFieldMultivariateMatrixFunction(const CalculusFieldMultivariateMatrixFunction& obj) : ::java::lang::Object(obj) {}

        JArray< JArray< ::org::hipparchus::CalculusFieldElement > > value(const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace analysis {
      extern PyType_Def PY_TYPE_DEF(CalculusFieldMultivariateMatrixFunction);
      extern PyTypeObject *PY_TYPE(CalculusFieldMultivariateMatrixFunction);

      class t_CalculusFieldMultivariateMatrixFunction {
      public:
        PyObject_HEAD
        CalculusFieldMultivariateMatrixFunction object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_CalculusFieldMultivariateMatrixFunction *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const CalculusFieldMultivariateMatrixFunction&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const CalculusFieldMultivariateMatrixFunction&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
