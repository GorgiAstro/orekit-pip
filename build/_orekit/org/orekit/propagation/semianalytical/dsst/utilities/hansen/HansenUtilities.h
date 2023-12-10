#ifndef org_orekit_propagation_semianalytical_dsst_utilities_hansen_HansenUtilities_H
#define org_orekit_propagation_semianalytical_dsst_utilities_hansen_HansenUtilities_H

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

              class HansenUtilities : public ::java::lang::Object {
               public:
                enum {
                  mid_buildIdentityMatrix2_6e6d1d93619046bf,
                  mid_buildIdentityMatrix4_6e6d1d93619046bf,
                  mid_buildZeroMatrix2_6e6d1d93619046bf,
                  mid_buildZeroMatrix4_6e6d1d93619046bf,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit HansenUtilities(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                HansenUtilities(const HansenUtilities& obj) : ::java::lang::Object(obj) {}

                static ::org::hipparchus::analysis::polynomials::PolynomialFunction *ONE;
                static ::org::hipparchus::analysis::polynomials::PolynomialFunction *ZERO;

                static ::org::orekit::propagation::semianalytical::dsst::utilities::hansen::PolynomialFunctionMatrix buildIdentityMatrix2();
                static ::org::orekit::propagation::semianalytical::dsst::utilities::hansen::PolynomialFunctionMatrix buildIdentityMatrix4();
                static ::org::orekit::propagation::semianalytical::dsst::utilities::hansen::PolynomialFunctionMatrix buildZeroMatrix2();
                static ::org::orekit::propagation::semianalytical::dsst::utilities::hansen::PolynomialFunctionMatrix buildZeroMatrix4();
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
              extern PyType_Def PY_TYPE_DEF(HansenUtilities);
              extern PyTypeObject *PY_TYPE(HansenUtilities);

              class t_HansenUtilities {
              public:
                PyObject_HEAD
                HansenUtilities object;
                static PyObject *wrap_Object(const HansenUtilities&);
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
