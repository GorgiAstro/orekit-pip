#ifndef org_hipparchus_analysis_FieldMultivariateVectorFunction_H
#define org_hipparchus_analysis_FieldMultivariateVectorFunction_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class Field;
    namespace analysis {
      class CalculusFieldMultivariateVectorFunction;
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

      class FieldMultivariateVectorFunction : public ::java::lang::Object {
       public:
        enum {
          mid_toCalculusFieldMultivariateVectorFunction_380a7b8fc0bebdfe,
          mid_value_45349640cfb1ab66,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FieldMultivariateVectorFunction(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FieldMultivariateVectorFunction(const FieldMultivariateVectorFunction& obj) : ::java::lang::Object(obj) {}

        ::org::hipparchus::analysis::CalculusFieldMultivariateVectorFunction toCalculusFieldMultivariateVectorFunction(const ::org::hipparchus::Field &) const;
        JArray< ::org::hipparchus::CalculusFieldElement > value(const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace analysis {
      extern PyType_Def PY_TYPE_DEF(FieldMultivariateVectorFunction);
      extern PyTypeObject *PY_TYPE(FieldMultivariateVectorFunction);

      class t_FieldMultivariateVectorFunction {
      public:
        PyObject_HEAD
        FieldMultivariateVectorFunction object;
        static PyObject *wrap_Object(const FieldMultivariateVectorFunction&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
