#ifndef org_orekit_orbits_OrbitHermiteInterpolator_H
#define org_orekit_orbits_OrbitHermiteInterpolator_H

#include "org/orekit/orbits/AbstractOrbitInterpolator.h"

namespace org {
  namespace orekit {
    namespace utils {
      class CartesianDerivativesFilter;
    }
    namespace orbits {
      class Orbit;
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

      class OrbitHermiteInterpolator : public ::org::orekit::orbits::AbstractOrbitInterpolator {
       public:
        enum {
          mid_init$_b1992bd1bb70f476,
          mid_init$_2ec8e00deddf59e8,
          mid_init$_2844b958be24763f,
          mid_init$_8ee7bc978fec63e6,
          mid_getPVAFilter_237181d932324188,
          mid_interpolate_8f43113475f73463,
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
