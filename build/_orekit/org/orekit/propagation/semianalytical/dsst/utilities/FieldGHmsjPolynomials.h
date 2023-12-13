#ifndef org_orekit_propagation_semianalytical_dsst_utilities_FieldGHmsjPolynomials_H
#define org_orekit_propagation_semianalytical_dsst_utilities_FieldGHmsjPolynomials_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
    class Field;
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

            class FieldGHmsjPolynomials : public ::java::lang::Object {
             public:
              enum {
                mid_init$_dab780a8ee9172eb,
                mid_getGmsj_fe798a87bc58eca4,
                mid_getHmsj_fe798a87bc58eca4,
                mid_getdGmsdAlpha_fe798a87bc58eca4,
                mid_getdGmsdBeta_fe798a87bc58eca4,
                mid_getdGmsdh_fe798a87bc58eca4,
                mid_getdGmsdk_fe798a87bc58eca4,
                mid_getdHmsdAlpha_fe798a87bc58eca4,
                mid_getdHmsdBeta_fe798a87bc58eca4,
                mid_getdHmsdh_fe798a87bc58eca4,
                mid_getdHmsdk_fe798a87bc58eca4,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit FieldGHmsjPolynomials(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              FieldGHmsjPolynomials(const FieldGHmsjPolynomials& obj) : ::java::lang::Object(obj) {}

              FieldGHmsjPolynomials(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, jint, const ::org::hipparchus::Field &);

              ::org::hipparchus::CalculusFieldElement getGmsj(jint, jint, jint) const;
              ::org::hipparchus::CalculusFieldElement getHmsj(jint, jint, jint) const;
              ::org::hipparchus::CalculusFieldElement getdGmsdAlpha(jint, jint, jint) const;
              ::org::hipparchus::CalculusFieldElement getdGmsdBeta(jint, jint, jint) const;
              ::org::hipparchus::CalculusFieldElement getdGmsdh(jint, jint, jint) const;
              ::org::hipparchus::CalculusFieldElement getdGmsdk(jint, jint, jint) const;
              ::org::hipparchus::CalculusFieldElement getdHmsdAlpha(jint, jint, jint) const;
              ::org::hipparchus::CalculusFieldElement getdHmsdBeta(jint, jint, jint) const;
              ::org::hipparchus::CalculusFieldElement getdHmsdh(jint, jint, jint) const;
              ::org::hipparchus::CalculusFieldElement getdHmsdk(jint, jint, jint) const;
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
            extern PyType_Def PY_TYPE_DEF(FieldGHmsjPolynomials);
            extern PyTypeObject *PY_TYPE(FieldGHmsjPolynomials);

            class t_FieldGHmsjPolynomials {
            public:
              PyObject_HEAD
              FieldGHmsjPolynomials object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_FieldGHmsjPolynomials *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const FieldGHmsjPolynomials&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const FieldGHmsjPolynomials&, PyTypeObject *);
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
