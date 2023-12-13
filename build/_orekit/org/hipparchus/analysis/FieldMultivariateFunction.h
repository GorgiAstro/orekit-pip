#ifndef org_hipparchus_analysis_FieldMultivariateFunction_H
#define org_hipparchus_analysis_FieldMultivariateFunction_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      class CalculusFieldMultivariateFunction;
    }
    class CalculusFieldElement;
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

      class FieldMultivariateFunction : public ::java::lang::Object {
       public:
        enum {
          mid_toCalculusFieldMultivariateFunction_0d04248a9e90108a,
          mid_value_ba5ea64a789ad864,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FieldMultivariateFunction(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FieldMultivariateFunction(const FieldMultivariateFunction& obj) : ::java::lang::Object(obj) {}

        ::org::hipparchus::analysis::CalculusFieldMultivariateFunction toCalculusFieldMultivariateFunction(const ::org::hipparchus::Field &) const;
        ::org::hipparchus::CalculusFieldElement value(const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace analysis {
      extern PyType_Def PY_TYPE_DEF(FieldMultivariateFunction);
      extern PyTypeObject *PY_TYPE(FieldMultivariateFunction);

      class t_FieldMultivariateFunction {
      public:
        PyObject_HEAD
        FieldMultivariateFunction object;
        static PyObject *wrap_Object(const FieldMultivariateFunction&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
