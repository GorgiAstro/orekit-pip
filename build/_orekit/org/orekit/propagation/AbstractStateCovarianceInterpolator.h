#ifndef org_orekit_propagation_AbstractStateCovarianceInterpolator_H
#define org_orekit_propagation_AbstractStateCovarianceInterpolator_H

#include "org/orekit/time/AbstractTimeInterpolator.h"

namespace org {
  namespace orekit {
    namespace time {
      class AbstractTimeInterpolator$InterpolationData;
      class TimeStampedPair;
      class TimeInterpolator;
    }
    namespace propagation {
      class StateCovariance;
    }
    namespace frames {
      class LOFType;
      class Frame;
    }
    namespace orbits {
      class PositionAngleType;
      class Orbit;
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

      class AbstractStateCovarianceInterpolator : public ::org::orekit::time::AbstractTimeInterpolator {
       public:
        enum {
          mid_init$_5f0807e7942c7d7c,
          mid_init$_7b4aa1d843c89a93,
          mid_getOrbitInterpolator_1d0d15c75b6b7aca,
          mid_getOutFrame_b86f9f61d97a7244,
          mid_getOutLOF_91870b5ccc8bfe11,
          mid_getOutOrbitType_e29360d311dc0e20,
          mid_getOutPositionAngleType_8f17e83e5a86217c,
          mid_interpolate_fcc939c8c4b4de8b,
          mid_interpolateOrbit_0577ed07067da9a4,
          mid_computeInterpolatedCovarianceInOrbitFrame_b3673400c0fde69a,
          mid_expressCovarianceInDesiredOutput_787125c88b8db04c,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit AbstractStateCovarianceInterpolator(jobject obj) : ::org::orekit::time::AbstractTimeInterpolator(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        AbstractStateCovarianceInterpolator(const AbstractStateCovarianceInterpolator& obj) : ::org::orekit::time::AbstractTimeInterpolator(obj) {}

        static jint COLUMN_DIM;
        static ::org::orekit::orbits::PositionAngleType *DEFAULT_POSITION_ANGLE;
        static jint ROW_DIM;

        AbstractStateCovarianceInterpolator(jint, jdouble, const ::org::orekit::time::TimeInterpolator &, const ::org::orekit::frames::LOFType &);
        AbstractStateCovarianceInterpolator(jint, jdouble, const ::org::orekit::time::TimeInterpolator &, const ::org::orekit::frames::Frame &, const ::org::orekit::orbits::OrbitType &, const ::org::orekit::orbits::PositionAngleType &);

        ::org::orekit::time::TimeInterpolator getOrbitInterpolator() const;
        ::org::orekit::frames::Frame getOutFrame() const;
        ::org::orekit::frames::LOFType getOutLOF() const;
        ::org::orekit::orbits::OrbitType getOutOrbitType() const;
        ::org::orekit::orbits::PositionAngleType getOutPositionAngleType() const;
        ::org::orekit::time::TimeStampedPair interpolate(const ::org::orekit::time::AbstractTimeInterpolator$InterpolationData &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      extern PyType_Def PY_TYPE_DEF(AbstractStateCovarianceInterpolator);
      extern PyTypeObject *PY_TYPE(AbstractStateCovarianceInterpolator);

      class t_AbstractStateCovarianceInterpolator {
      public:
        PyObject_HEAD
        AbstractStateCovarianceInterpolator object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_AbstractStateCovarianceInterpolator *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const AbstractStateCovarianceInterpolator&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const AbstractStateCovarianceInterpolator&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
