#ifndef org_hipparchus_analysis_CalculusFieldMultivariateVectorFunction_H
#define org_hipparchus_analysis_CalculusFieldMultivariateVectorFunction_H

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

      class CalculusFieldMultivariateVectorFunction : public ::java::lang::Object {
       public:
        enum {
          mid_value_38b803e86c0bea36,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit CalculusFieldMultivariateVectorFunction(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        CalculusFieldMultivariateVectorFunction(const CalculusFieldMultivariateVectorFunction& obj) : ::java::lang::Object(obj) {}

        JArray< ::org::hipparchus::CalculusFieldElement > value(const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace analysis {
      extern PyType_Def PY_TYPE_DEF(CalculusFieldMultivariateVectorFunction);
      extern PyTypeObject *PY_TYPE(CalculusFieldMultivariateVectorFunction);

      class t_CalculusFieldMultivariateVectorFunction {
      public:
        PyObject_HEAD
        CalculusFieldMultivariateVectorFunction object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_CalculusFieldMultivariateVectorFunction *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const CalculusFieldMultivariateVectorFunction&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const CalculusFieldMultivariateVectorFunction&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
