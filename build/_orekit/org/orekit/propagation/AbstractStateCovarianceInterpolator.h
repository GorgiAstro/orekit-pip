#ifndef org_orekit_propagation_AbstractStateCovarianceInterpolator_H
#define org_orekit_propagation_AbstractStateCovarianceInterpolator_H

#include "org/orekit/time/AbstractTimeInterpolator.h"

namespace org {
  namespace orekit {
    namespace orbits {
      class Orbit;
      class OrbitType;
      class PositionAngleType;
    }
    namespace time {
      class TimeInterpolator;
      class AbstractTimeInterpolator$InterpolationData;
      class TimeStampedPair;
    }
    namespace frames {
      class Frame;
      class LOFType;
    }
    namespace propagation {
      class StateCovariance;
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
          mid_init$_49155443553009e5,
          mid_init$_3d20fdce58d11197,
          mid_getOrbitInterpolator_1bb20e7ea407bfce,
          mid_getOutFrame_6c9bc0a928c56d4e,
          mid_getOutLOF_fc5c5809abf07d72,
          mid_getOutOrbitType_2cea2a2cb3e02091,
          mid_getOutPositionAngleType_f4984aee71df4c19,
          mid_interpolate_78e9037c485fbff2,
          mid_computeInterpolatedCovarianceInOrbitFrame_1da586432f5e847a,
          mid_interpolateOrbit_f6ee768c3d6032b8,
          mid_expressCovarianceInDesiredOutput_808f2b09b980aa21,
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
