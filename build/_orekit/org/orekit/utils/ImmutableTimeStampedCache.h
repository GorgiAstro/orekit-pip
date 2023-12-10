#ifndef org_orekit_utils_ImmutableTimeStampedCache_H
#define org_orekit_utils_ImmutableTimeStampedCache_H

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
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
      class TimeStamped;
    }
    namespace utils {
      class ImmutableTimeStampedCache;
      class TimeStampedCache;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace utils {

      class ImmutableTimeStampedCache : public ::java::lang::Object {
       public:
        enum {
          mid_init$_11390acb87dd159d,
          mid_emptyCache_6750a7a81e7b6495,
          mid_getAll_2afa36052df4765d,
          mid_getEarliest_c2a1e08c7d64b02c,
          mid_getLatest_c2a1e08c7d64b02c,
          mid_getMaxNeighborsSize_570ce0828f81a2c1,
          mid_getNeighbors_a067290de6165283,
          mid_toString_11b109bd155ca898,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit ImmutableTimeStampedCache(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        ImmutableTimeStampedCache(const ImmutableTimeStampedCache& obj) : ::java::lang::Object(obj) {}

        ImmutableTimeStampedCache(jint, const ::java::util::Collection &);

        static ImmutableTimeStampedCache emptyCache();
        ::java::util::List getAll() const;
        ::org::orekit::time::TimeStamped getEarliest() const;
        ::org::orekit::time::TimeStamped getLatest() const;
        jint getMaxNeighborsSize() const;
        ::java::util::stream::Stream getNeighbors(const ::org::orekit::time::AbsoluteDate &, jint) const;
        ::java::lang::String toString() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace utils {
      extern PyType_Def PY_TYPE_DEF(ImmutableTimeStampedCache);
      extern PyTypeObject *PY_TYPE(ImmutableTimeStampedCache);

      class t_ImmutableTimeStampedCache {
      public:
        PyObject_HEAD
        ImmutableTimeStampedCache object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_ImmutableTimeStampedCache *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const ImmutableTimeStampedCache&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const ImmutableTimeStampedCache&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
