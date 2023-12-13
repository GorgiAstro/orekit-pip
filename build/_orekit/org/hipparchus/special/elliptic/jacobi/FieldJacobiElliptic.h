#ifndef org_hipparchus_special_elliptic_jacobi_FieldJacobiElliptic_H
#define org_hipparchus_special_elliptic_jacobi_FieldJacobiElliptic_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace jacobi {
          class FieldCopolarC;
          class FieldCopolarD;
          class FieldCopolarN;
          class FieldCopolarS;
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
              mid_arccd_1d3e368d09a6f8a6,
              mid_arccd_6e00dc5eb352fe51,
              mid_arccn_1d3e368d09a6f8a6,
              mid_arccn_6e00dc5eb352fe51,
              mid_arccs_1d3e368d09a6f8a6,
              mid_arccs_6e00dc5eb352fe51,
              mid_arcdc_1d3e368d09a6f8a6,
              mid_arcdc_6e00dc5eb352fe51,
              mid_arcdn_1d3e368d09a6f8a6,
              mid_arcdn_6e00dc5eb352fe51,
              mid_arcds_1d3e368d09a6f8a6,
              mid_arcds_6e00dc5eb352fe51,
              mid_arcnc_1d3e368d09a6f8a6,
              mid_arcnc_6e00dc5eb352fe51,
              mid_arcnd_1d3e368d09a6f8a6,
              mid_arcnd_6e00dc5eb352fe51,
              mid_arcns_1d3e368d09a6f8a6,
              mid_arcns_6e00dc5eb352fe51,
              mid_arcsc_1d3e368d09a6f8a6,
              mid_arcsc_6e00dc5eb352fe51,
              mid_arcsd_1d3e368d09a6f8a6,
              mid_arcsd_6e00dc5eb352fe51,
              mid_arcsn_1d3e368d09a6f8a6,
              mid_arcsn_6e00dc5eb352fe51,
              mid_getM_81520b552cb3fa26,
              mid_valuesC_8be8c24353f60a26,
              mid_valuesC_129e43c0421b2a56,
              mid_valuesD_1fef81187f1d85dd,
              mid_valuesD_2bcbd7af56ae2ca1,
              mid_valuesN_728427f2d414bf9f,
              mid_valuesN_85ecaf8f219fcb2d,
              mid_valuesS_f895d5daf0fad2a4,
              mid_valuesS_a43667de5a7880ba,
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
