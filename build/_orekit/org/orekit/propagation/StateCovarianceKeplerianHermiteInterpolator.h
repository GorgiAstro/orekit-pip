#ifndef org_orekit_propagation_StateCovarianceKeplerianHermiteInterpolator_H
#define org_orekit_propagation_StateCovarianceKeplerianHermiteInterpolator_H

#include "org/orekit/propagation/AbstractStateCovarianceInterpolator.h"

namespace org {
  namespace orekit {
    namespace time {
      class TimeInterpolator;
    }
    namespace frames {
      class LOFType;
      class Frame;
    }
    namespace utils {
      class CartesianDerivativesFilter;
    }
    namespace orbits {
      class Orbit;
      class PositionAngleType;
      class OrbitType;
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
          mid_init$_593cd2b7d0317f07,
          mid_init$_21f4c17d68bba5ef,
          mid_init$_bf5c99df9f26b339,
          mid_init$_8971be620ebbf42d,
          mid_init$_08a6959f18a33e09,
          mid_init$_827e3ea27712ae63,
          mid_init$_457f891f62d6f597,
          mid_init$_43e3a99a8bd4ae9a,
          mid_getFilter_237181d932324188,
          mid_computeInterpolatedCovarianceInOrbitFrame_9c0671e111b7adfc,
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
