#ifndef org_orekit_orbits_FieldOrbitHermiteInterpolator_H
#define org_orekit_orbits_FieldOrbitHermiteInterpolator_H

#include "org/orekit/orbits/AbstractFieldOrbitInterpolator.h"

namespace org {
  namespace orekit {
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

      class FieldOrbitHermiteInterpolator : public ::org::orekit::orbits::AbstractFieldOrbitInterpolator {
       public:
        enum {
          mid_init$_9725b246c9e25f68,
          mid_init$_b744963488fb11c5,
          mid_init$_77d14de7cb3c9585,
          mid_init$_d72d0265fbc6575b,
          mid_getPVAFilter_b9dfc27d8c56b5de,
          mid_interpolate_cb3bc2d787cce5ef,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FieldOrbitHermiteInterpolator(jobject obj) : ::org::orekit::orbits::AbstractFieldOrbitInterpolator(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FieldOrbitHermiteInterpolator(const FieldOrbitHermiteInterpolator& obj) : ::org::orekit::orbits::AbstractFieldOrbitInterpolator(obj) {}

        FieldOrbitHermiteInterpolator(const ::org::orekit::frames::Frame &);
        FieldOrbitHermiteInterpolator(jint, const ::org::orekit::frames::Frame &);
        FieldOrbitHermiteInterpolator(jint, const ::org::orekit::frames::Frame &, const ::org::orekit::utils::CartesianDerivativesFilter &);
        FieldOrbitHermiteInterpolator(jint, jdouble, const ::org::orekit::frames::Frame &, const ::org::orekit::utils::CartesianDerivativesFilter &);

        ::org::orekit::utils::CartesianDerivativesFilter getPVAFilter() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace orbits {
      extern PyType_Def PY_TYPE_DEF(FieldOrbitHermiteInterpolator);
      extern PyTypeObject *PY_TYPE(FieldOrbitHermiteInterpolator);

      class t_FieldOrbitHermiteInterpolator {
      public:
        PyObject_HEAD
        FieldOrbitHermiteInterpolator object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_FieldOrbitHermiteInterpolator *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const FieldOrbitHermiteInterpolator&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const FieldOrbitHermiteInterpolator&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
