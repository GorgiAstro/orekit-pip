#ifndef org_hipparchus_special_elliptic_jacobi_FieldJacobiElliptic_H
#define org_hipparchus_special_elliptic_jacobi_FieldJacobiElliptic_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace jacobi {
          class FieldCopolarN;
          class FieldCopolarC;
          class FieldCopolarS;
          class FieldCopolarD;
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
              mid_arccd_cc0a3d6abf820939,
              mid_arccd_d3398190482814dc,
              mid_arccn_cc0a3d6abf820939,
              mid_arccn_d3398190482814dc,
              mid_arccs_cc0a3d6abf820939,
              mid_arccs_d3398190482814dc,
              mid_arcdc_cc0a3d6abf820939,
              mid_arcdc_d3398190482814dc,
              mid_arcdn_cc0a3d6abf820939,
              mid_arcdn_d3398190482814dc,
              mid_arcds_cc0a3d6abf820939,
              mid_arcds_d3398190482814dc,
              mid_arcnc_cc0a3d6abf820939,
              mid_arcnc_d3398190482814dc,
              mid_arcnd_cc0a3d6abf820939,
              mid_arcnd_d3398190482814dc,
              mid_arcns_cc0a3d6abf820939,
              mid_arcns_d3398190482814dc,
              mid_arcsc_cc0a3d6abf820939,
              mid_arcsc_d3398190482814dc,
              mid_arcsd_cc0a3d6abf820939,
              mid_arcsd_d3398190482814dc,
              mid_arcsn_cc0a3d6abf820939,
              mid_arcsn_d3398190482814dc,
              mid_getM_e6d4d3215c30992a,
              mid_valuesC_0cee6f629437c057,
              mid_valuesC_3e2e02459e6d37e5,
              mid_valuesD_ca981450ec333cd6,
              mid_valuesD_0e2996d9d74d5631,
              mid_valuesN_0fab261c4b5af5e5,
              mid_valuesN_56233df45962ca97,
              mid_valuesS_1a35a69e6b267eaf,
              mid_valuesS_c6c84f74840649de,
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
