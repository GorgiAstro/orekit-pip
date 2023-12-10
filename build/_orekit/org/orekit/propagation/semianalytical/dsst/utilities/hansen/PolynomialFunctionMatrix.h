#ifndef org_orekit_propagation_semianalytical_dsst_utilities_hansen_PolynomialFunctionMatrix_H
#define org_orekit_propagation_semianalytical_dsst_utilities_hansen_PolynomialFunctionMatrix_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace polynomials {
        class PolynomialFunction;
      }
    }
  }
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
                  mid_add_efa4915a18761d74,
                  mid_getElem_ce4818bdbdc4bb6e,
                  mid_getMatrixLine_ca70d17bfdf05b50,
                  mid_multiply_efa4915a18761d74,
                  mid_setElem_def4a2d3c56c8af3,
                  mid_setMatrix_184d638647e39c2d,
                  mid_setMatrixLine_a026c22cde76cbbe,
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
