#ifndef org_hipparchus_analysis_FieldUnivariateFunction_H
#define org_hipparchus_analysis_FieldUnivariateFunction_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class Field;
    class CalculusFieldElement;
    namespace analysis {
      class CalculusFieldUnivariateFunction;
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
    namespace analysis {

      class FieldUnivariateFunction : public ::java::lang::Object {
       public:
        enum {
          mid_toCalculusFieldUnivariateFunction_5187efc2d6806a56,
          mid_value_6672ad854985cb64,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FieldUnivariateFunction(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FieldUnivariateFunction(const FieldUnivariateFunction& obj) : ::java::lang::Object(obj) {}

        ::org::hipparchus::analysis::CalculusFieldUnivariateFunction toCalculusFieldUnivariateFunction(const ::org::hipparchus::Field &) const;
        ::org::hipparchus::CalculusFieldElement value(const ::org::hipparchus::CalculusFieldElement &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace analysis {
      extern PyType_Def PY_TYPE_DEF(FieldUnivariateFunction);
      extern PyTypeObject *PY_TYPE(FieldUnivariateFunction);

      class t_FieldUnivariateFunction {
      public:
        PyObject_HEAD
        FieldUnivariateFunction object;
        static PyObject *wrap_Object(const FieldUnivariateFunction&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
