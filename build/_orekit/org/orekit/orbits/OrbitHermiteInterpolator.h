#ifndef org_orekit_orbits_OrbitHermiteInterpolator_H
#define org_orekit_orbits_OrbitHermiteInterpolator_H

#include "org/orekit/orbits/AbstractOrbitInterpolator.h"

namespace org {
  namespace orekit {
    namespace orbits {
      class Orbit;
    }
    namespace frames {
      class Frame;
    }
    namespace utils {
      class CartesianDerivativesFilter;
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

      class OrbitHermiteInterpolator : public ::org::orekit::orbits::AbstractOrbitInterpolator {
       public:
        enum {
          mid_init$_237ae1c2ddd68062,
          mid_init$_92e0516c51076c2f,
          mid_init$_5295144d3ac34660,
          mid_init$_7f6d7ca3076fa7fe,
          mid_getPVAFilter_63bfdcc4b7a0536c,
          mid_interpolate_ea364fd17b3fd043,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit OrbitHermiteInterpolator(jobject obj) : ::org::orekit::orbits::AbstractOrbitInterpolator(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        OrbitHermiteInterpolator(const OrbitHermiteInterpolator& obj) : ::org::orekit::orbits::AbstractOrbitInterpolator(obj) {}

        OrbitHermiteInterpolator(const ::org::orekit::frames::Frame &);
        OrbitHermiteInterpolator(jint, const ::org::orekit::frames::Frame &);
        OrbitHermiteInterpolator(jint, const ::org::orekit::frames::Frame &, const ::org::orekit::utils::CartesianDerivativesFilter &);
        OrbitHermiteInterpolator(jint, jdouble, const ::org::orekit::frames::Frame &, const ::org::orekit::utils::CartesianDerivativesFilter &);

        ::org::orekit::utils::CartesianDerivativesFilter getPVAFilter() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace orbits {
      extern PyType_Def PY_TYPE_DEF(OrbitHermiteInterpolator);
      extern PyTypeObject *PY_TYPE(OrbitHermiteInterpolator);

      class t_OrbitHermiteInterpolator {
      public:
        PyObject_HEAD
        OrbitHermiteInterpolator object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_OrbitHermiteInterpolator *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const OrbitHermiteInterpolator&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const OrbitHermiteInterpolator&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
