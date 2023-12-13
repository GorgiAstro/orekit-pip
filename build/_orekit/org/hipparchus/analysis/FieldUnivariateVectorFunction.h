#ifndef org_hipparchus_analysis_FieldUnivariateVectorFunction_H
#define org_hipparchus_analysis_FieldUnivariateVectorFunction_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
    namespace analysis {
      class CalculusFieldUnivariateVectorFunction;
    }
    class Field;
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

      class FieldUnivariateVectorFunction : public ::java::lang::Object {
       public:
        enum {
          mid_toCalculusFieldUnivariateVectorFunction_2dd73075b344a4c2,
          mid_value_178e06dface5c0c9,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FieldUnivariateVectorFunction(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FieldUnivariateVectorFunction(const FieldUnivariateVectorFunction& obj) : ::java::lang::Object(obj) {}

        ::org::hipparchus::analysis::CalculusFieldUnivariateVectorFunction toCalculusFieldUnivariateVectorFunction(const ::org::hipparchus::Field &) const;
        JArray< ::org::hipparchus::CalculusFieldElement > value(const ::org::hipparchus::CalculusFieldElement &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace analysis {
      extern PyType_Def PY_TYPE_DEF(FieldUnivariateVectorFunction);
      extern PyTypeObject *PY_TYPE(FieldUnivariateVectorFunction);

      class t_FieldUnivariateVectorFunction {
      public:
        PyObject_HEAD
        FieldUnivariateVectorFunction object;
        static PyObject *wrap_Object(const FieldUnivariateVectorFunction&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
