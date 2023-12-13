#ifndef org_orekit_propagation_AbstractStateCovarianceInterpolator_H
#define org_orekit_propagation_AbstractStateCovarianceInterpolator_H

#include "org/orekit/time/AbstractTimeInterpolator.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class StateCovariance;
    }
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
      class TimeStampedPair;
      class AbstractTimeInterpolator$InterpolationData;
      class TimeInterpolator;
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
          mid_init$_772c854c91c60aaa,
          mid_init$_50c4488e189fba59,
          mid_getOrbitInterpolator_04638ce011c1f261,
          mid_getOutFrame_2c51111cc6894ba1,
          mid_getOutLOF_f183bcc89f4a1412,
          mid_getOutOrbitType_c7d4737d7afca612,
          mid_getOutPositionAngleType_c25055891f180348,
          mid_interpolate_74ea3235d4212fcd,
          mid_computeInterpolatedCovarianceInOrbitFrame_6e94f93e19d6364d,
          mid_interpolateOrbit_324b5a3a2e7a2f29,
          mid_expressCovarianceInDesiredOutput_1344e03f312298d5,
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
