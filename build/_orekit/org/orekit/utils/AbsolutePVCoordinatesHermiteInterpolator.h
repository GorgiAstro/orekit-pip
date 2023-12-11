#ifndef org_orekit_utils_AbsolutePVCoordinatesHermiteInterpolator_H
#define org_orekit_utils_AbsolutePVCoordinatesHermiteInterpolator_H

#include "org/orekit/time/AbstractTimeInterpolator.h"

namespace org {
  namespace orekit {
    namespace utils {
      class CartesianDerivativesFilter;
      class AbsolutePVCoordinates;
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
    namespace utils {

      class AbsolutePVCoordinatesHermiteInterpolator : public ::org::orekit::time::AbstractTimeInterpolator {
       public:
        enum {
          mid_init$_535d1f91a93c8b4d,
          mid_init$_03d00ffd0ee81fe0,
          mid_init$_51c833c667e08e0f,
          mid_init$_824f93e8d6b45930,
          mid_getFilter_6c4898d6ec0c3837,
          mid_getOutputFrame_6c9bc0a928c56d4e,
          mid_interpolate_0403458fb3410429,
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
