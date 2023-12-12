#ifndef org_orekit_utils_ImmutableTimeStampedCache_H
#define org_orekit_utils_ImmutableTimeStampedCache_H

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
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace utils {
      class TimeStampedCache;
      class ImmutableTimeStampedCache;
    }
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

      class ImmutableTimeStampedCache : public ::java::lang::Object {
       public:
        enum {
          mid_init$_7eb5c0f6d06d97ea,
          mid_emptyCache_86a357074a1a5ab9,
          mid_getAll_0d9551367f7ecdef,
          mid_getEarliest_da8f710d3d2958bf,
          mid_getLatest_da8f710d3d2958bf,
          mid_getMaxNeighborsSize_412668abc8d889e9,
          mid_getNeighbors_b9470a4d1609cf1f,
          mid_toString_3cffd47377eca18a,
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
