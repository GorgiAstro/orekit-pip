#ifndef org_orekit_orbits_FieldOrbitBlender_H
#define org_orekit_orbits_FieldOrbitBlender_H

#include "org/orekit/orbits/AbstractFieldOrbitInterpolator.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace polynomials {
        class SmoothStepFactory$FieldSmoothStepFunction;
      }
    }
  }
  namespace orekit {
    namespace propagation {
      namespace analytical {
        class FieldAbstractAnalyticalPropagator;
      }
    }
    namespace time {
      class AbstractFieldTimeInterpolator$InterpolationData;
    }
    namespace orbits {
      class FieldOrbit;
    }
    namespace frames {
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
    namespace orbits {

      class FieldOrbitBlender : public ::org::orekit::orbits::AbstractFieldOrbitInterpolator {
       public:
        enum {
          mid_init$_f54c9e97b1f263c1,
          mid_interpolate_cb3bc2d787cce5ef,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FieldOrbitBlender(jobject obj) : ::org::orekit::orbits::AbstractFieldOrbitInterpolator(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FieldOrbitBlender(const FieldOrbitBlender& obj) : ::org::orekit::orbits::AbstractFieldOrbitInterpolator(obj) {}

        FieldOrbitBlender(const ::org::hipparchus::analysis::polynomials::SmoothStepFactory$FieldSmoothStepFunction &, const ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator &, const ::org::orekit::frames::Frame &);

        ::org::orekit::orbits::FieldOrbit interpolate(const ::org::orekit::time::AbstractFieldTimeInterpolator$InterpolationData &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace orbits {
      extern PyType_Def PY_TYPE_DEF(FieldOrbitBlender);
      extern PyTypeObject *PY_TYPE(FieldOrbitBlender);

      class t_FieldOrbitBlender {
      public:
        PyObject_HEAD
        FieldOrbitBlender object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_FieldOrbitBlender *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const FieldOrbitBlender&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const FieldOrbitBlender&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
