#ifndef org_orekit_utils_FieldAbsolutePVCoordinatesHermiteInterpolator_H
#define org_orekit_utils_FieldAbsolutePVCoordinatesHermiteInterpolator_H

#include "org/orekit/time/AbstractFieldTimeInterpolator.h"

namespace org {
  namespace orekit {
    namespace utils {
      class CartesianDerivativesFilter;
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

      class FieldAbsolutePVCoordinatesHermiteInterpolator : public ::org::orekit::time::AbstractFieldTimeInterpolator {
       public:
        enum {
          mid_init$_535d1f91a93c8b4d,
          mid_init$_03d00ffd0ee81fe0,
          mid_init$_51c833c667e08e0f,
          mid_init$_824f93e8d6b45930,
          mid_getFilter_6c4898d6ec0c3837,
          mid_getOutputFrame_6c9bc0a928c56d4e,
          mid_interpolate_688bb3c7da5427a7,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FieldAbsolutePVCoordinatesHermiteInterpolator(jobject obj) : ::org::orekit::time::AbstractFieldTimeInterpolator(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FieldAbsolutePVCoordinatesHermiteInterpolator(const FieldAbsolutePVCoordinatesHermiteInterpolator& obj) : ::org::orekit::time::AbstractFieldTimeInterpolator(obj) {}

        FieldAbsolutePVCoordinatesHermiteInterpolator(const ::org::orekit::frames::Frame &);
        FieldAbsolutePVCoordinatesHermiteInterpolator(jint, const ::org::orekit::frames::Frame &);
        FieldAbsolutePVCoordinatesHermiteInterpolator(jint, const ::org::orekit::frames::Frame &, const ::org::orekit::utils::CartesianDerivativesFilter &);
        FieldAbsolutePVCoordinatesHermiteInterpolator(jint, jdouble, const ::org::orekit::frames::Frame &, const ::org::orekit::utils::CartesianDerivativesFilter &);

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
      extern PyType_Def PY_TYPE_DEF(FieldAbsolutePVCoordinatesHermiteInterpolator);
      extern PyTypeObject *PY_TYPE(FieldAbsolutePVCoordinatesHermiteInterpolator);

      class t_FieldAbsolutePVCoordinatesHermiteInterpolator {
      public:
        PyObject_HEAD
        FieldAbsolutePVCoordinatesHermiteInterpolator object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_FieldAbsolutePVCoordinatesHermiteInterpolator *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const FieldAbsolutePVCoordinatesHermiteInterpolator&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const FieldAbsolutePVCoordinatesHermiteInterpolator&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
