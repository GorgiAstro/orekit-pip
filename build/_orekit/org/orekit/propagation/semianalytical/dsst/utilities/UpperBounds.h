#ifndef org_orekit_propagation_semianalytical_dsst_utilities_UpperBounds_H
#define org_orekit_propagation_semianalytical_dsst_utilities_UpperBounds_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
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
                mid_getDnl_371a292f2bee3e78,
                mid_getDnl_7f3419f66cc4ac78,
                mid_getRnml_49754d423a4d6db5,
                mid_getRnml_b3b8a2f485300a3f,
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
