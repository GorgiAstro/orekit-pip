#ifndef org_orekit_utils_SecularAndHarmonic_H
#define org_orekit_utils_SecularAndHarmonic_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace utils {

      class SecularAndHarmonic : public ::java::lang::Object {
       public:
        enum {
          mid_init$_7d4f41c65056f174,
          mid_addPoint_076f09dda44638d8,
          mid_addWeightedPoint_7a7066686bdc7efc,
          mid_approximateAsPolynomialOnly_0299ee3da6eb8f2b,
          mid_fit_7ae3461a92a43152,
          mid_getFittedParameters_7cdc325af0834901,
          mid_getHarmonicAmplitude_456d9a2f64d6b28d,
          mid_getPulsations_7cdc325af0834901,
          mid_getReferenceDate_aaa854c403487cf3,
          mid_getSecularDegree_f2f64475e4580546,
          mid_meanDerivative_70f13864c71b813e,
          mid_meanSecondDerivative_70f13864c71b813e,
          mid_meanValue_70f13864c71b813e,
          mid_osculatingDerivative_e912d21057defe63,
          mid_osculatingSecondDerivative_e912d21057defe63,
          mid_osculatingValue_e912d21057defe63,
          mid_resetFitting_9787c4eff1570d3f,
          mid_setConvergenceRMS_77e0f9a1f260e2e5,
          mid_setMaxIter_0a2a1ac2721c0336,
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
