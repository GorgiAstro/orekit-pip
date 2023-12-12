#ifndef org_hipparchus_analysis_CalculusFieldUnivariateMatrixFunction_H
#define org_hipparchus_analysis_CalculusFieldUnivariateMatrixFunction_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace analysis {

      class CalculusFieldUnivariateMatrixFunction : public ::java::lang::Object {
       public:
        enum {
          mid_value_37731553c578c485,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit CalculusFieldUnivariateMatrixFunction(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        CalculusFieldUnivariateMatrixFunction(const CalculusFieldUnivariateMatrixFunction& obj) : ::java::lang::Object(obj) {}

        JArray< JArray< ::org::hipparchus::CalculusFieldElement > > value(const ::org::hipparchus::CalculusFieldElement &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace analysis {
      extern PyType_Def PY_TYPE_DEF(CalculusFieldUnivariateMatrixFunction);
      extern PyTypeObject *PY_TYPE(CalculusFieldUnivariateMatrixFunction);

      class t_CalculusFieldUnivariateMatrixFunction {
      public:
        PyObject_HEAD
        CalculusFieldUnivariateMatrixFunction object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_CalculusFieldUnivariateMatrixFunction *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const CalculusFieldUnivariateMatrixFunction&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const CalculusFieldUnivariateMatrixFunction&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
