#ifndef org_orekit_propagation_semianalytical_dsst_utilities_JacobiPolynomials_H
#define org_orekit_propagation_semianalytical_dsst_utilities_JacobiPolynomials_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        class Gradient;
        class FieldGradient;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            class JacobiPolynomials : public ::java::lang::Object {
             public:
              enum {
                mid_getValue_cf9cd6d4aea42e11,
                mid_getValue_feba4baa7091dd05,
                mid_getValueAndDerivative_de167a4ebcb09657,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit JacobiPolynomials(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              JacobiPolynomials(const JacobiPolynomials& obj) : ::java::lang::Object(obj) {}

              static ::org::hipparchus::analysis::differentiation::FieldGradient getValue(jint, jint, jint, const ::org::hipparchus::analysis::differentiation::FieldGradient &);
              static ::org::hipparchus::analysis::differentiation::Gradient getValue(jint, jint, jint, const ::org::hipparchus::analysis::differentiation::Gradient &);
              static JArray< jdouble > getValueAndDerivative(jint, jint, jint, jdouble);
            };
          }
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            extern PyType_Def PY_TYPE_DEF(JacobiPolynomials);
            extern PyTypeObject *PY_TYPE(JacobiPolynomials);

            class t_JacobiPolynomials {
            public:
              PyObject_HEAD
              JacobiPolynomials object;
              static PyObject *wrap_Object(const JacobiPolynomials&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
