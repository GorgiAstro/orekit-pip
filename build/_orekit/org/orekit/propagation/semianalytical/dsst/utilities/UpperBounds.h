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
                mid_getDnl_d25194b4f827d7c5,
                mid_getDnl_34b1c27dc860e066,
                mid_getRnml_afb4449d3b8211f3,
                mid_getRnml_079d686a67b20272,
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
