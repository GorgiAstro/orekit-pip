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
          mid_init$_b5680f5c30eede66,
          mid_init$_f67f9ac4338cd9bf,
          mid_init$_66865f52d36c8d04,
          mid_init$_1958d683b153c045,
          mid_getFilter_16e9a7b5414faf2d,
          mid_getOutputFrame_b86f9f61d97a7244,
          mid_interpolate_c23d1b6dce92ab85,
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
