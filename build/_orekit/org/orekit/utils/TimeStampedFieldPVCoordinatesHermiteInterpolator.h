#ifndef org_orekit_utils_TimeStampedFieldPVCoordinatesHermiteInterpolator_H
#define org_orekit_utils_TimeStampedFieldPVCoordinatesHermiteInterpolator_H

#include "org/orekit/time/AbstractFieldTimeInterpolator.h"

namespace org {
  namespace orekit {
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

      class TimeStampedFieldPVCoordinatesHermiteInterpolator : public ::org::orekit::time::AbstractFieldTimeInterpolator {
       public:
        enum {
          mid_init$_0640e6acf969ed28,
          mid_init$_a3da1a935cb37f7b,
          mid_init$_d326b3da32a40ffa,
          mid_init$_fab028e15eb3891b,
          mid_getFilter_6c4898d6ec0c3837,
          mid_interpolate_5ac6a4ca260ac13f,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit TimeStampedFieldPVCoordinatesHermiteInterpolator(jobject obj) : ::org::orekit::time::AbstractFieldTimeInterpolator(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        TimeStampedFieldPVCoordinatesHermiteInterpolator(const TimeStampedFieldPVCoordinatesHermiteInterpolator& obj) : ::org::orekit::time::AbstractFieldTimeInterpolator(obj) {}

        TimeStampedFieldPVCoordinatesHermiteInterpolator();
        TimeStampedFieldPVCoordinatesHermiteInterpolator(jint);
        TimeStampedFieldPVCoordinatesHermiteInterpolator(jint, const ::org::orekit::utils::CartesianDerivativesFilter &);
        TimeStampedFieldPVCoordinatesHermiteInterpolator(jint, jdouble, const ::org::orekit::utils::CartesianDerivativesFilter &);

        ::org::orekit::utils::CartesianDerivativesFilter getFilter() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace utils {
      extern PyType_Def PY_TYPE_DEF(TimeStampedFieldPVCoordinatesHermiteInterpolator);
      extern PyTypeObject *PY_TYPE(TimeStampedFieldPVCoordinatesHermiteInterpolator);

      class t_TimeStampedFieldPVCoordinatesHermiteInterpolator {
      public:
        PyObject_HEAD
        TimeStampedFieldPVCoordinatesHermiteInterpolator object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_TimeStampedFieldPVCoordinatesHermiteInterpolator *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const TimeStampedFieldPVCoordinatesHermiteInterpolator&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const TimeStampedFieldPVCoordinatesHermiteInterpolator&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
