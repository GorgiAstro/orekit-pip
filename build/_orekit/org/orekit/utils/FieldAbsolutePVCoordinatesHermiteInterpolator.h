#ifndef org_orekit_utils_FieldAbsolutePVCoordinatesHermiteInterpolator_H
#define org_orekit_utils_FieldAbsolutePVCoordinatesHermiteInterpolator_H

#include "org/orekit/time/AbstractFieldTimeInterpolator.h"

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
    namespace utils {

      class FieldAbsolutePVCoordinatesHermiteInterpolator : public ::org::orekit::time::AbstractFieldTimeInterpolator {
       public:
        enum {
          mid_init$_9725b246c9e25f68,
          mid_init$_b744963488fb11c5,
          mid_init$_77d14de7cb3c9585,
          mid_init$_d72d0265fbc6575b,
          mid_getFilter_b9dfc27d8c56b5de,
          mid_getOutputFrame_cb151471db4570f0,
          mid_interpolate_0b46fb1c546ea631,
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
