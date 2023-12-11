#ifndef org_orekit_utils_SecularAndHarmonic_H
#define org_orekit_utils_SecularAndHarmonic_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
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
  namespace orekit {
    namespace utils {

      class SecularAndHarmonic : public ::java::lang::Object {
       public:
        enum {
          mid_init$_3246bd31f432242d,
          mid_addPoint_f22bef3f7be90029,
          mid_addWeightedPoint_80c808f44ee4ae1c,
          mid_approximateAsPolynomialOnly_fe670ae8f5b87144,
          mid_fit_0640e6acf969ed28,
          mid_getFittedParameters_a53a7513ecedada2,
          mid_getHarmonicAmplitude_557b8123390d8d0c,
          mid_getPulsations_a53a7513ecedada2,
          mid_getReferenceDate_7a97f7e149e79afb,
          mid_getSecularDegree_412668abc8d889e9,
          mid_meanDerivative_e0f8c208355be955,
          mid_meanSecondDerivative_e0f8c208355be955,
          mid_meanValue_e0f8c208355be955,
          mid_osculatingDerivative_b0b988f941da47d8,
          mid_osculatingSecondDerivative_b0b988f941da47d8,
          mid_osculatingValue_b0b988f941da47d8,
          mid_resetFitting_0fd0d5413261aea6,
          mid_setConvergenceRMS_10f281d777284cea,
          mid_setMaxIter_a3da1a935cb37f7b,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit SecularAndHarmonic(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        SecularAndHarmonic(const SecularAndHarmonic& obj) : ::java::lang::Object(obj) {}

        SecularAndHarmonic(jint, const JArray< jdouble > &);

        void addPoint(const ::org::orekit::time::AbsoluteDate &, jdouble) const;
        void addWeightedPoint(const ::org::orekit::time::AbsoluteDate &, jdouble, jdouble) const;
        JArray< jdouble > approximateAsPolynomialOnly(jint, const ::org::orekit::time::AbsoluteDate &, jint, jint, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::time::AbsoluteDate &, jdouble) const;
        void fit() const;
        JArray< jdouble > getFittedParameters() const;
        jdouble getHarmonicAmplitude() const;
        JArray< jdouble > getPulsations() const;
        ::org::orekit::time::AbsoluteDate getReferenceDate() const;
        jint getSecularDegree() const;
        jdouble meanDerivative(const ::org::orekit::time::AbsoluteDate &, jint, jint) const;
        jdouble meanSecondDerivative(const ::org::orekit::time::AbsoluteDate &, jint, jint) const;
        jdouble meanValue(const ::org::orekit::time::AbsoluteDate &, jint, jint) const;
        jdouble osculatingDerivative(const ::org::orekit::time::AbsoluteDate &) const;
        jdouble osculatingSecondDerivative(const ::org::orekit::time::AbsoluteDate &) const;
        jdouble osculatingValue(const ::org::orekit::time::AbsoluteDate &) const;
        void resetFitting(const ::org::orekit::time::AbsoluteDate &, const JArray< jdouble > &) const;
        void setConvergenceRMS(jdouble) const;
        void setMaxIter(jint) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace utils {
      extern PyType_Def PY_TYPE_DEF(SecularAndHarmonic);
      extern PyTypeObject *PY_TYPE(SecularAndHarmonic);

      class t_SecularAndHarmonic {
      public:
        PyObject_HEAD
        SecularAndHarmonic object;
        static PyObject *wrap_Object(const SecularAndHarmonic&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
