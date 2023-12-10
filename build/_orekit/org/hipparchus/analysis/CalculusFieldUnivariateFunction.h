#ifndef org_hipparchus_analysis_CalculusFieldUnivariateFunction_H
#define org_hipparchus_analysis_CalculusFieldUnivariateFunction_H

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

      class CalculusFieldUnivariateFunction : public ::java::lang::Object {
       public:
        enum {
          mid_value_a4b1871f4d29e58b,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit CalculusFieldUnivariateFunction(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        CalculusFieldUnivariateFunction(const CalculusFieldUnivariateFunction& obj) : ::java::lang::Object(obj) {}

        ::org::hipparchus::CalculusFieldElement value(const ::org::hipparchus::CalculusFieldElement &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace analysis {
      extern PyType_Def PY_TYPE_DEF(CalculusFieldUnivariateFunction);
      extern PyTypeObject *PY_TYPE(CalculusFieldUnivariateFunction);

      class t_CalculusFieldUnivariateFunction {
      public:
        PyObject_HEAD
        CalculusFieldUnivariateFunction object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_CalculusFieldUnivariateFunction *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const CalculusFieldUnivariateFunction&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const CalculusFieldUnivariateFunction&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
