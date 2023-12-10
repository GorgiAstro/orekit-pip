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
            mid_equals_229c87223f486349,
            mid_getInstance_416e8ca9aac6db67,
            mid_getOne_347b0c8405a5a6a6,
            mid_getRuntimeClass_8f66acc08d2a174c,
            mid_getZero_347b0c8405a5a6a6,
            mid_hashCode_f2f64475e4580546,
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
