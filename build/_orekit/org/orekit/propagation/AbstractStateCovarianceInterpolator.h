#ifndef org_orekit_propagation_AbstractStateCovarianceInterpolator_H
#define org_orekit_propagation_AbstractStateCovarianceInterpolator_H

#include "org/orekit/time/AbstractTimeInterpolator.h"

namespace org {
  namespace orekit {
    namespace time {
      class TimeInterpolator;
      class TimeStampedPair;
      class AbstractTimeInterpolator$InterpolationData;
    }
    namespace frames {
      class LOFType;
      class Frame;
    }
    namespace propagation {
      class StateCovariance;
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

      class AbstractStateCovarianceInterpolator : public ::org::orekit::time::AbstractTimeInterpolator {
       public:
        enum {
          mid_init$_53d3b37d6afa71f2,
          mid_init$_188af64307fce771,
          mid_getOrbitInterpolator_c8e4b57f7805ef06,
          mid_getOutFrame_c8fe21bcdac65bf6,
          mid_getOutLOF_c33b33ba21325973,
          mid_getOutOrbitType_63ea5cd020bf7bf1,
          mid_getOutPositionAngleType_2571e8fe1cede425,
          mid_interpolate_f2937e7cc04da0bf,
          mid_computeInterpolatedCovarianceInOrbitFrame_9c0671e111b7adfc,
          mid_interpolateOrbit_dd1bd6ffac89e4c5,
          mid_expressCovarianceInDesiredOutput_0a807921458325db,
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
