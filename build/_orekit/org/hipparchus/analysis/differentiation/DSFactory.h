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
    namespace exception {
      class MathIllegalArgumentException;
    }
    namespace analysis {
      namespace differentiation {
        class DSCompiler;
        class DerivativeStructure;
        class DSFactory$DSField;
      }
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
            mid_init$_b5d23e6c0858e8ed,
            mid_build_1e0d37b52d091497,
            mid_constant_f7de6915022fec9a,
            mid_getCompiler_cf2c785981ead135,
            mid_getDerivativeField_4ecc6a9742a924fc,
            mid_variable_d7e3d05a5f4188e8,
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
