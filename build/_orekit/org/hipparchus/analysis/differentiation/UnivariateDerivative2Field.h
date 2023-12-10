#ifndef org_hipparchus_analysis_differentiation_UnivariateDerivative2Field_H
#define org_hipparchus_analysis_differentiation_UnivariateDerivative2Field_H

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
        class UnivariateDerivative2;
        class UnivariateDerivative2Field;
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

        class UnivariateDerivative2Field : public ::java::lang::Object {
         public:
          enum {
            mid_equals_65c7d273e80d497a,
            mid_getInstance_1c87ae1002e9b199,
            mid_getOne_43633a9b98e8a859,
            mid_getRuntimeClass_7c16c5008b34b3db,
            mid_getZero_43633a9b98e8a859,
            mid_hashCode_570ce0828f81a2c1,
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
