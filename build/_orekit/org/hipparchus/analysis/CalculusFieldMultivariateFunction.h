#ifndef org_hipparchus_analysis_CalculusFieldMultivariateFunction_H
#define org_hipparchus_analysis_CalculusFieldMultivariateFunction_H

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

      class CalculusFieldMultivariateFunction : public ::java::lang::Object {
       public:
        enum {
          mid_value_05c598bf3375e090,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit CalculusFieldMultivariateFunction(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        CalculusFieldMultivariateFunction(const CalculusFieldMultivariateFunction& obj) : ::java::lang::Object(obj) {}

        ::org::hipparchus::CalculusFieldElement value(const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace analysis {
      extern PyType_Def PY_TYPE_DEF(CalculusFieldMultivariateFunction);
      extern PyTypeObject *PY_TYPE(CalculusFieldMultivariateFunction);

      class t_CalculusFieldMultivariateFunction {
      public:
        PyObject_HEAD
        CalculusFieldMultivariateFunction object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_CalculusFieldMultivariateFunction *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const CalculusFieldMultivariateFunction&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const CalculusFieldMultivariateFunction&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
