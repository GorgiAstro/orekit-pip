#ifndef org_orekit_propagation_semianalytical_dsst_utilities_FieldGHIJjsPolynomials_H
#define org_orekit_propagation_semianalytical_dsst_utilities_FieldGHIJjsPolynomials_H

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

            class FieldGHIJjsPolynomials : public ::java::lang::Object {
             public:
              enum {
                mid_init$_f70e12a452183042,
                mid_getGjs_d0525157bc3abb83,
                mid_getHjs_d0525157bc3abb83,
                mid_getIjs_d0525157bc3abb83,
                mid_getJjs_d0525157bc3abb83,
                mid_getdGjsdAlpha_d0525157bc3abb83,
                mid_getdGjsdBeta_d0525157bc3abb83,
                mid_getdGjsdh_d0525157bc3abb83,
                mid_getdGjsdk_d0525157bc3abb83,
                mid_getdHjsdAlpha_d0525157bc3abb83,
                mid_getdHjsdBeta_d0525157bc3abb83,
                mid_getdHjsdh_d0525157bc3abb83,
                mid_getdHjsdk_d0525157bc3abb83,
                mid_getdIjsdAlpha_d0525157bc3abb83,
                mid_getdIjsdBeta_d0525157bc3abb83,
                mid_getdIjsdh_d0525157bc3abb83,
                mid_getdIjsdk_d0525157bc3abb83,
                mid_getdJjsdAlpha_d0525157bc3abb83,
                mid_getdJjsdBeta_d0525157bc3abb83,
                mid_getdJjsdh_d0525157bc3abb83,
                mid_getdJjsdk_d0525157bc3abb83,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit FieldGHIJjsPolynomials(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              FieldGHIJjsPolynomials(const FieldGHIJjsPolynomials& obj) : ::java::lang::Object(obj) {}

              FieldGHIJjsPolynomials(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &);

              ::org::hipparchus::CalculusFieldElement getGjs(jint, jint) const;
              ::org::hipparchus::CalculusFieldElement getHjs(jint, jint) const;
              ::org::hipparchus::CalculusFieldElement getIjs(jint, jint) const;
              ::org::hipparchus::CalculusFieldElement getJjs(jint, jint) const;
              ::org::hipparchus::CalculusFieldElement getdGjsdAlpha(jint, jint) const;
              ::org::hipparchus::CalculusFieldElement getdGjsdBeta(jint, jint) const;
              ::org::hipparchus::CalculusFieldElement getdGjsdh(jint, jint) const;
              ::org::hipparchus::CalculusFieldElement getdGjsdk(jint, jint) const;
              ::org::hipparchus::CalculusFieldElement getdHjsdAlpha(jint, jint) const;
              ::org::hipparchus::CalculusFieldElement getdHjsdBeta(jint, jint) const;
              ::org::hipparchus::CalculusFieldElement getdHjsdh(jint, jint) const;
              ::org::hipparchus::CalculusFieldElement getdHjsdk(jint, jint) const;
              ::org::hipparchus::CalculusFieldElement getdIjsdAlpha(jint, jint) const;
              ::org::hipparchus::CalculusFieldElement getdIjsdBeta(jint, jint) const;
              ::org::hipparchus::CalculusFieldElement getdIjsdh(jint, jint) const;
              ::org::hipparchus::CalculusFieldElement getdIjsdk(jint, jint) const;
              ::org::hipparchus::CalculusFieldElement getdJjsdAlpha(jint, jint) const;
              ::org::hipparchus::CalculusFieldElement getdJjsdBeta(jint, jint) const;
              ::org::hipparchus::CalculusFieldElement getdJjsdh(jint, jint) const;
              ::org::hipparchus::CalculusFieldElement getdJjsdk(jint, jint) const;
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
            extern PyType_Def PY_TYPE_DEF(FieldGHIJjsPolynomials);
            extern PyTypeObject *PY_TYPE(FieldGHIJjsPolynomials);

            class t_FieldGHIJjsPolynomials {
            public:
              PyObject_HEAD
              FieldGHIJjsPolynomials object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_FieldGHIJjsPolynomials *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const FieldGHIJjsPolynomials&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const FieldGHIJjsPolynomials&, PyTypeObject *);
              static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
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
