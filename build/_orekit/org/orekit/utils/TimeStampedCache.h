#ifndef org_orekit_utils_TimeStampedCache_H
#define org_orekit_utils_TimeStampedCache_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class TimeStamped;
      class AbsoluteDate;
    }
  }
}
namespace java {
  namespace util {
    namespace stream {
      class Stream;
    }
  }
  namespace lang {
    class IllegalStateException;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace utils {

      class TimeStampedCache : public ::java::lang::Object {
       public:
        enum {
          mid_getEarliest_b6273cee359d7146,
          mid_getLatest_b6273cee359d7146,
          mid_getMaxNeighborsSize_f2f64475e4580546,
          mid_getNeighbors_b6c1d562b013fefd,
          mid_getNeighbors_1f145bd0decc1d0c,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit TimeStampedCache(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        TimeStampedCache(const TimeStampedCache& obj) : ::java::lang::Object(obj) {}

        ::org::orekit::time::TimeStamped getEarliest() const;
        ::org::orekit::time::TimeStamped getLatest() const;
        jint getMaxNeighborsSize() const;
        ::java::util::stream::Stream getNeighbors(const ::org::orekit::time::AbsoluteDate &) const;
        ::java::util::stream::Stream getNeighbors(const ::org::orekit::time::AbsoluteDate &, jint) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace utils {
      extern PyType_Def PY_TYPE_DEF(TimeStampedCache);
      extern PyTypeObject *PY_TYPE(TimeStampedCache);

      class t_TimeStampedCache {
      public:
        PyObject_HEAD
        TimeStampedCache object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_TimeStampedCache *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const TimeStampedCache&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const TimeStampedCache&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
