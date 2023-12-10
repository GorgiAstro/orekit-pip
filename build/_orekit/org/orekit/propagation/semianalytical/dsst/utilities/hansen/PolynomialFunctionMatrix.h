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
                  mid_add_ad88da858853752c,
                  mid_getElem_719ea6244b7f87f0,
                  mid_getMatrixLine_bdf8e93e2b87418a,
                  mid_multiply_ad88da858853752c,
                  mid_setElem_69234f814f3b439e,
                  mid_setMatrix_b6b26e8a4079d308,
                  mid_setMatrixLine_9889bd0c7190633d,
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
