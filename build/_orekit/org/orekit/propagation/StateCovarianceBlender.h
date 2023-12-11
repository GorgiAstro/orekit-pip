#ifndef org_orekit_propagation_StateCovarianceBlender_H
#define org_orekit_propagation_StateCovarianceBlender_H

#include "org/orekit/propagation/AbstractStateCovarianceInterpolator.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace polynomials {
        class SmoothStepFactory$SmoothStepFunction;
      }
    }
  }
  namespace orekit {
    namespace orbits {
      class OrbitType;
      class PositionAngleType;
      class Orbit;
    }
    namespace time {
      class TimeInterpolator;
    }
    namespace frames {
      class LOFType;
      class Frame;
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

      class StateCovarianceBlender : public ::org::orekit::propagation::AbstractStateCovarianceInterpolator {
       public:
        enum {
          mid_init$_4c0eb030f755b484,
          mid_init$_9518e74cf0516047,
          mid_computeInterpolatedCovarianceInOrbitFrame_1da586432f5e847a,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit StateCovarianceBlender(jobject obj) : ::org::orekit::propagation::AbstractStateCovarianceInterpolator(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        StateCovarianceBlender(const StateCovarianceBlender& obj) : ::org::orekit::propagation::AbstractStateCovarianceInterpolator(obj) {}

        StateCovarianceBlender(const ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction &, const ::org::orekit::time::TimeInterpolator &, const ::org::orekit::frames::LOFType &);
        StateCovarianceBlender(const ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction &, const ::org::orekit::time::TimeInterpolator &, const ::org::orekit::frames::Frame &, const ::org::orekit::orbits::OrbitType &, const ::org::orekit::orbits::PositionAngleType &);
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      extern PyType_Def PY_TYPE_DEF(StateCovarianceBlender);
      extern PyTypeObject *PY_TYPE(StateCovarianceBlender);

      class t_StateCovarianceBlender {
      public:
        PyObject_HEAD
        StateCovarianceBlender object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_StateCovarianceBlender *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const StateCovarianceBlender&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const StateCovarianceBlender&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
