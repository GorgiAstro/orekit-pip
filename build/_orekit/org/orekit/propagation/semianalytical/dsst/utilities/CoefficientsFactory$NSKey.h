#ifndef org_orekit_propagation_semianalytical_dsst_utilities_CoefficientsFactory$NSKey_H
#define org_orekit_propagation_semianalytical_dsst_utilities_CoefficientsFactory$NSKey_H

#include "java/lang/Object.h"

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
namespace java {
  namespace lang {
    class Class;
    class Comparable;
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
                mid_init$_6f37635c3285dbdf,
                mid_compareTo_7f564367d2213478,
                mid_equals_65c7d273e80d497a,
                mid_getN_570ce0828f81a2c1,
                mid_getS_570ce0828f81a2c1,
                mid_hashCode_570ce0828f81a2c1,
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
