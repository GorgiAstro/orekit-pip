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
          mid_digamma_7e960cd6eee376d8,
          mid_digamma_6672ad854985cb64,
          mid_gamma_7e960cd6eee376d8,
          mid_gamma_6672ad854985cb64,
          mid_invGamma1pm1_7e960cd6eee376d8,
          mid_invGamma1pm1_6672ad854985cb64,
          mid_lanczos_7e960cd6eee376d8,
          mid_lanczos_6672ad854985cb64,
          mid_logGamma_7e960cd6eee376d8,
          mid_logGamma_6672ad854985cb64,
          mid_logGamma1p_7e960cd6eee376d8,
          mid_logGamma1p_6672ad854985cb64,
          mid_regularizedGammaP_2268d18be49a6087,
          mid_regularizedGammaP_d5f58731bcb8a011,
          mid_regularizedGammaP_018e65b087664781,
          mid_regularizedGammaP_80e21d9f0e751610,
          mid_regularizedGammaQ_2268d18be49a6087,
          mid_regularizedGammaQ_d5f58731bcb8a011,
          mid_regularizedGammaQ_018e65b087664781,
          mid_regularizedGammaQ_80e21d9f0e751610,
          mid_trigamma_7e960cd6eee376d8,
          mid_trigamma_6672ad854985cb64,
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
