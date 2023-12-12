#ifndef org_orekit_propagation_semianalytical_dsst_utilities_hansen_HansenZonalLinear_H
#define org_orekit_propagation_semianalytical_dsst_utilities_hansen_HansenZonalLinear_H

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

              class HansenZonalLinear : public ::java::lang::Object {
               public:
                enum {
                  mid_init$_a84c9a223722150c,
                  mid_computeInitValues_10f281d777284cea,
                  mid_getDerivative_77f9e227e4cf04b4,
                  mid_getValue_77f9e227e4cf04b4,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit HansenZonalLinear(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                HansenZonalLinear(const HansenZonalLinear& obj) : ::java::lang::Object(obj) {}

                HansenZonalLinear(jint, jint);

                void computeInitValues(jdouble) const;
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
              extern PyType_Def PY_TYPE_DEF(HansenZonalLinear);
              extern PyTypeObject *PY_TYPE(HansenZonalLinear);

              class t_HansenZonalLinear {
              public:
                PyObject_HEAD
                HansenZonalLinear object;
                static PyObject *wrap_Object(const HansenZonalLinear&);
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
