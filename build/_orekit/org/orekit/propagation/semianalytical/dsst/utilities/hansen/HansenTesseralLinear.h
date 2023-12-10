#ifndef org_orekit_propagation_semianalytical_dsst_utilities_hansen_HansenTesseralLinear_H
#define org_orekit_propagation_semianalytical_dsst_utilities_hansen_HansenTesseralLinear_H

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

              class HansenTesseralLinear : public ::java::lang::Object {
               public:
                enum {
                  mid_init$_863ad0cd78e98df4,
                  mid_computeInitValues_d0d6094fbd7015c5,
                  mid_getDerivative_31332242d1624d2c,
                  mid_getValue_31332242d1624d2c,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit HansenTesseralLinear(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                HansenTesseralLinear(const HansenTesseralLinear& obj) : ::java::lang::Object(obj) {}

                HansenTesseralLinear(jint, jint, jint, jint, jint);

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
              extern PyType_Def PY_TYPE_DEF(HansenTesseralLinear);
              extern PyTypeObject *PY_TYPE(HansenTesseralLinear);

              class t_HansenTesseralLinear {
              public:
                PyObject_HEAD
                HansenTesseralLinear object;
                static PyObject *wrap_Object(const HansenTesseralLinear&);
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