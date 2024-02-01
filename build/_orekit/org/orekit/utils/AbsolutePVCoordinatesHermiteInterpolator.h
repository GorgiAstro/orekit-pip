#ifndef org_orekit_utils_AbsolutePVCoordinatesHermiteInterpolator_H
#define org_orekit_utils_AbsolutePVCoordinatesHermiteInterpolator_H

#include "org/orekit/time/AbstractTimeInterpolator.h"

namespace org {
  namespace orekit {
    namespace frames {
      class Frame;
    }
    namespace utils {
      class CartesianDerivativesFilter;
      class AbsolutePVCoordinates;
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
    namespace utils {

      class AbsolutePVCoordinatesHermiteInterpolator : public ::org::orekit::time::AbstractTimeInterpolator {
       public:
        enum {
          mid_init$_9725b246c9e25f68,
          mid_init$_b744963488fb11c5,
          mid_init$_77d14de7cb3c9585,
          mid_init$_d72d0265fbc6575b,
          mid_getFilter_b9dfc27d8c56b5de,
          mid_getOutputFrame_cb151471db4570f0,
          mid_interpolate_853ab71ea613cf4d,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit AbsolutePVCoordinatesHermiteInterpolator(jobject obj) : ::org::orekit::time::AbstractTimeInterpolator(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        AbsolutePVCoordinatesHermiteInterpolator(const AbsolutePVCoordinatesHermiteInterpolator& obj) : ::org::orekit::time::AbstractTimeInterpolator(obj) {}

        AbsolutePVCoordinatesHermiteInterpolator(const ::org::orekit::frames::Frame &);
        AbsolutePVCoordinatesHermiteInterpolator(jint, const ::org::orekit::frames::Frame &);
        AbsolutePVCoordinatesHermiteInterpolator(jint, const ::org::orekit::frames::Frame &, const ::org::orekit::utils::CartesianDerivativesFilter &);
        AbsolutePVCoordinatesHermiteInterpolator(jint, jdouble, const ::org::orekit::frames::Frame &, const ::org::orekit::utils::CartesianDerivativesFilter &);

        ::org::orekit::utils::CartesianDerivativesFilter getFilter() const;
        ::org::orekit::frames::Frame getOutputFrame() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace utils {
      extern PyType_Def PY_TYPE_DEF(AbsolutePVCoordinatesHermiteInterpolator);
      extern PyTypeObject *PY_TYPE(AbsolutePVCoordinatesHermiteInterpolator);

      class t_AbsolutePVCoordinatesHermiteInterpolator {
      public:
        PyObject_HEAD
        AbsolutePVCoordinatesHermiteInterpolator object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_AbsolutePVCoordinatesHermiteInterpolator *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const AbsolutePVCoordinatesHermiteInterpolator&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const AbsolutePVCoordinatesHermiteInterpolator&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
