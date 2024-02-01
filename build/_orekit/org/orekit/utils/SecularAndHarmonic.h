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
          mid_init$_9d367e34fba0a5ea,
          mid_addPoint_6ed2c1cd7b0b1c75,
          mid_addWeightedPoint_d1740697fab3a0ee,
          mid_approximateAsPolynomialOnly_e4bfc9f116bdd840,
          mid_fit_ff7cb6c242604316,
          mid_getFittedParameters_be783177b060994b,
          mid_getHarmonicAmplitude_9981f74b2d109da6,
          mid_getPulsations_be783177b060994b,
          mid_getReferenceDate_80e11148db499dda,
          mid_getSecularDegree_d6ab429752e7c267,
          mid_meanDerivative_a3f9cea77181e4c8,
          mid_meanSecondDerivative_a3f9cea77181e4c8,
          mid_meanValue_a3f9cea77181e4c8,
          mid_osculatingDerivative_209f08246d708042,
          mid_osculatingSecondDerivative_209f08246d708042,
          mid_osculatingValue_209f08246d708042,
          mid_resetFitting_03daf63e1af251cd,
          mid_setConvergenceRMS_1ad26e8c8c0cd65b,
          mid_setMaxIter_8fd427ab23829bf5,
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
