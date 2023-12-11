#ifndef org_hipparchus_special_elliptic_jacobi_JacobiElliptic_H
#define org_hipparchus_special_elliptic_jacobi_JacobiElliptic_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace jacobi {
          class CopolarD;
          class CopolarN;
          class CopolarS;
          class CopolarC;
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
              mid_arccd_7e960cd6eee376d8,
              mid_arccn_7e960cd6eee376d8,
              mid_arccs_7e960cd6eee376d8,
              mid_arcdc_7e960cd6eee376d8,
              mid_arcdn_7e960cd6eee376d8,
              mid_arcds_7e960cd6eee376d8,
              mid_arcnc_7e960cd6eee376d8,
              mid_arcnd_7e960cd6eee376d8,
              mid_arcns_7e960cd6eee376d8,
              mid_arcsc_7e960cd6eee376d8,
              mid_arcsd_7e960cd6eee376d8,
              mid_arcsn_7e960cd6eee376d8,
              mid_getM_557b8123390d8d0c,
              mid_valuesC_e345c4dd0533650e,
              mid_valuesD_408502db7d0db10a,
              mid_valuesN_329a9c1ed260f19a,
              mid_valuesS_1972a62e923c15d4,
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
