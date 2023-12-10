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
          mid_init$_7169a8c8a60b8b2c,
          mid_addPoint_fdc72bfdba154d74,
          mid_addWeightedPoint_e13c2ecfa437b820,
          mid_approximateAsPolynomialOnly_2ee769c2572ae0f8,
          mid_fit_0fa09c18fee449d5,
          mid_getFittedParameters_60c7040667a7dc5c,
          mid_getHarmonicAmplitude_dff5885c2c873297,
          mid_getPulsations_60c7040667a7dc5c,
          mid_getReferenceDate_85703d13e302437e,
          mid_getSecularDegree_570ce0828f81a2c1,
          mid_meanDerivative_6e58be30d061ae49,
          mid_meanSecondDerivative_6e58be30d061ae49,
          mid_meanValue_6e58be30d061ae49,
          mid_osculatingDerivative_bf1d7732f1acb697,
          mid_osculatingSecondDerivative_bf1d7732f1acb697,
          mid_osculatingValue_bf1d7732f1acb697,
          mid_resetFitting_ab5a86184bb74c69,
          mid_setConvergenceRMS_17db3a65980d3441,
          mid_setMaxIter_99803b0791f320ff,
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
