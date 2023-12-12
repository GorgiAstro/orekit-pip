#ifndef org_hipparchus_analysis_differentiation_FDSFactory_H
#define org_hipparchus_analysis_differentiation_FDSFactory_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        class DSCompiler;
        class FieldDerivativeStructure;
        class FDSFactory$DerivativeField;
      }
    }
    namespace exception {
      class MathIllegalArgumentException;
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
      namespace differentiation {

        class FDSFactory : public ::java::lang::Object {
         public:
          enum {
            mid_init$_a9ccb012d4cb48bd,
            mid_build_1e72ceb97300ff53,
            mid_build_276eb72cb82e871b,
            mid_constant_16af759261ef50b4,
            mid_constant_bcb3f877ec28ee10,
            mid_getCompiler_dfc048d343f51ab1,
            mid_getDerivativeField_2ed566e60939f4ee,
            mid_getValueField_20f98801541dcec1,
            mid_variable_a73597f593036083,
            mid_variable_7e11caf716d163b9,
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
