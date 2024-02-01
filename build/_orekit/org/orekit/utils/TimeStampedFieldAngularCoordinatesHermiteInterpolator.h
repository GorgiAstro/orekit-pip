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
          mid_init$_ff7cb6c242604316,
          mid_init$_8fd427ab23829bf5,
          mid_init$_8d5aeab05ce8f81e,
          mid_init$_b5c437acda06e416,
          mid_getFilter_410860c8cd87dc25,
          mid_interpolate_2afe64c66daa676f,
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
