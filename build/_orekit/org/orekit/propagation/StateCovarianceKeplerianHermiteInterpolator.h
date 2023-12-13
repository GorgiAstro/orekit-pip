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
      class Orbit;
      class PositionAngleType;
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
          mid_init$_ac9d81a5646e175e,
          mid_init$_07fdac11114440b0,
          mid_init$_93de8e1158ca3ae4,
          mid_init$_9c4efe655306d62f,
          mid_init$_2513faaabed5c727,
          mid_init$_fbfee31331c0e07f,
          mid_init$_c95dd8261457f030,
          mid_init$_0669fc90c2a9f156,
          mid_getFilter_63bfdcc4b7a0536c,
          mid_computeInterpolatedCovarianceInOrbitFrame_6e94f93e19d6364d,
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
