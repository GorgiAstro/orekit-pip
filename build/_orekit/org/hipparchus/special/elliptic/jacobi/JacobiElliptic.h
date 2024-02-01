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
          class CopolarN;
          class CopolarS;
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
              mid_arccd_bf28ed64d6e8576b,
              mid_arccn_bf28ed64d6e8576b,
              mid_arccs_bf28ed64d6e8576b,
              mid_arcdc_bf28ed64d6e8576b,
              mid_arcdn_bf28ed64d6e8576b,
              mid_arcds_bf28ed64d6e8576b,
              mid_arcnc_bf28ed64d6e8576b,
              mid_arcnd_bf28ed64d6e8576b,
              mid_arcns_bf28ed64d6e8576b,
              mid_arcsc_bf28ed64d6e8576b,
              mid_arcsd_bf28ed64d6e8576b,
              mid_arcsn_bf28ed64d6e8576b,
              mid_getM_9981f74b2d109da6,
              mid_valuesC_04a71476e23a9ed4,
              mid_valuesD_c92a1fed04a91eb5,
              mid_valuesN_58ac1b21fa8d5fcc,
              mid_valuesS_7818b0c4a030c1fd,
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
