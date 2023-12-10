#ifndef org_hipparchus_analysis_differentiation_FDSFactory_H
#define org_hipparchus_analysis_differentiation_FDSFactory_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
    namespace exception {
      class MathIllegalArgumentException;
    }
    namespace analysis {
      namespace differentiation {
        class FDSFactory$DerivativeField;
        class DSCompiler;
        class FieldDerivativeStructure;
      }
    }
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
            mid_init$_7dbd657fb2d34563,
            mid_build_418b3af1711b43e6,
            mid_build_44d0136f1427ef1d,
            mid_constant_629ba89773b89477,
            mid_constant_dc82eda6d2eed253,
            mid_getCompiler_ae6f9f9cc48aac48,
            mid_getDerivativeField_b3afcca7dbbddb7f,
            mid_getValueField_5b28be2d3632a5dc,
            mid_variable_3f218e91648e4931,
            mid_variable_695a5b8d4ec495cc,
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
