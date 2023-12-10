#ifndef org_hipparchus_analysis_FieldUnivariateMatrixFunction_H
#define org_hipparchus_analysis_FieldUnivariateMatrixFunction_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
    namespace analysis {
      class CalculusFieldUnivariateMatrixFunction;
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

      class FieldUnivariateMatrixFunction : public ::java::lang::Object {
       public:
        enum {
          mid_toCalculusFieldUnivariateMatrixFunction_db6f0dbadebc2178,
          mid_value_4c83cd715e038657,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FieldUnivariateMatrixFunction(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FieldUnivariateMatrixFunction(const FieldUnivariateMatrixFunction& obj) : ::java::lang::Object(obj) {}

        ::org::hipparchus::analysis::CalculusFieldUnivariateMatrixFunction toCalculusFieldUnivariateMatrixFunction(const ::org::hipparchus::Field &) const;
        JArray< JArray< ::org::hipparchus::CalculusFieldElement > > value(const ::org::hipparchus::CalculusFieldElement &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace analysis {
      extern PyType_Def PY_TYPE_DEF(FieldUnivariateMatrixFunction);
      extern PyTypeObject *PY_TYPE(FieldUnivariateMatrixFunction);

      class t_FieldUnivariateMatrixFunction {
      public:
        PyObject_HEAD
        FieldUnivariateMatrixFunction object;
        static PyObject *wrap_Object(const FieldUnivariateMatrixFunction&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
