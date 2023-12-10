#ifndef org_orekit_propagation_semianalytical_dsst_utilities_GHmsjPolynomials_H
#define org_orekit_propagation_semianalytical_dsst_utilities_GHmsjPolynomials_H

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

            class GHmsjPolynomials : public ::java::lang::Object {
             public:
              enum {
                mid_init$_12428deb464a7a30,
                mid_getGmsj_3d407e6a8cf9e8ca,
                mid_getHmsj_3d407e6a8cf9e8ca,
                mid_getdGmsdAlpha_3d407e6a8cf9e8ca,
                mid_getdGmsdBeta_3d407e6a8cf9e8ca,
                mid_getdGmsdh_3d407e6a8cf9e8ca,
                mid_getdGmsdk_3d407e6a8cf9e8ca,
                mid_getdHmsdAlpha_3d407e6a8cf9e8ca,
                mid_getdHmsdBeta_3d407e6a8cf9e8ca,
                mid_getdHmsdh_3d407e6a8cf9e8ca,
                mid_getdHmsdk_3d407e6a8cf9e8ca,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit GHmsjPolynomials(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              GHmsjPolynomials(const GHmsjPolynomials& obj) : ::java::lang::Object(obj) {}

              GHmsjPolynomials(jdouble, jdouble, jdouble, jdouble, jint);

              jdouble getGmsj(jint, jint, jint) const;
              jdouble getHmsj(jint, jint, jint) const;
              jdouble getdGmsdAlpha(jint, jint, jint) const;
              jdouble getdGmsdBeta(jint, jint, jint) const;
              jdouble getdGmsdh(jint, jint, jint) const;
              jdouble getdGmsdk(jint, jint, jint) const;
              jdouble getdHmsdAlpha(jint, jint, jint) const;
              jdouble getdHmsdBeta(jint, jint, jint) const;
              jdouble getdHmsdh(jint, jint, jint) const;
              jdouble getdHmsdk(jint, jint, jint) const;
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
            extern PyType_Def PY_TYPE_DEF(GHmsjPolynomials);
            extern PyTypeObject *PY_TYPE(GHmsjPolynomials);

            class t_GHmsjPolynomials {
            public:
              PyObject_HEAD
              GHmsjPolynomials object;
              static PyObject *wrap_Object(const GHmsjPolynomials&);
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
