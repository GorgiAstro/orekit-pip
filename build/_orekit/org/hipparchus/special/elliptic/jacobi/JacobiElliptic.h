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
              mid_arccd_04fd0666b613d2ab,
              mid_arccn_04fd0666b613d2ab,
              mid_arccs_04fd0666b613d2ab,
              mid_arcdc_04fd0666b613d2ab,
              mid_arcdn_04fd0666b613d2ab,
              mid_arcds_04fd0666b613d2ab,
              mid_arcnc_04fd0666b613d2ab,
              mid_arcnd_04fd0666b613d2ab,
              mid_arcns_04fd0666b613d2ab,
              mid_arcsc_04fd0666b613d2ab,
              mid_arcsd_04fd0666b613d2ab,
              mid_arcsn_04fd0666b613d2ab,
              mid_getM_b74f83833fdad017,
              mid_valuesC_545caebfa28309a9,
              mid_valuesD_6a4049a0051db77c,
              mid_valuesN_222bbb96d14af314,
              mid_valuesS_b422a8107f59c4c9,
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
