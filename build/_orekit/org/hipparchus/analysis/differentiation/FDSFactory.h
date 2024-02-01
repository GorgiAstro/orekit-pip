#ifndef org_hipparchus_analysis_differentiation_FDSFactory_H
#define org_hipparchus_analysis_differentiation_FDSFactory_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        class FieldDerivativeStructure;
        class DSCompiler;
        class FDSFactory$DerivativeField;
      }
    }
    namespace exception {
      class MathIllegalArgumentException;
    }
    class Field;
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
      namespace differentiation {

        class FDSFactory : public ::java::lang::Object {
         public:
          enum {
            mid_init$_ddbf374219cf6329,
            mid_build_73620040306e9955,
            mid_build_1658e30325c495f4,
            mid_constant_b9026a046a147de2,
            mid_constant_ca7a13fcccfd32de,
            mid_getCompiler_cf2c785981ead135,
            mid_getDerivativeField_66009d8e2e7d406d,
            mid_getValueField_577649682b9910c1,
            mid_variable_59275c3828a531bd,
            mid_variable_5dc18191805048ae,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FDSFactory(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FDSFactory(const FDSFactory& obj) : ::java::lang::Object(obj) {}

          FDSFactory(const ::org::hipparchus::Field &, jint, jint);

          ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure build(const JArray< jdouble > &) const;
          ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure build(const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
          ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure constant(jdouble) const;
          ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure constant(const ::org::hipparchus::CalculusFieldElement &) const;
          ::org::hipparchus::analysis::differentiation::DSCompiler getCompiler() const;
          ::org::hipparchus::analysis::differentiation::FDSFactory$DerivativeField getDerivativeField() const;
          ::org::hipparchus::Field getValueField() const;
          ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure variable(jint, jdouble) const;
          ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure variable(jint, const ::org::hipparchus::CalculusFieldElement &) const;
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
        extern PyType_Def PY_TYPE_DEF(FDSFactory);
        extern PyTypeObject *PY_TYPE(FDSFactory);

        class t_FDSFactory {
        public:
          PyObject_HEAD
          FDSFactory object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FDSFactory *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FDSFactory&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FDSFactory&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
