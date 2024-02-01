#ifndef org_orekit_time_TimeInterpolator_H
#define org_orekit_time_TimeInterpolator_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    namespace stream {
      class Stream;
    }
    class List;
    class Collection;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace time {
      class TimeStamped;
      class AbsoluteDate;
      class TimeInterpolator;
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
          mid_getExtrapolationThreshold_9981f74b2d109da6,
          mid_getNbInterpolationPoints_d6ab429752e7c267,
          mid_getSubInterpolators_d751c1a57012b438,
          mid_interpolate_96cdbf28d116a6bf,
          mid_interpolate_12f5cef05abb91a8,
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
