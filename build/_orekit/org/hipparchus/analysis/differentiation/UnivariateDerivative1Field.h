#ifndef org_hipparchus_analysis_differentiation_UnivariateDerivative1Field_H
#define org_hipparchus_analysis_differentiation_UnivariateDerivative1Field_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        class UnivariateDerivative1;
        class UnivariateDerivative1Field;
      }
    }
    class Field;
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

        class UnivariateDerivative1Field : public ::java::lang::Object {
         public:
          enum {
            mid_equals_460c5e2d9d51c6cc,
            mid_getInstance_99ac5972aa279a25,
            mid_getOne_7826974382aac05b,
            mid_getRuntimeClass_1aeb0737a960d371,
            mid_getZero_7826974382aac05b,
            mid_hashCode_55546ef6a647f39b,
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
