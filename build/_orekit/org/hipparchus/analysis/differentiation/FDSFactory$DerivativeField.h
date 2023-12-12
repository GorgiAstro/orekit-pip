#ifndef org_hipparchus_analysis_differentiation_FDSFactory$DerivativeField_H
#define org_hipparchus_analysis_differentiation_FDSFactory$DerivativeField_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
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

        class FDSFactory$DerivativeField : public ::java::lang::Object {
         public:
          enum {
            mid_equals_221e8e85cb385209,
            mid_getOne_5997f22f8d76210e,
            mid_getPi_5997f22f8d76210e,
            mid_getRuntimeClass_d4b191ff8147475d,
            mid_getZero_5997f22f8d76210e,
            mid_hashCode_412668abc8d889e9,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FDSFactory$DerivativeField(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FDSFactory$DerivativeField(const FDSFactory$DerivativeField& obj) : ::java::lang::Object(obj) {}

          jboolean equals(const ::java::lang::Object &) const;
          ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure getOne() const;
          ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure getPi() const;
          ::java::lang::Class getRuntimeClass() const;
          ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure getZero() const;
          jint hashCode() const;
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
        extern PyType_Def PY_TYPE_DEF(FDSFactory$DerivativeField);
        extern PyTypeObject *PY_TYPE(FDSFactory$DerivativeField);

        class t_FDSFactory$DerivativeField {
        public:
          PyObject_HEAD
          FDSFactory$DerivativeField object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FDSFactory$DerivativeField *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FDSFactory$DerivativeField&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FDSFactory$DerivativeField&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
