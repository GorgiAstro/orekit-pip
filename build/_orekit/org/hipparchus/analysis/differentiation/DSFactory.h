#ifndef org_hipparchus_analysis_differentiation_DSFactory_H
#define org_hipparchus_analysis_differentiation_DSFactory_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        class DSCompiler;
        class DerivativeStructure;
        class DSFactory$DSField;
      }
    }
    namespace exception {
      class MathIllegalArgumentException;
    }
  }
}
namespace java {
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Class;
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
            mid_init$_8dbc1129a3c2557a,
            mid_build_a99895f2c956a8f6,
            mid_constant_c8b983f259312c1e,
            mid_getCompiler_b0ae8cc686efdcbe,
            mid_getDerivativeField_82fd98fd27d2098b,
            mid_variable_d59d7a8c1b43c3a7,
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
