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
    namespace analysis {
      namespace differentiation {
        class UnivariateDerivative1;
        class UnivariateDerivative1Field;
      }
    }
    class Field;
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
            mid_equals_72faff9b05f5ed5e,
            mid_getInstance_573405a3d98142e3,
            mid_getOne_9b106317a0967986,
            mid_getRuntimeClass_d5247e4b166c4ce8,
            mid_getZero_9b106317a0967986,
            mid_hashCode_d6ab429752e7c267,
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
