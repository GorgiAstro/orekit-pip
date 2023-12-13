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
      class ImmutableTimeStampedCache;
      class TimeStampedCache;
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
          mid_init$_36a24b5e65508672,
          mid_emptyCache_2902dff7f102e3bf,
          mid_getAll_e62d3bb06d56d7e3,
          mid_getEarliest_a63f3f151ca9e302,
          mid_getLatest_a63f3f151ca9e302,
          mid_getMaxNeighborsSize_55546ef6a647f39b,
          mid_getNeighbors_70177eb25c19b8d4,
          mid_toString_1c1fa1e935d6cdcf,
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
