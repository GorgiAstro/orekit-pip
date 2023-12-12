#ifndef org_hipparchus_analysis_differentiation_UnivariateDerivative1Field_H
#define org_hipparchus_analysis_differentiation_UnivariateDerivative1Field_H

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
    class Field;
    namespace analysis {
      namespace differentiation {
        class UnivariateDerivative1;
        class UnivariateDerivative1Field;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        class UnivariateDerivative1Field : public ::java::lang::Object {
         public:
          enum {
            mid_equals_221e8e85cb385209,
            mid_getInstance_a70907128b423cca,
            mid_getOne_23c0f53d490c173c,
            mid_getRuntimeClass_d4b191ff8147475d,
            mid_getZero_23c0f53d490c173c,
            mid_hashCode_412668abc8d889e9,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit UnivariateDerivative1Field(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          UnivariateDerivative1Field(const UnivariateDerivative1Field& obj) : ::java::lang::Object(obj) {}

          jboolean equals(const ::java::lang::Object &) const;
          static UnivariateDerivative1Field getInstance();
          ::org::hipparchus::analysis::differentiation::UnivariateDerivative1 getOne() const;
          ::java::lang::Class getRuntimeClass() const;
          ::org::hipparchus::analysis::differentiation::UnivariateDerivative1 getZero() const;
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
        extern PyType_Def PY_TYPE_DEF(UnivariateDerivative1Field);
        extern PyTypeObject *PY_TYPE(UnivariateDerivative1Field);

        class t_UnivariateDerivative1Field {
        public:
          PyObject_HEAD
          UnivariateDerivative1Field object;
          static PyObject *wrap_Object(const UnivariateDerivative1Field&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
