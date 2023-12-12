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
                mid_init$_62dec2ddd788a71d,
                mid_getGmsj_093995dc5657c18c,
                mid_getHmsj_093995dc5657c18c,
                mid_getdGmsdAlpha_093995dc5657c18c,
                mid_getdGmsdBeta_093995dc5657c18c,
                mid_getdGmsdh_093995dc5657c18c,
                mid_getdGmsdk_093995dc5657c18c,
                mid_getdHmsdAlpha_093995dc5657c18c,
                mid_getdHmsdBeta_093995dc5657c18c,
                mid_getdHmsdh_093995dc5657c18c,
                mid_getdHmsdk_093995dc5657c18c,
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
