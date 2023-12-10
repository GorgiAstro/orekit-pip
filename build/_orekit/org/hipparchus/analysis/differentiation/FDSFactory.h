#ifndef org_hipparchus_analysis_differentiation_FDSFactory_H
#define org_hipparchus_analysis_differentiation_FDSFactory_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class Field;
    namespace exception {
      class MathIllegalArgumentException;
    }
    class CalculusFieldElement;
    namespace analysis {
      namespace differentiation {
        class FieldDerivativeStructure;
        class FDSFactory$DerivativeField;
        class DSCompiler;
      }
    }
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
            mid_init$_11914f5932256658,
            mid_build_7d4cf49ebbb0b728,
            mid_build_6b2f4e12f71db966,
            mid_constant_4695b8f2ebeb7167,
            mid_constant_a88d27168b002560,
            mid_getCompiler_b0ae8cc686efdcbe,
            mid_getDerivativeField_915731755491a214,
            mid_getValueField_70b4bbd3fa378d6b,
            mid_variable_27f138134a4631b3,
            mid_variable_6d132f5e9c3b9306,
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
