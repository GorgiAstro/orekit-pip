#ifndef org_orekit_orbits_OrbitBlender_H
#define org_orekit_orbits_OrbitBlender_H

#include "org/orekit/orbits/AbstractOrbitInterpolator.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace polynomials {
        class SmoothStepFactory$SmoothStepFunction;
      }
    }
  }
  namespace orekit {
    namespace frames {
      class Frame;
    }
    namespace propagation {
      class Propagator;
    }
    namespace orbits {
      class Orbit;
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

      class OrbitBlender : public ::org::orekit::orbits::AbstractOrbitInterpolator {
       public:
        enum {
          mid_init$_6c77d9d7589928e2,
          mid_interpolate_1274df0c3ddd4327,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit OrbitBlender(jobject obj) : ::org::orekit::orbits::AbstractOrbitInterpolator(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        OrbitBlender(const OrbitBlender& obj) : ::org::orekit::orbits::AbstractOrbitInterpolator(obj) {}

        OrbitBlender(const ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction &, const ::org::orekit::propagation::Propagator &, const ::org::orekit::frames::Frame &);
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace orbits {
      extern PyType_Def PY_TYPE_DEF(OrbitBlender);
      extern PyTypeObject *PY_TYPE(OrbitBlender);

      class t_OrbitBlender {
      public:
        PyObject_HEAD
        OrbitBlender object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_OrbitBlender *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const OrbitBlender&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const OrbitBlender&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
