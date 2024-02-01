#ifndef org_hipparchus_analysis_differentiation_UnivariateDerivative2Field_H
#define org_hipparchus_analysis_differentiation_UnivariateDerivative2Field_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        class UnivariateDerivative2;
        class UnivariateDerivative2Field;
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

        class UnivariateDerivative2Field : public ::java::lang::Object {
         public:
          enum {
            mid_equals_72faff9b05f5ed5e,
            mid_getInstance_2bcf1e61705679e1,
            mid_getOne_cdd1771068ccd0b5,
            mid_getRuntimeClass_d5247e4b166c4ce8,
            mid_getZero_cdd1771068ccd0b5,
            mid_hashCode_d6ab429752e7c267,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit UnivariateDerivative2Field(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          UnivariateDerivative2Field(const UnivariateDerivative2Field& obj) : ::java::lang::Object(obj) {}

          jboolean equals(const ::java::lang::Object &) const;
          static UnivariateDerivative2Field getInstance();
          ::org::hipparchus::analysis::differentiation::UnivariateDerivative2 getOne() const;
          ::java::lang::Class getRuntimeClass() const;
          ::org::hipparchus::analysis::differentiation::UnivariateDerivative2 getZero() const;
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
        extern PyType_Def PY_TYPE_DEF(UnivariateDerivative2Field);
        extern PyTypeObject *PY_TYPE(UnivariateDerivative2Field);

        class t_UnivariateDerivative2Field {
        public:
          PyObject_HEAD
          UnivariateDerivative2Field object;
          static PyObject *wrap_Object(const UnivariateDerivative2Field&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
