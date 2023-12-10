#ifndef org_orekit_propagation_semianalytical_dsst_utilities_GHIJjsPolynomials_H
#define org_orekit_propagation_semianalytical_dsst_utilities_GHIJjsPolynomials_H

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

            class GHIJjsPolynomials : public ::java::lang::Object {
             public:
              enum {
                mid_init$_667a7965403ed91a,
                mid_getGjs_a84e4ee1da3f1ab8,
                mid_getHjs_a84e4ee1da3f1ab8,
                mid_getIjs_a84e4ee1da3f1ab8,
                mid_getJjs_a84e4ee1da3f1ab8,
                mid_getdGjsdAlpha_a84e4ee1da3f1ab8,
                mid_getdGjsdBeta_a84e4ee1da3f1ab8,
                mid_getdGjsdh_a84e4ee1da3f1ab8,
                mid_getdGjsdk_a84e4ee1da3f1ab8,
                mid_getdHjsdAlpha_a84e4ee1da3f1ab8,
                mid_getdHjsdBeta_a84e4ee1da3f1ab8,
                mid_getdHjsdh_a84e4ee1da3f1ab8,
                mid_getdHjsdk_a84e4ee1da3f1ab8,
                mid_getdIjsdAlpha_a84e4ee1da3f1ab8,
                mid_getdIjsdBeta_a84e4ee1da3f1ab8,
                mid_getdIjsdh_a84e4ee1da3f1ab8,
                mid_getdIjsdk_a84e4ee1da3f1ab8,
                mid_getdJjsdAlpha_a84e4ee1da3f1ab8,
                mid_getdJjsdBeta_a84e4ee1da3f1ab8,
                mid_getdJjsdh_a84e4ee1da3f1ab8,
                mid_getdJjsdk_a84e4ee1da3f1ab8,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit GHIJjsPolynomials(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              GHIJjsPolynomials(const GHIJjsPolynomials& obj) : ::java::lang::Object(obj) {}

              GHIJjsPolynomials(jdouble, jdouble, jdouble, jdouble);

              jdouble getGjs(jint, jint) const;
              jdouble getHjs(jint, jint) const;
              jdouble getIjs(jint, jint) const;
              jdouble getJjs(jint, jint) const;
              jdouble getdGjsdAlpha(jint, jint) const;
              jdouble getdGjsdBeta(jint, jint) const;
              jdouble getdGjsdh(jint, jint) const;
              jdouble getdGjsdk(jint, jint) const;
              jdouble getdHjsdAlpha(jint, jint) const;
              jdouble getdHjsdBeta(jint, jint) const;
              jdouble getdHjsdh(jint, jint) const;
              jdouble getdHjsdk(jint, jint) const;
              jdouble getdIjsdAlpha(jint, jint) const;
              jdouble getdIjsdBeta(jint, jint) const;
              jdouble getdIjsdh(jint, jint) const;
              jdouble getdIjsdk(jint, jint) const;
              jdouble getdJjsdAlpha(jint, jint) const;
              jdouble getdJjsdBeta(jint, jint) const;
              jdouble getdJjsdh(jint, jint) const;
              jdouble getdJjsdk(jint, jint) const;
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
            extern PyType_Def PY_TYPE_DEF(GHIJjsPolynomials);
            extern PyTypeObject *PY_TYPE(GHIJjsPolynomials);

            class t_GHIJjsPolynomials {
            public:
              PyObject_HEAD
              GHIJjsPolynomials object;
              static PyObject *wrap_Object(const GHIJjsPolynomials&);
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
