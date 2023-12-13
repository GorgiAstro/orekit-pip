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
            mid_init$_b6c946d1cbf160f0,
            mid_build_b2e42be64b624f3f,
            mid_build_1a7f741fb94c3273,
            mid_constant_7aeeac85ca41e793,
            mid_constant_af5f7afd2fa6e7d1,
            mid_getCompiler_e0888effe8b453a6,
            mid_getDerivativeField_21a69e1beba00e8c,
            mid_getValueField_04d1f63e17d5c5d4,
            mid_variable_21d34149fde44727,
            mid_variable_d130203cc430a767,
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
