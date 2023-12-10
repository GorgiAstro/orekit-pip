#ifndef org_orekit_utils_TimeStampedCache_H
#define org_orekit_utils_TimeStampedCache_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    namespace stream {
      class Stream;
    }
  }
  namespace lang {
    class Class;
    class IllegalStateException;
  }
}
namespace org {
  namespace orekit {
    namespace time {
      class TimeStamped;
      class AbsoluteDate;
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
          mid_getEarliest_c2a1e08c7d64b02c,
          mid_getLatest_c2a1e08c7d64b02c,
          mid_getMaxNeighborsSize_570ce0828f81a2c1,
          mid_getNeighbors_52c888e7e44261e4,
          mid_getNeighbors_a067290de6165283,
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
