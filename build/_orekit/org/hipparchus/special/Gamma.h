#ifndef org_hipparchus_special_Gamma_H
#define org_hipparchus_special_Gamma_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
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

      class Gamma : public ::java::lang::Object {
       public:
        enum {
          mid_digamma_bf28ed64d6e8576b,
          mid_digamma_a3b854adede8eaaa,
          mid_gamma_bf28ed64d6e8576b,
          mid_gamma_a3b854adede8eaaa,
          mid_invGamma1pm1_bf28ed64d6e8576b,
          mid_invGamma1pm1_a3b854adede8eaaa,
          mid_lanczos_bf28ed64d6e8576b,
          mid_lanczos_a3b854adede8eaaa,
          mid_logGamma_bf28ed64d6e8576b,
          mid_logGamma_a3b854adede8eaaa,
          mid_logGamma1p_bf28ed64d6e8576b,
          mid_logGamma1p_a3b854adede8eaaa,
          mid_regularizedGammaP_82f92590f4247da1,
          mid_regularizedGammaP_b5ecd7df9e053968,
          mid_regularizedGammaP_4ac438d787b160b9,
          mid_regularizedGammaP_f906ded07111002c,
          mid_regularizedGammaQ_82f92590f4247da1,
          mid_regularizedGammaQ_b5ecd7df9e053968,
          mid_regularizedGammaQ_4ac438d787b160b9,
          mid_regularizedGammaQ_f906ded07111002c,
          mid_trigamma_bf28ed64d6e8576b,
          mid_trigamma_a3b854adede8eaaa,
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
