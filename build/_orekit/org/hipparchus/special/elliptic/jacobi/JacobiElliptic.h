#ifndef org_hipparchus_special_elliptic_jacobi_JacobiElliptic_H
#define org_hipparchus_special_elliptic_jacobi_JacobiElliptic_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace jacobi {
          class CopolarC;
          class CopolarS;
          class CopolarD;
          class CopolarN;
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

          class JacobiElliptic : public ::java::lang::Object {
           public:
            enum {
              mid_arccd_dcbc7ce2902fa136,
              mid_arccn_dcbc7ce2902fa136,
              mid_arccs_dcbc7ce2902fa136,
              mid_arcdc_dcbc7ce2902fa136,
              mid_arcdn_dcbc7ce2902fa136,
              mid_arcds_dcbc7ce2902fa136,
              mid_arcnc_dcbc7ce2902fa136,
              mid_arcnd_dcbc7ce2902fa136,
              mid_arcns_dcbc7ce2902fa136,
              mid_arcsc_dcbc7ce2902fa136,
              mid_arcsd_dcbc7ce2902fa136,
              mid_arcsn_dcbc7ce2902fa136,
              mid_getM_dff5885c2c873297,
              mid_valuesC_ca62344eb6f456f0,
              mid_valuesD_9d6f2ff61c60fe05,
              mid_valuesN_aaa95204c76a4f3a,
              mid_valuesS_75536f4861244943,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit JacobiElliptic(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            JacobiElliptic(const JacobiElliptic& obj) : ::java::lang::Object(obj) {}

            jdouble arccd(jdouble) const;
            jdouble arccn(jdouble) const;
            jdouble arccs(jdouble) const;
            jdouble arcdc(jdouble) const;
            jdouble arcdn(jdouble) const;
            jdouble arcds(jdouble) const;
            jdouble arcnc(jdouble) const;
            jdouble arcnd(jdouble) const;
            jdouble arcns(jdouble) const;
            jdouble arcsc(jdouble) const;
            jdouble arcsd(jdouble) const;
            jdouble arcsn(jdouble) const;
            jdouble getM() const;
            ::org::hipparchus::special::elliptic::jacobi::CopolarC valuesC(jdouble) const;
            ::org::hipparchus::special::elliptic::jacobi::CopolarD valuesD(jdouble) const;
            ::org::hipparchus::special::elliptic::jacobi::CopolarN valuesN(jdouble) const;
            ::org::hipparchus::special::elliptic::jacobi::CopolarS valuesS(jdouble) const;
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
          extern PyType_Def PY_TYPE_DEF(JacobiElliptic);
          extern PyTypeObject *PY_TYPE(JacobiElliptic);

          class t_JacobiElliptic {
          public:
            PyObject_HEAD
            JacobiElliptic object;
            static PyObject *wrap_Object(const JacobiElliptic&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
