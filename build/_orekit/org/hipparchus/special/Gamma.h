#ifndef org_hipparchus_special_Gamma_H
#define org_hipparchus_special_Gamma_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
    namespace exception {
      class MathIllegalArgumentException;
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

      class Gamma : public ::java::lang::Object {
       public:
        enum {
          mid_digamma_dcbc7ce2902fa136,
          mid_digamma_a4b1871f4d29e58b,
          mid_gamma_dcbc7ce2902fa136,
          mid_gamma_a4b1871f4d29e58b,
          mid_invGamma1pm1_dcbc7ce2902fa136,
          mid_invGamma1pm1_a4b1871f4d29e58b,
          mid_lanczos_dcbc7ce2902fa136,
          mid_lanczos_a4b1871f4d29e58b,
          mid_logGamma_dcbc7ce2902fa136,
          mid_logGamma_a4b1871f4d29e58b,
          mid_logGamma1p_dcbc7ce2902fa136,
          mid_logGamma1p_a4b1871f4d29e58b,
          mid_regularizedGammaP_86ffecc08a63eff0,
          mid_regularizedGammaP_6746cc1cd9210d54,
          mid_regularizedGammaP_1a4183e52d14c27e,
          mid_regularizedGammaP_c9fbd14d4617b15d,
          mid_regularizedGammaQ_86ffecc08a63eff0,
          mid_regularizedGammaQ_6746cc1cd9210d54,
          mid_regularizedGammaQ_1a4183e52d14c27e,
          mid_regularizedGammaQ_c9fbd14d4617b15d,
          mid_trigamma_dcbc7ce2902fa136,
          mid_trigamma_a4b1871f4d29e58b,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit Gamma(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        Gamma(const Gamma& obj) : ::java::lang::Object(obj) {}

        static jdouble GAMMA;
        static jdouble LANCZOS_G;

        static jdouble digamma(jdouble);
        static ::org::hipparchus::CalculusFieldElement digamma(const ::org::hipparchus::CalculusFieldElement &);
        static jdouble gamma(jdouble);
        static ::org::hipparchus::CalculusFieldElement gamma(const ::org::hipparchus::CalculusFieldElement &);
        static jdouble invGamma1pm1(jdouble);
        static ::org::hipparchus::CalculusFieldElement invGamma1pm1(const ::org::hipparchus::CalculusFieldElement &);
        static jdouble lanczos(jdouble);
        static ::org::hipparchus::CalculusFieldElement lanczos(const ::org::hipparchus::CalculusFieldElement &);
        static jdouble logGamma(jdouble);
        static ::org::hipparchus::CalculusFieldElement logGamma(const ::org::hipparchus::CalculusFieldElement &);
        static jdouble logGamma1p(jdouble);
        static ::org::hipparchus::CalculusFieldElement logGamma1p(const ::org::hipparchus::CalculusFieldElement &);
        static jdouble regularizedGammaP(jdouble, jdouble);
        static ::org::hipparchus::CalculusFieldElement regularizedGammaP(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &);
        static jdouble regularizedGammaP(jdouble, jdouble, jdouble, jint);
        static ::org::hipparchus::CalculusFieldElement regularizedGammaP(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, jdouble, jint);
        static jdouble regularizedGammaQ(jdouble, jdouble);
        static ::org::hipparchus::CalculusFieldElement regularizedGammaQ(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &);
        static jdouble regularizedGammaQ(jdouble, jdouble, jdouble, jint);
        static ::org::hipparchus::CalculusFieldElement regularizedGammaQ(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, jdouble, jint);
        static jdouble trigamma(jdouble);
        static ::org::hipparchus::CalculusFieldElement trigamma(const ::org::hipparchus::CalculusFieldElement &);
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace special {
      extern PyType_Def PY_TYPE_DEF(Gamma);
      extern PyTypeObject *PY_TYPE(Gamma);

      class t_Gamma {
      public:
        PyObject_HEAD
        Gamma object;
        static PyObject *wrap_Object(const Gamma&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
