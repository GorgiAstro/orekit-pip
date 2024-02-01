#ifndef org_hipparchus_analysis_FieldMultivariateMatrixFunction_H
#define org_hipparchus_analysis_FieldMultivariateMatrixFunction_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class Field;
    namespace analysis {
      class CalculusFieldMultivariateMatrixFunction;
    }
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

      class FieldMultivariateMatrixFunction : public ::java::lang::Object {
       public:
        enum {
          mid_toCalculusFieldMultivariateMatrixFunction_012ff5b04861d1c4,
          mid_value_62d646651711e99a,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FieldMultivariateMatrixFunction(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FieldMultivariateMatrixFunction(const FieldMultivariateMatrixFunction& obj) : ::java::lang::Object(obj) {}

        ::org::hipparchus::analysis::CalculusFieldMultivariateMatrixFunction toCalculusFieldMultivariateMatrixFunction(const ::org::hipparchus::Field &) const;
        JArray< JArray< ::org::hipparchus::CalculusFieldElement > > value(const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace analysis {
      extern PyType_Def PY_TYPE_DEF(FieldMultivariateMatrixFunction);
      extern PyTypeObject *PY_TYPE(FieldMultivariateMatrixFunction);

      class t_FieldMultivariateMatrixFunction {
      public:
        PyObject_HEAD
        FieldMultivariateMatrixFunction object;
        static PyObject *wrap_Object(const FieldMultivariateMatrixFunction&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
