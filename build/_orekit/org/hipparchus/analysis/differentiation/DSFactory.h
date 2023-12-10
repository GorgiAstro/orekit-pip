#ifndef org_hipparchus_analysis_differentiation_DSFactory_H
#define org_hipparchus_analysis_differentiation_DSFactory_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        class DerivativeStructure;
        class DSFactory$DSField;
        class DSCompiler;
      }
    }
    namespace exception {
      class MathIllegalArgumentException;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        class DSFactory : public ::java::lang::Object {
         public:
          enum {
            mid_init$_6f37635c3285dbdf,
            mid_build_b45548a69087af0a,
            mid_constant_b3ed376bfd09e93b,
            mid_getCompiler_ae6f9f9cc48aac48,
            mid_getDerivativeField_6a64b248da400b8f,
            mid_variable_b75c7fa4df018e3b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DSFactory(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DSFactory(const DSFactory& obj) : ::java::lang::Object(obj) {}

          DSFactory(jint, jint);

          ::org::hipparchus::analysis::differentiation::DerivativeStructure build(const JArray< jdouble > &) const;
          ::org::hipparchus::analysis::differentiation::DerivativeStructure constant(jdouble) const;
          ::org::hipparchus::analysis::differentiation::DSCompiler getCompiler() const;
          ::org::hipparchus::analysis::differentiation::DSFactory$DSField getDerivativeField() const;
          ::org::hipparchus::analysis::differentiation::DerivativeStructure variable(jint, jdouble) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        extern PyType_Def PY_TYPE_DEF(DSFactory);
        extern PyTypeObject *PY_TYPE(DSFactory);

        class t_DSFactory {
        public:
          PyObject_HEAD
          DSFactory object;
          static PyObject *wrap_Object(const DSFactory&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
