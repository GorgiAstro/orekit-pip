#ifndef org_orekit_propagation_StateCovarianceBlender_H
#define org_orekit_propagation_StateCovarianceBlender_H

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
    namespace orbits {
      class PositionAngleType;
      class Orbit;
      class OrbitType;
    }
  }
  namespace hipparchus {
    namespace analysis {
      namespace polynomials {
        class SmoothStepFactory$SmoothStepFunction;
      }
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
          mid_init$_09140af3e4389da0,
          mid_init$_2ffdce98ec11eef3,
          mid_computeInterpolatedCovarianceInOrbitFrame_e7868f37b0ca6b84,
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
