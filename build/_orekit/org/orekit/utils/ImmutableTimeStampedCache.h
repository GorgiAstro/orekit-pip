#ifndef org_orekit_utils_ImmutableTimeStampedCache_H
#define org_orekit_utils_ImmutableTimeStampedCache_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class TimeStamped;
      class AbsoluteDate;
    }
    namespace utils {
      class TimeStampedCache;
      class ImmutableTimeStampedCache;
    }
  }
}
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
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace utils {

      class ImmutableTimeStampedCache : public ::java::lang::Object {
       public:
        enum {
          mid_init$_23703d999b776f91,
          mid_emptyCache_63e099e72fa7bec4,
          mid_getAll_a6156df500549a58,
          mid_getEarliest_b6273cee359d7146,
          mid_getLatest_b6273cee359d7146,
          mid_getMaxNeighborsSize_f2f64475e4580546,
          mid_getNeighbors_1f145bd0decc1d0c,
          mid_toString_0090f7797e403f43,
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
