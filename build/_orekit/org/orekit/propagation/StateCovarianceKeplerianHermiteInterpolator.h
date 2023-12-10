#ifndef org_orekit_propagation_StateCovarianceKeplerianHermiteInterpolator_H
#define org_orekit_propagation_StateCovarianceKeplerianHermiteInterpolator_H

#include "org/orekit/propagation/AbstractStateCovarianceInterpolator.h"

namespace org {
  namespace orekit {
    namespace frames {
      class LOFType;
      class Frame;
    }
    namespace orbits {
      class PositionAngleType;
      class Orbit;
      class OrbitType;
    }
    namespace time {
      class TimeInterpolator;
    }
    namespace utils {
      class CartesianDerivativesFilter;
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
    namespace propagation {

      class StateCovarianceKeplerianHermiteInterpolator : public ::org::orekit::propagation::AbstractStateCovarianceInterpolator {
       public:
        enum {
          mid_init$_a44ffd8bb5f49e75,
          mid_init$_5b1ae7e6cbac560c,
          mid_init$_b69d69c1cc177acf,
          mid_init$_3197a714f98d582f,
          mid_init$_b2f48658e3eb96bd,
          mid_init$_6d7c27d7647a298a,
          mid_init$_616c3b4472c86982,
          mid_init$_0c7e2c00747b2207,
          mid_getFilter_16e9a7b5414faf2d,
          mid_computeInterpolatedCovarianceInOrbitFrame_b3673400c0fde69a,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit StateCovarianceKeplerianHermiteInterpolator(jobject obj) : ::org::orekit::propagation::AbstractStateCovarianceInterpolator(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        StateCovarianceKeplerianHermiteInterpolator(const StateCovarianceKeplerianHermiteInterpolator& obj) : ::org::orekit::propagation::AbstractStateCovarianceInterpolator(obj) {}

        StateCovarianceKeplerianHermiteInterpolator(const ::org::orekit::time::TimeInterpolator &, const ::org::orekit::frames::LOFType &);
        StateCovarianceKeplerianHermiteInterpolator(jint, const ::org::orekit::time::TimeInterpolator &, const ::org::orekit::frames::LOFType &);
        StateCovarianceKeplerianHermiteInterpolator(const ::org::orekit::time::TimeInterpolator &, const ::org::orekit::frames::Frame &, const ::org::orekit::orbits::OrbitType &, const ::org::orekit::orbits::PositionAngleType &);
        StateCovarianceKeplerianHermiteInterpolator(jint, const ::org::orekit::time::TimeInterpolator &, const ::org::orekit::utils::CartesianDerivativesFilter &, const ::org::orekit::frames::LOFType &);
        StateCovarianceKeplerianHermiteInterpolator(jint, const ::org::orekit::time::TimeInterpolator &, const ::org::orekit::frames::Frame &, const ::org::orekit::orbits::OrbitType &, const ::org::orekit::orbits::PositionAngleType &);
        StateCovarianceKeplerianHermiteInterpolator(jint, jdouble, const ::org::orekit::time::TimeInterpolator &, const ::org::orekit::utils::CartesianDerivativesFilter &, const ::org::orekit::frames::LOFType &);
        StateCovarianceKeplerianHermiteInterpolator(jint, const ::org::orekit::time::TimeInterpolator &, const ::org::orekit::utils::CartesianDerivativesFilter &, const ::org::orekit::frames::Frame &, const ::org::orekit::orbits::OrbitType &, const ::org::orekit::orbits::PositionAngleType &);
        StateCovarianceKeplerianHermiteInterpolator(jint, jdouble, const ::org::orekit::time::TimeInterpolator &, const ::org::orekit::utils::CartesianDerivativesFilter &, const ::org::orekit::frames::Frame &, const ::org::orekit::orbits::OrbitType &, const ::org::orekit::orbits::PositionAngleType &);

        ::org::orekit::utils::CartesianDerivativesFilter getFilter() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      extern PyType_Def PY_TYPE_DEF(StateCovarianceKeplerianHermiteInterpolator);
      extern PyTypeObject *PY_TYPE(StateCovarianceKeplerianHermiteInterpolator);

      class t_StateCovarianceKeplerianHermiteInterpolator {
      public:
        PyObject_HEAD
        StateCovarianceKeplerianHermiteInterpolator object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_StateCovarianceKeplerianHermiteInterpolator *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const StateCovarianceKeplerianHermiteInterpolator&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const StateCovarianceKeplerianHermiteInterpolator&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
