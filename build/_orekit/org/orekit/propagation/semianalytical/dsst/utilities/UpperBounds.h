#ifndef org_orekit_propagation_semianalytical_dsst_utilities_UpperBounds_H
#define org_orekit_propagation_semianalytical_dsst_utilities_UpperBounds_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
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

            class UpperBounds : public ::java::lang::Object {
             public:
              enum {
                mid_getDnl_1340186f93089476,
                mid_getDnl_3c0decdc6d452b91,
                mid_getRnml_f61f9bc72ee2229e,
                mid_getRnml_3423c1ac4701718a,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit UpperBounds(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              UpperBounds(const UpperBounds& obj) : ::java::lang::Object(obj) {}

              static jdouble getDnl(jdouble, jdouble, jint, jint);
              static ::org::hipparchus::CalculusFieldElement getDnl(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, jint, jint);
              static jdouble getRnml(jdouble, jint, jint, jint, jint, jint);
              static ::org::hipparchus::CalculusFieldElement getRnml(const ::org::hipparchus::CalculusFieldElement &, jint, jint, jint, jint, jint);
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
            extern PyType_Def PY_TYPE_DEF(UpperBounds);
            extern PyTypeObject *PY_TYPE(UpperBounds);

            class t_UpperBounds {
            public:
              PyObject_HEAD
              UpperBounds object;
              static PyObject *wrap_Object(const UpperBounds&);
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
