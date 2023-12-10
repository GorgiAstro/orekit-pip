#ifndef org_hipparchus_special_elliptic_jacobi_FieldJacobiElliptic_H
#define org_hipparchus_special_elliptic_jacobi_FieldJacobiElliptic_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
    namespace special {
      namespace elliptic {
        namespace jacobi {
          class FieldCopolarD;
          class FieldCopolarC;
          class FieldCopolarN;
          class FieldCopolarS;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace jacobi {

          class FieldJacobiElliptic : public ::java::lang::Object {
           public:
            enum {
              mid_arccd_616c74807d7607b4,
              mid_arccd_a4b1871f4d29e58b,
              mid_arccn_616c74807d7607b4,
              mid_arccn_a4b1871f4d29e58b,
              mid_arccs_616c74807d7607b4,
              mid_arccs_a4b1871f4d29e58b,
              mid_arcdc_616c74807d7607b4,
              mid_arcdc_a4b1871f4d29e58b,
              mid_arcdn_616c74807d7607b4,
              mid_arcdn_a4b1871f4d29e58b,
              mid_arcds_616c74807d7607b4,
              mid_arcds_a4b1871f4d29e58b,
              mid_arcnc_616c74807d7607b4,
              mid_arcnc_a4b1871f4d29e58b,
              mid_arcnd_616c74807d7607b4,
              mid_arcnd_a4b1871f4d29e58b,
              mid_arcns_616c74807d7607b4,
              mid_arcns_a4b1871f4d29e58b,
              mid_arcsc_616c74807d7607b4,
              mid_arcsc_a4b1871f4d29e58b,
              mid_arcsd_616c74807d7607b4,
              mid_arcsd_a4b1871f4d29e58b,
              mid_arcsn_616c74807d7607b4,
              mid_arcsn_a4b1871f4d29e58b,
              mid_getM_eba8e72a22c984ac,
              mid_valuesC_88f7757651bd3e5b,
              mid_valuesC_40fcede707edc970,
              mid_valuesD_4621ef4be89169e5,
              mid_valuesD_2128915a3f02d132,
              mid_valuesN_678147ffcbe4e15b,
              mid_valuesN_1295efed17b01cb9,
              mid_valuesS_87d1e9051f167b55,
              mid_valuesS_494e8624d19465b8,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FieldJacobiElliptic(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FieldJacobiElliptic(const FieldJacobiElliptic& obj) : ::java::lang::Object(obj) {}

            ::org::hipparchus::CalculusFieldElement arccd(jdouble) const;
            ::org::hipparchus::CalculusFieldElement arccd(const ::org::hipparchus::CalculusFieldElement &) const;
            ::org::hipparchus::CalculusFieldElement arccn(jdouble) const;
            ::org::hipparchus::CalculusFieldElement arccn(const ::org::hipparchus::CalculusFieldElement &) const;
            ::org::hipparchus::CalculusFieldElement arccs(jdouble) const;
            ::org::hipparchus::CalculusFieldElement arccs(const ::org::hipparchus::CalculusFieldElement &) const;
            ::org::hipparchus::CalculusFieldElement arcdc(jdouble) const;
            ::org::hipparchus::CalculusFieldElement arcdc(const ::org::hipparchus::CalculusFieldElement &) const;
            ::org::hipparchus::CalculusFieldElement arcdn(jdouble) const;
            ::org::hipparchus::CalculusFieldElement arcdn(const ::org::hipparchus::CalculusFieldElement &) const;
            ::org::hipparchus::CalculusFieldElement arcds(jdouble) const;
            ::org::hipparchus::CalculusFieldElement arcds(const ::org::hipparchus::CalculusFieldElement &) const;
            ::org::hipparchus::CalculusFieldElement arcnc(jdouble) const;
            ::org::hipparchus::CalculusFieldElement arcnc(const ::org::hipparchus::CalculusFieldElement &) const;
            ::org::hipparchus::CalculusFieldElement arcnd(jdouble) const;
            ::org::hipparchus::CalculusFieldElement arcnd(const ::org::hipparchus::CalculusFieldElement &) const;
            ::org::hipparchus::CalculusFieldElement arcns(jdouble) const;
            ::org::hipparchus::CalculusFieldElement arcns(const ::org::hipparchus::CalculusFieldElement &) const;
            ::org::hipparchus::CalculusFieldElement arcsc(jdouble) const;
            ::org::hipparchus::CalculusFieldElement arcsc(const ::org::hipparchus::CalculusFieldElement &) const;
            ::org::hipparchus::CalculusFieldElement arcsd(jdouble) const;
            ::org::hipparchus::CalculusFieldElement arcsd(const ::org::hipparchus::CalculusFieldElement &) const;
            ::org::hipparchus::CalculusFieldElement arcsn(jdouble) const;
            ::org::hipparchus::CalculusFieldElement arcsn(const ::org::hipparchus::CalculusFieldElement &) const;
            ::org::hipparchus::CalculusFieldElement getM() const;
            ::org::hipparchus::special::elliptic::jacobi::FieldCopolarC valuesC(jdouble) const;
            ::org::hipparchus::special::elliptic::jacobi::FieldCopolarC valuesC(const ::org::hipparchus::CalculusFieldElement &) const;
            ::org::hipparchus::special::elliptic::jacobi::FieldCopolarD valuesD(jdouble) const;
            ::org::hipparchus::special::elliptic::jacobi::FieldCopolarD valuesD(const ::org::hipparchus::CalculusFieldElement &) const;
            ::org::hipparchus::special::elliptic::jacobi::FieldCopolarN valuesN(jdouble) const;
            ::org::hipparchus::special::elliptic::jacobi::FieldCopolarN valuesN(const ::org::hipparchus::CalculusFieldElement &) const;
            ::org::hipparchus::special::elliptic::jacobi::FieldCopolarS valuesS(jdouble) const;
            ::org::hipparchus::special::elliptic::jacobi::FieldCopolarS valuesS(const ::org::hipparchus::CalculusFieldElement &) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace jacobi {
          extern PyType_Def PY_TYPE_DEF(FieldJacobiElliptic);
          extern PyTypeObject *PY_TYPE(FieldJacobiElliptic);

          class t_FieldJacobiElliptic {
          public:
            PyObject_HEAD
            FieldJacobiElliptic object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_FieldJacobiElliptic *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const FieldJacobiElliptic&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const FieldJacobiElliptic&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
