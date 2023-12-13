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
          mid_init$_75061e5f5bbace93,
          mid_addPoint_3dd4638451e09a7f,
          mid_addWeightedPoint_574dcea0b820e53f,
          mid_approximateAsPolynomialOnly_5574de1f3d416bc4,
          mid_fit_a1fa5dae97ea5ed2,
          mid_getFittedParameters_25e1757a36c4dde2,
          mid_getHarmonicAmplitude_b74f83833fdad017,
          mid_getPulsations_25e1757a36c4dde2,
          mid_getReferenceDate_c325492395d89b24,
          mid_getSecularDegree_55546ef6a647f39b,
          mid_meanDerivative_dd92b03c798e45ba,
          mid_meanSecondDerivative_dd92b03c798e45ba,
          mid_meanValue_dd92b03c798e45ba,
          mid_osculatingDerivative_fd347811007a6ba3,
          mid_osculatingSecondDerivative_fd347811007a6ba3,
          mid_osculatingValue_fd347811007a6ba3,
          mid_resetFitting_9bdf5cd7dd060d54,
          mid_setConvergenceRMS_8ba9fe7a847cecad,
          mid_setMaxIter_44ed599e93e8a30c,
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
