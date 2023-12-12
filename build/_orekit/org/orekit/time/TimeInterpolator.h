#ifndef org_orekit_time_TimeInterpolator_H
#define org_orekit_time_TimeInterpolator_H

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

      class TimeInterpolator : public ::java::lang::Object {
       public:
        enum {
          mid_getExtrapolationThreshold_557b8123390d8d0c,
          mid_getNbInterpolationPoints_412668abc8d889e9,
          mid_getSubInterpolators_0d9551367f7ecdef,
          mid_interpolate_da5f44ff87474809,
          mid_interpolate_d5b4fcbe51b9e2da,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit TimeInterpolator(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        TimeInterpolator(const TimeInterpolator& obj) : ::java::lang::Object(obj) {}

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
      extern PyType_Def PY_TYPE_DEF(TimeInterpolator);
      extern PyTypeObject *PY_TYPE(TimeInterpolator);

      class t_TimeInterpolator {
      public:
        PyObject_HEAD
        TimeInterpolator object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_TimeInterpolator *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const TimeInterpolator&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const TimeInterpolator&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
