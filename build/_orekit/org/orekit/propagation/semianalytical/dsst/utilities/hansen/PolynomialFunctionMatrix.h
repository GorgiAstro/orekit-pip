#ifndef org_orekit_propagation_semianalytical_dsst_utilities_hansen_PolynomialFunctionMatrix_H
#define org_orekit_propagation_semianalytical_dsst_utilities_hansen_PolynomialFunctionMatrix_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            namespace hansen {
              class PolynomialFunctionMatrix;
            }
          }
        }
      }
    }
  }
  namespace hipparchus {
    namespace analysis {
      namespace polynomials {
        class PolynomialFunction;
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
            namespace hansen {

              class PolynomialFunctionMatrix : public ::java::lang::Object {
               public:
                enum {
                  mid_add_d5dba227734de1ab,
                  mid_getElem_c17187d79038303e,
                  mid_getMatrixLine_7238282f5fa90587,
                  mid_multiply_d5dba227734de1ab,
                  mid_setElem_1299f9d62272d65e,
                  mid_setMatrix_347d88ac68f04342,
                  mid_setMatrixLine_7d70cb2c0bdbd9a1,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit PolynomialFunctionMatrix(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                PolynomialFunctionMatrix(const PolynomialFunctionMatrix& obj) : ::java::lang::Object(obj) {}

                PolynomialFunctionMatrix add(const PolynomialFunctionMatrix &) const;
                ::org::hipparchus::analysis::polynomials::PolynomialFunction getElem(jint, jint) const;
                JArray< ::org::hipparchus::analysis::polynomials::PolynomialFunction > getMatrixLine(jint) const;
                PolynomialFunctionMatrix multiply(const PolynomialFunctionMatrix &) const;
                void setElem(jint, jint, const ::org::hipparchus::analysis::polynomials::PolynomialFunction &) const;
                void setMatrix(const JArray< JArray< ::org::hipparchus::analysis::polynomials::PolynomialFunction > > &) const;
                void setMatrixLine(jint, const JArray< ::org::hipparchus::analysis::polynomials::PolynomialFunction > &) const;
              };
            }
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
            namespace hansen {
              extern PyType_Def PY_TYPE_DEF(PolynomialFunctionMatrix);
              extern PyTypeObject *PY_TYPE(PolynomialFunctionMatrix);

              class t_PolynomialFunctionMatrix {
              public:
                PyObject_HEAD
                PolynomialFunctionMatrix object;
                static PyObject *wrap_Object(const PolynomialFunctionMatrix&);
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
}

#endif
