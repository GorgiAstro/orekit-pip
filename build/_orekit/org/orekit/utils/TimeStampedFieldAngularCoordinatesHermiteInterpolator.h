#ifndef org_orekit_utils_TimeStampedFieldAngularCoordinatesHermiteInterpolator_H
#define org_orekit_utils_TimeStampedFieldAngularCoordinatesHermiteInterpolator_H

#include "org/orekit/time/AbstractFieldTimeInterpolator.h"

namespace org {
  namespace orekit {
    namespace utils {
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

      class TimeStampedFieldAngularCoordinatesHermiteInterpolator : public ::org::orekit::time::AbstractFieldTimeInterpolator {
       public:
        enum {
          mid_init$_0640e6acf969ed28,
          mid_init$_a3da1a935cb37f7b,
          mid_init$_8d65f6d089410d57,
          mid_init$_a97116b9f853f824,
          mid_getFilter_c2e9b2b1c0db39b3,
          mid_interpolate_6a1647523266017e,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit TimeStampedFieldAngularCoordinatesHermiteInterpolator(jobject obj) : ::org::orekit::time::AbstractFieldTimeInterpolator(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        TimeStampedFieldAngularCoordinatesHermiteInterpolator(const TimeStampedFieldAngularCoordinatesHermiteInterpolator& obj) : ::org::orekit::time::AbstractFieldTimeInterpolator(obj) {}

        TimeStampedFieldAngularCoordinatesHermiteInterpolator();
        TimeStampedFieldAngularCoordinatesHermiteInterpolator(jint);
        TimeStampedFieldAngularCoordinatesHermiteInterpolator(jint, const ::org::orekit::utils::AngularDerivativesFilter &);
        TimeStampedFieldAngularCoordinatesHermiteInterpolator(jint, jdouble, const ::org::orekit::utils::AngularDerivativesFilter &);

        ::org::orekit::utils::AngularDerivativesFilter getFilter() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace utils {
      extern PyType_Def PY_TYPE_DEF(TimeStampedFieldAngularCoordinatesHermiteInterpolator);
      extern PyTypeObject *PY_TYPE(TimeStampedFieldAngularCoordinatesHermiteInterpolator);

      class t_TimeStampedFieldAngularCoordinatesHermiteInterpolator {
      public:
        PyObject_HEAD
        TimeStampedFieldAngularCoordinatesHermiteInterpolator object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_TimeStampedFieldAngularCoordinatesHermiteInterpolator *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const TimeStampedFieldAngularCoordinatesHermiteInterpolator&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const TimeStampedFieldAngularCoordinatesHermiteInterpolator&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
