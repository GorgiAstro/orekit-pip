#ifndef org_orekit_time_AbstractTimeInterpolator_H
#define org_orekit_time_AbstractTimeInterpolator_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
    class Collection;
    namespace stream {
      class Stream;
    }
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace time {
      class TimeInterpolator;
      class AbsoluteDate;
      class TimeStamped;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace time {

      class AbstractTimeInterpolator : public ::java::lang::Object {
       public:
        enum {
          mid_init$_89aad365fb0ed8da,
          mid_checkInterpolatorCompatibilityWithSampleSize_e37a8011f5ddf655,
          mid_getExtrapolationThreshold_557b8123390d8d0c,
          mid_getNbInterpolationPoints_412668abc8d889e9,
          mid_getSubInterpolators_0d9551367f7ecdef,
          mid_interpolate_da5f44ff87474809,
          mid_interpolate_d5b4fcbe51b9e2da,
          mid_interpolate_db599ec6bbae5863,
          mid_addOptionalSubInterpolatorIfDefined_84e95070d7e3b525,
          mid_getTimeParameter_3bd5b6ae6cb80300,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit AbstractTimeInterpolator(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        AbstractTimeInterpolator(const AbstractTimeInterpolator& obj) : ::java::lang::Object(obj) {}

        static jdouble DEFAULT_EXTRAPOLATION_THRESHOLD_SEC;
        static jint DEFAULT_INTERPOLATION_POINTS;

        AbstractTimeInterpolator(jint, jdouble);

        static void checkInterpolatorCompatibilityWithSampleSize(const ::org::orekit::time::TimeInterpolator &, jint);
        jdouble getExtrapolationThreshold() const;
        jint getNbInterpolationPoints() const;
        ::java::util::List getSubInterpolators() const;
        ::org::orekit::time::TimeStamped interpolate(const ::org::orekit::time::AbsoluteDate &, const ::java::util::Collection &) const;
        ::org::orekit::time::TimeStamped interpolate(const ::org::orekit::time::AbsoluteDate &, const ::java::util::stream::Stream &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace time {
      extern PyType_Def PY_TYPE_DEF(AbstractTimeInterpolator);
      extern PyTypeObject *PY_TYPE(AbstractTimeInterpolator);

      class t_AbstractTimeInterpolator {
      public:
        PyObject_HEAD
        AbstractTimeInterpolator object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_AbstractTimeInterpolator *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const AbstractTimeInterpolator&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const AbstractTimeInterpolator&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
