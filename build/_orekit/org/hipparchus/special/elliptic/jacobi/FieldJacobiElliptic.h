#ifndef org_hipparchus_special_elliptic_jacobi_FieldJacobiElliptic_H
#define org_hipparchus_special_elliptic_jacobi_FieldJacobiElliptic_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace jacobi {
          class FieldCopolarS;
          class FieldCopolarC;
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
              mid_arccd_94d37e81a3238af8,
              mid_arccd_6672ad854985cb64,
              mid_arccn_94d37e81a3238af8,
              mid_arccn_6672ad854985cb64,
              mid_arccs_94d37e81a3238af8,
              mid_arccs_6672ad854985cb64,
              mid_arcdc_94d37e81a3238af8,
              mid_arcdc_6672ad854985cb64,
              mid_arcdn_94d37e81a3238af8,
              mid_arcdn_6672ad854985cb64,
              mid_arcds_94d37e81a3238af8,
              mid_arcds_6672ad854985cb64,
              mid_arcnc_94d37e81a3238af8,
              mid_arcnc_6672ad854985cb64,
              mid_arcnd_94d37e81a3238af8,
              mid_arcnd_6672ad854985cb64,
              mid_arcns_94d37e81a3238af8,
              mid_arcns_6672ad854985cb64,
              mid_arcsc_94d37e81a3238af8,
              mid_arcsc_6672ad854985cb64,
              mid_arcsd_94d37e81a3238af8,
              mid_arcsd_6672ad854985cb64,
              mid_arcsn_94d37e81a3238af8,
              mid_arcsn_6672ad854985cb64,
              mid_getM_613c8f46c659f636,
              mid_valuesC_1a5fc98775ea4bd5,
              mid_valuesC_c520f2ee7e2a9f39,
              mid_valuesD_41c3aba2ad053e53,
              mid_valuesD_aa103361b5a2e138,
              mid_valuesN_49c3858fca4f52e4,
              mid_valuesN_97e5960b819d6e6d,
              mid_valuesS_1e3ce0db0e8390e4,
              mid_valuesS_183c05f7d8fac6b6,
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
