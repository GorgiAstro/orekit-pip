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
          mid_digamma_0ba5fed9597b693e,
          mid_digamma_d3398190482814dc,
          mid_gamma_0ba5fed9597b693e,
          mid_gamma_d3398190482814dc,
          mid_invGamma1pm1_0ba5fed9597b693e,
          mid_invGamma1pm1_d3398190482814dc,
          mid_lanczos_0ba5fed9597b693e,
          mid_lanczos_d3398190482814dc,
          mid_logGamma_0ba5fed9597b693e,
          mid_logGamma_d3398190482814dc,
          mid_logGamma1p_0ba5fed9597b693e,
          mid_logGamma1p_d3398190482814dc,
          mid_regularizedGammaP_824133ce4aec3505,
          mid_regularizedGammaP_75c7ce7d33e7324b,
          mid_regularizedGammaP_804ca0a620991588,
          mid_regularizedGammaP_56240e5eb872ca1b,
          mid_regularizedGammaQ_824133ce4aec3505,
          mid_regularizedGammaQ_75c7ce7d33e7324b,
          mid_regularizedGammaQ_804ca0a620991588,
          mid_regularizedGammaQ_56240e5eb872ca1b,
          mid_trigamma_0ba5fed9597b693e,
          mid_trigamma_d3398190482814dc,
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
