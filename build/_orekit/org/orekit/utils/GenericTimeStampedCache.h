#ifndef org_orekit_utils_GenericTimeStampedCache_H
#define org_orekit_utils_GenericTimeStampedCache_H

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
    namespace utils {
      class TimeStampedCache;
      class TimeStampedGenerator;
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

      class GenericTimeStampedCache : public ::java::lang::Object {
       public:
        enum {
          mid_init$_865bbb0ad15ecfbc,
          mid_init$_c348b01d22639cec,
          mid_getEarliest_80bbab87cd34ef1a,
          mid_getEntries_d6ab429752e7c267,
          mid_getGenerateCalls_d6ab429752e7c267,
          mid_getGenerator_23e186bbf57aea41,
          mid_getGetNeighborsCalls_d6ab429752e7c267,
          mid_getLatest_80bbab87cd34ef1a,
          mid_getMaxNeighborsSize_d6ab429752e7c267,
          mid_getMaxSlots_d6ab429752e7c267,
          mid_getMaxSpan_9981f74b2d109da6,
          mid_getNeighbors_ad75bac85cbb88e7,
          mid_getNewSlotQuantumGap_9981f74b2d109da6,
          mid_getSlots_d6ab429752e7c267,
          mid_getSlotsEvictions_d6ab429752e7c267,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit GenericTimeStampedCache(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        GenericTimeStampedCache(const GenericTimeStampedCache& obj) : ::java::lang::Object(obj) {}

        static jint DEFAULT_CACHED_SLOTS_NUMBER;

        GenericTimeStampedCache(jint, jint, jdouble, jdouble, const ::org::orekit::utils::TimeStampedGenerator &);
        GenericTimeStampedCache(jint, jint, jdouble, jdouble, const ::org::orekit::utils::TimeStampedGenerator &, jdouble);

        ::org::orekit::time::TimeStamped getEarliest() const;
        jint getEntries() const;
        jint getGenerateCalls() const;
        ::org::orekit::utils::TimeStampedGenerator getGenerator() const;
        jint getGetNeighborsCalls() const;
        ::org::orekit::time::TimeStamped getLatest() const;
        jint getMaxNeighborsSize() const;
        jint getMaxSlots() const;
        jdouble getMaxSpan() const;
        ::java::util::stream::Stream getNeighbors(const ::org::orekit::time::AbsoluteDate &, jint) const;
        jdouble getNewSlotQuantumGap() const;
        jint getSlots() const;
        jint getSlotsEvictions() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace utils {
      extern PyType_Def PY_TYPE_DEF(GenericTimeStampedCache);
      extern PyTypeObject *PY_TYPE(GenericTimeStampedCache);

      class t_GenericTimeStampedCache {
      public:
        PyObject_HEAD
        GenericTimeStampedCache object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_GenericTimeStampedCache *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const GenericTimeStampedCache&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const GenericTimeStampedCache&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
