#ifndef org_orekit_propagation_StateCovarianceKeplerianHermiteInterpolator_H
#define org_orekit_propagation_StateCovarianceKeplerianHermiteInterpolator_H

#include "org/orekit/propagation/AbstractStateCovarianceInterpolator.h"

namespace org {
  namespace orekit {
    namespace orbits {
      class Orbit;
      class OrbitType;
      class PositionAngleType;
    }
    namespace time {
      class TimeInterpolator;
    }
    namespace frames {
      class Frame;
      class LOFType;
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
          mid_init$_48a6dcb8ba1e206b,
          mid_init$_5dfeb67fd2988885,
          mid_init$_596de125d0bf1d0a,
          mid_init$_7b6e4e34795f1add,
          mid_init$_e635f69f6b718ce6,
          mid_init$_215b0fc7a61130fd,
          mid_init$_22e3762927839869,
          mid_init$_06156d6cf98e4c27,
          mid_getFilter_6c4898d6ec0c3837,
          mid_computeInterpolatedCovarianceInOrbitFrame_1da586432f5e847a,
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
