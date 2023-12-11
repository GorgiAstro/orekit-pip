#ifndef org_orekit_propagation_semianalytical_dsst_utilities_CoefficientsFactory$NSKey_H
#define org_orekit_propagation_semianalytical_dsst_utilities_CoefficientsFactory$NSKey_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class Comparable;
  }
}
namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            class CoefficientsFactory$NSKey;
          }
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            class CoefficientsFactory$NSKey : public ::java::lang::Object {
             public:
              enum {
                mid_init$_a84c9a223722150c,
                mid_compareTo_46df49a4ad1ef79a,
                mid_equals_221e8e85cb385209,
                mid_getN_412668abc8d889e9,
                mid_getS_412668abc8d889e9,
                mid_hashCode_412668abc8d889e9,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit CoefficientsFactory$NSKey(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              CoefficientsFactory$NSKey(const CoefficientsFactory$NSKey& obj) : ::java::lang::Object(obj) {}

              CoefficientsFactory$NSKey(jint, jint);

              jint compareTo(const CoefficientsFactory$NSKey &) const;
              jboolean equals(const ::java::lang::Object &) const;
              jint getN() const;
              jint getS() const;
              jint hashCode() const;
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
            extern PyType_Def PY_TYPE_DEF(CoefficientsFactory$NSKey);
            extern PyTypeObject *PY_TYPE(CoefficientsFactory$NSKey);

            class t_CoefficientsFactory$NSKey {
            public:
              PyObject_HEAD
              CoefficientsFactory$NSKey object;
              static PyObject *wrap_Object(const CoefficientsFactory$NSKey&);
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
