#ifndef org_orekit_orbits_OrbitHermiteInterpolator_H
#define org_orekit_orbits_OrbitHermiteInterpolator_H

#include "org/orekit/orbits/AbstractOrbitInterpolator.h"

namespace org {
  namespace orekit {
    namespace utils {
      class CartesianDerivativesFilter;
    }
    namespace frames {
      class Frame;
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

      class OrbitHermiteInterpolator : public ::org::orekit::orbits::AbstractOrbitInterpolator {
       public:
        enum {
          mid_init$_535d1f91a93c8b4d,
          mid_init$_03d00ffd0ee81fe0,
          mid_init$_51c833c667e08e0f,
          mid_init$_824f93e8d6b45930,
          mid_getPVAFilter_6c4898d6ec0c3837,
          mid_interpolate_633c02f6304af1cb,
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
