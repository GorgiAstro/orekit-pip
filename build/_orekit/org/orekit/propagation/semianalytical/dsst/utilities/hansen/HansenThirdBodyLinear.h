#ifndef org_orekit_propagation_semianalytical_dsst_utilities_hansen_HansenThirdBodyLinear_H
#define org_orekit_propagation_semianalytical_dsst_utilities_hansen_HansenThirdBodyLinear_H

#include "java/lang/Object.h"

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

              class HansenThirdBodyLinear : public ::java::lang::Object {
               public:
                enum {
                  mid_init$_a84c9a223722150c,
                  mid_computeInitValues_87096e3fd8086100,
                  mid_getDerivative_77f9e227e4cf04b4,
                  mid_getValue_77f9e227e4cf04b4,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit HansenThirdBodyLinear(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                HansenThirdBodyLinear(const HansenThirdBodyLinear& obj) : ::java::lang::Object(obj) {}

                HansenThirdBodyLinear(jint, jint);

                void computeInitValues(jdouble, jdouble, jdouble) const;
                jdouble getDerivative(jint, jdouble) const;
                jdouble getValue(jint, jdouble) const;
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
              extern PyType_Def PY_TYPE_DEF(HansenThirdBodyLinear);
              extern PyTypeObject *PY_TYPE(HansenThirdBodyLinear);

              class t_HansenThirdBodyLinear {
              public:
                PyObject_HEAD
                HansenThirdBodyLinear object;
                static PyObject *wrap_Object(const HansenThirdBodyLinear&);
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
