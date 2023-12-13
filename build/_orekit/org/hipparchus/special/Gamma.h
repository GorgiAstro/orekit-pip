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
          mid_digamma_04fd0666b613d2ab,
          mid_digamma_6e00dc5eb352fe51,
          mid_gamma_04fd0666b613d2ab,
          mid_gamma_6e00dc5eb352fe51,
          mid_invGamma1pm1_04fd0666b613d2ab,
          mid_invGamma1pm1_6e00dc5eb352fe51,
          mid_lanczos_04fd0666b613d2ab,
          mid_lanczos_6e00dc5eb352fe51,
          mid_logGamma_04fd0666b613d2ab,
          mid_logGamma_6e00dc5eb352fe51,
          mid_logGamma1p_04fd0666b613d2ab,
          mid_logGamma1p_6e00dc5eb352fe51,
          mid_regularizedGammaP_99e3200dafc19573,
          mid_regularizedGammaP_c6408fdce2cc6c1a,
          mid_regularizedGammaP_2d76000a36416433,
          mid_regularizedGammaP_ac1aa8d2032c33ab,
          mid_regularizedGammaQ_99e3200dafc19573,
          mid_regularizedGammaQ_c6408fdce2cc6c1a,
          mid_regularizedGammaQ_2d76000a36416433,
          mid_regularizedGammaQ_ac1aa8d2032c33ab,
          mid_trigamma_04fd0666b613d2ab,
          mid_trigamma_6e00dc5eb352fe51,
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
