#ifndef org_orekit_propagation_AbstractStateCovarianceInterpolator_H
#define org_orekit_propagation_AbstractStateCovarianceInterpolator_H

#include "org/orekit/time/AbstractTimeInterpolator.h"

namespace org {
  namespace orekit {
    namespace time {
      class AbstractTimeInterpolator$InterpolationData;
      class TimeInterpolator;
      class TimeStampedPair;
    }
    namespace propagation {
      class StateCovariance;
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

      class AbstractStateCovarianceInterpolator : public ::org::orekit::time::AbstractTimeInterpolator {
       public:
        enum {
          mid_init$_4db14975e9e3fa0e,
          mid_init$_8ac92aa4416c2912,
          mid_getOrbitInterpolator_73c4976bc58cb3ff,
          mid_getOutFrame_cb151471db4570f0,
          mid_getOutLOF_2ef6889b4bcd6216,
          mid_getOutOrbitType_495f818d3570b7f5,
          mid_getOutPositionAngleType_a6db4e6edefda4be,
          mid_interpolate_e9904875752c9f36,
          mid_interpolateOrbit_a01636d7bf2c86d5,
          mid_computeInterpolatedCovarianceInOrbitFrame_e7868f37b0ca6b84,
          mid_expressCovarianceInDesiredOutput_e8a7e9eaceba4489,
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
