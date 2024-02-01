#ifndef org_orekit_propagation_StateCovarianceKeplerianHermiteInterpolator_H
#define org_orekit_propagation_StateCovarianceKeplerianHermiteInterpolator_H

#include "org/orekit/propagation/AbstractStateCovarianceInterpolator.h"

namespace org {
  namespace orekit {
    namespace time {
      class TimeInterpolator;
    }
    namespace utils {
      class CartesianDerivativesFilter;
    }
    namespace orbits {
      class OrbitType;
      class PositionAngleType;
      class Orbit;
    }
    namespace frames {
      class Frame;
      class LOFType;
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
          mid_init$_1f9c67e42ec14a98,
          mid_init$_2f765a260665fc14,
          mid_init$_f8dfe9f683392148,
          mid_init$_a355ad1fc47021f5,
          mid_init$_d04f735801af5eaa,
          mid_init$_fe5f6631276ef5cd,
          mid_init$_1524a08be5e589f6,
          mid_init$_64bef94f5d72746a,
          mid_getFilter_b9dfc27d8c56b5de,
          mid_computeInterpolatedCovarianceInOrbitFrame_e7868f37b0ca6b84,
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
