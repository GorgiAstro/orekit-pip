#ifndef org_orekit_utils_GenericTimeStampedCache_H
#define org_orekit_utils_GenericTimeStampedCache_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class TimeStamped;
      class AbsoluteDate;
    }
    namespace utils {
      class TimeStampedCache;
      class TimeStampedGenerator;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class IllegalStateException;
  }
  namespace util {
    namespace stream {
      class Stream;
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
          mid_init$_3b3b184c420a6a62,
          mid_init$_afe6b7a902b9406a,
          mid_getEarliest_a63f3f151ca9e302,
          mid_getEntries_55546ef6a647f39b,
          mid_getGenerateCalls_55546ef6a647f39b,
          mid_getGenerator_2a7005c2a7bbbe6e,
          mid_getGetNeighborsCalls_55546ef6a647f39b,
          mid_getLatest_a63f3f151ca9e302,
          mid_getMaxNeighborsSize_55546ef6a647f39b,
          mid_getMaxSlots_55546ef6a647f39b,
          mid_getMaxSpan_b74f83833fdad017,
          mid_getNeighbors_70177eb25c19b8d4,
          mid_getNewSlotQuantumGap_b74f83833fdad017,
          mid_getSlots_55546ef6a647f39b,
          mid_getSlotsEvictions_55546ef6a647f39b,
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
