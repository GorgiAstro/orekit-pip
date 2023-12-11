#ifndef org_orekit_utils_TimeStampedCache_H
#define org_orekit_utils_TimeStampedCache_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class IllegalStateException;
    class Class;
  }
  namespace util {
    namespace stream {
      class Stream;
    }
  }
}
namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
      class TimeStamped;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace utils {

      class TimeStampedCache : public ::java::lang::Object {
       public:
        enum {
          mid_getEarliest_da8f710d3d2958bf,
          mid_getLatest_da8f710d3d2958bf,
          mid_getMaxNeighborsSize_412668abc8d889e9,
          mid_getNeighbors_0545d4cc79d2fdd1,
          mid_getNeighbors_b9470a4d1609cf1f,
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
