#ifndef org_hipparchus_special_elliptic_jacobi_FieldJacobiElliptic_H
#define org_hipparchus_special_elliptic_jacobi_FieldJacobiElliptic_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace jacobi {
          class FieldCopolarC;
          class FieldCopolarS;
          class FieldCopolarD;
          class FieldCopolarN;
        }
      }
    }
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
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace jacobi {

          class FieldJacobiElliptic : public ::java::lang::Object {
           public:
            enum {
              mid_arccd_e3d0ff3c0584eadf,
              mid_arccd_a3b854adede8eaaa,
              mid_arccn_e3d0ff3c0584eadf,
              mid_arccn_a3b854adede8eaaa,
              mid_arccs_e3d0ff3c0584eadf,
              mid_arccs_a3b854adede8eaaa,
              mid_arcdc_e3d0ff3c0584eadf,
              mid_arcdc_a3b854adede8eaaa,
              mid_arcdn_e3d0ff3c0584eadf,
              mid_arcdn_a3b854adede8eaaa,
              mid_arcds_e3d0ff3c0584eadf,
              mid_arcds_a3b854adede8eaaa,
              mid_arcnc_e3d0ff3c0584eadf,
              mid_arcnc_a3b854adede8eaaa,
              mid_arcnd_e3d0ff3c0584eadf,
              mid_arcnd_a3b854adede8eaaa,
              mid_arcns_e3d0ff3c0584eadf,
              mid_arcns_a3b854adede8eaaa,
              mid_arcsc_e3d0ff3c0584eadf,
              mid_arcsc_a3b854adede8eaaa,
              mid_arcsd_e3d0ff3c0584eadf,
              mid_arcsd_a3b854adede8eaaa,
              mid_arcsn_e3d0ff3c0584eadf,
              mid_arcsn_a3b854adede8eaaa,
              mid_getM_08d37e3f77b7239d,
              mid_valuesC_b7ce9fba56994ed4,
              mid_valuesC_2b42f4f538709bf3,
              mid_valuesD_f444413ca237faeb,
              mid_valuesD_1eaf79f5c38790f7,
              mid_valuesN_dbaa4efdddec1b3d,
              mid_valuesN_893396a44a3905f5,
              mid_valuesS_be3a44280ba2f571,
              mid_valuesS_83aa5c5a677c95f6,
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
