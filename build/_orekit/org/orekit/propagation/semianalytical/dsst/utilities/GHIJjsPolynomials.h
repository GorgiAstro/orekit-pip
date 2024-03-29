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
                mid_init$_cd5724127cc72e96,
                mid_getGjs_6d920aab27f0a3d2,
                mid_getHjs_6d920aab27f0a3d2,
                mid_getIjs_6d920aab27f0a3d2,
                mid_getJjs_6d920aab27f0a3d2,
                mid_getdGjsdAlpha_6d920aab27f0a3d2,
                mid_getdGjsdBeta_6d920aab27f0a3d2,
                mid_getdGjsdh_6d920aab27f0a3d2,
                mid_getdGjsdk_6d920aab27f0a3d2,
                mid_getdHjsdAlpha_6d920aab27f0a3d2,
                mid_getdHjsdBeta_6d920aab27f0a3d2,
                mid_getdHjsdh_6d920aab27f0a3d2,
                mid_getdHjsdk_6d920aab27f0a3d2,
                mid_getdIjsdAlpha_6d920aab27f0a3d2,
                mid_getdIjsdBeta_6d920aab27f0a3d2,
                mid_getdIjsdh_6d920aab27f0a3d2,
                mid_getdIjsdk_6d920aab27f0a3d2,
                mid_getdJjsdAlpha_6d920aab27f0a3d2,
                mid_getdJjsdBeta_6d920aab27f0a3d2,
                mid_getdJjsdh_6d920aab27f0a3d2,
                mid_getdJjsdk_6d920aab27f0a3d2,
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
