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
    namespace utils {
      class TimeStampedCache;
      class ImmutableTimeStampedCache;
    }
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

      class ImmutableTimeStampedCache : public ::java::lang::Object {
       public:
        enum {
          mid_init$_1d943e35e7f31ea1,
          mid_emptyCache_2f7820789ca74a92,
          mid_getAll_d751c1a57012b438,
          mid_getEarliest_80bbab87cd34ef1a,
          mid_getLatest_80bbab87cd34ef1a,
          mid_getMaxNeighborsSize_d6ab429752e7c267,
          mid_getNeighbors_ad75bac85cbb88e7,
          mid_toString_d2c8eb4129821f0e,
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
