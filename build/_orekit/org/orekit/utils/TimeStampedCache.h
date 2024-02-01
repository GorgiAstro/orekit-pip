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
    class IllegalStateException;
    class Class;
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
          mid_getEarliest_80bbab87cd34ef1a,
          mid_getLatest_80bbab87cd34ef1a,
          mid_getMaxNeighborsSize_d6ab429752e7c267,
          mid_getNeighbors_51316859db71bd81,
          mid_getNeighbors_ad75bac85cbb88e7,
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
