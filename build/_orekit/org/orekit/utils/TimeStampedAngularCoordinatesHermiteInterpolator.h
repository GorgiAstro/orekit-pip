#ifndef org_orekit_utils_TimeStampedAngularCoordinatesHermiteInterpolator_H
#define org_orekit_utils_TimeStampedAngularCoordinatesHermiteInterpolator_H

#include "org/orekit/time/AbstractTimeInterpolator.h"

namespace org {
  namespace orekit {
    namespace utils {
      class TimeStampedAngularCoordinates;
      class AngularDerivativesFilter;
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

      class TimeStampedAngularCoordinatesHermiteInterpolator : public ::org::orekit::time::AbstractTimeInterpolator {
       public:
        enum {
          mid_init$_0640e6acf969ed28,
          mid_init$_a3da1a935cb37f7b,
          mid_init$_8d65f6d089410d57,
          mid_init$_a97116b9f853f824,
          mid_getFilter_c2e9b2b1c0db39b3,
          mid_interpolate_40509368b5f3fdda,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit TimeStampedAngularCoordinatesHermiteInterpolator(jobject obj) : ::org::orekit::time::AbstractTimeInterpolator(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        TimeStampedAngularCoordinatesHermiteInterpolator(const TimeStampedAngularCoordinatesHermiteInterpolator& obj) : ::org::orekit::time::AbstractTimeInterpolator(obj) {}

        TimeStampedAngularCoordinatesHermiteInterpolator();
        TimeStampedAngularCoordinatesHermiteInterpolator(jint);
        TimeStampedAngularCoordinatesHermiteInterpolator(jint, const ::org::orekit::utils::AngularDerivativesFilter &);
        TimeStampedAngularCoordinatesHermiteInterpolator(jint, jdouble, const ::org::orekit::utils::AngularDerivativesFilter &);

        ::org::orekit::utils::AngularDerivativesFilter getFilter() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace utils {
      extern PyType_Def PY_TYPE_DEF(TimeStampedAngularCoordinatesHermiteInterpolator);
      extern PyTypeObject *PY_TYPE(TimeStampedAngularCoordinatesHermiteInterpolator);

      class t_TimeStampedAngularCoordinatesHermiteInterpolator {
      public:
        PyObject_HEAD
        TimeStampedAngularCoordinatesHermiteInterpolator object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_TimeStampedAngularCoordinatesHermiteInterpolator *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const TimeStampedAngularCoordinatesHermiteInterpolator&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const TimeStampedAngularCoordinatesHermiteInterpolator&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
