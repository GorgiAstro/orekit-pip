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
            mid_init$_3313c75e3e16c428,
            mid_build_86f1b5af7e082a1a,
            mid_constant_d33302169f933b5a,
            mid_getCompiler_e0888effe8b453a6,
            mid_getDerivativeField_41dff4b84eb98073,
            mid_variable_3955647bcb5e5f97,
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
