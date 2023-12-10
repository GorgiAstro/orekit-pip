#ifndef org_hipparchus_special_elliptic_jacobi_JacobiElliptic_H
#define org_hipparchus_special_elliptic_jacobi_JacobiElliptic_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace jacobi {
          class CopolarD;
          class CopolarC;
          class CopolarS;
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
              mid_arccd_0ba5fed9597b693e,
              mid_arccn_0ba5fed9597b693e,
              mid_arccs_0ba5fed9597b693e,
              mid_arcdc_0ba5fed9597b693e,
              mid_arcdn_0ba5fed9597b693e,
              mid_arcds_0ba5fed9597b693e,
              mid_arcnc_0ba5fed9597b693e,
              mid_arcnd_0ba5fed9597b693e,
              mid_arcns_0ba5fed9597b693e,
              mid_arcsc_0ba5fed9597b693e,
              mid_arcsd_0ba5fed9597b693e,
              mid_arcsn_0ba5fed9597b693e,
              mid_getM_456d9a2f64d6b28d,
              mid_valuesC_3ea25bc763e15782,
              mid_valuesD_e78d63d17e7bd96c,
              mid_valuesN_7d28cafc08fb26d3,
              mid_valuesS_3b6e505e34acdbf7,
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
