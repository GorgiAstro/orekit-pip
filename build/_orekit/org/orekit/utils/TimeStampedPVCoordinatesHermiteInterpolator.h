#ifndef org_orekit_utils_TimeStampedPVCoordinatesHermiteInterpolator_H
#define org_orekit_utils_TimeStampedPVCoordinatesHermiteInterpolator_H

#include "org/orekit/time/AbstractTimeInterpolator.h"

namespace org {
  namespace orekit {
    namespace utils {
      class CartesianDerivativesFilter;
      class TimeStampedPVCoordinates;
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

      class TimeStampedPVCoordinatesHermiteInterpolator : public ::org::orekit::time::AbstractTimeInterpolator {
       public:
        enum {
          mid_init$_ff7cb6c242604316,
          mid_init$_8fd427ab23829bf5,
          mid_init$_cbfa9adbb41a32ed,
          mid_init$_e6d8cb34a3bf8c82,
          mid_getFilter_b9dfc27d8c56b5de,
          mid_interpolate_6c320cbdb8900692,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit TimeStampedPVCoordinatesHermiteInterpolator(jobject obj) : ::org::orekit::time::AbstractTimeInterpolator(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        TimeStampedPVCoordinatesHermiteInterpolator(const TimeStampedPVCoordinatesHermiteInterpolator& obj) : ::org::orekit::time::AbstractTimeInterpolator(obj) {}

        TimeStampedPVCoordinatesHermiteInterpolator();
        TimeStampedPVCoordinatesHermiteInterpolator(jint);
        TimeStampedPVCoordinatesHermiteInterpolator(jint, const ::org::orekit::utils::CartesianDerivativesFilter &);
        TimeStampedPVCoordinatesHermiteInterpolator(jint, jdouble, const ::org::orekit::utils::CartesianDerivativesFilter &);

        ::org::orekit::utils::CartesianDerivativesFilter getFilter() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace utils {
      extern PyType_Def PY_TYPE_DEF(TimeStampedPVCoordinatesHermiteInterpolator);
      extern PyTypeObject *PY_TYPE(TimeStampedPVCoordinatesHermiteInterpolator);

      class t_TimeStampedPVCoordinatesHermiteInterpolator {
      public:
        PyObject_HEAD
        TimeStampedPVCoordinatesHermiteInterpolator object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_TimeStampedPVCoordinatesHermiteInterpolator *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const TimeStampedPVCoordinatesHermiteInterpolator&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const TimeStampedPVCoordinatesHermiteInterpolator&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
