#ifndef org_hipparchus_analysis_FieldBivariateFunction_H
#define org_hipparchus_analysis_FieldBivariateFunction_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      class CalculusFieldBivariateFunction;
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

      class FieldBivariateFunction : public ::java::lang::Object {
       public:
        enum {
          mid_toCalculusFieldBivariateFunction_ee5f4a5d663cf9ce,
          mid_value_c6408fdce2cc6c1a,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FieldBivariateFunction(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FieldBivariateFunction(const FieldBivariateFunction& obj) : ::java::lang::Object(obj) {}

        ::org::hipparchus::analysis::CalculusFieldBivariateFunction toCalculusFieldBivariateFunction(const ::org::hipparchus::Field &) const;
        ::org::hipparchus::CalculusFieldElement value(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace analysis {
      extern PyType_Def PY_TYPE_DEF(FieldBivariateFunction);
      extern PyTypeObject *PY_TYPE(FieldBivariateFunction);

      class t_FieldBivariateFunction {
      public:
        PyObject_HEAD
        FieldBivariateFunction object;
        static PyObject *wrap_Object(const FieldBivariateFunction&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
