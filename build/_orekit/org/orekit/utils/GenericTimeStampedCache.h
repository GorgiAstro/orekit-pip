#ifndef org_orekit_utils_GenericTimeStampedCache_H
#define org_orekit_utils_GenericTimeStampedCache_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace utils {
      class TimeStampedGenerator;
      class TimeStampedCache;
    }
    namespace time {
      class AbsoluteDate;
      class TimeStamped;
    }
  }
}
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
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace utils {

      class GenericTimeStampedCache : public ::java::lang::Object {
       public:
        enum {
          mid_init$_0f6126ec31c23fbe,
          mid_init$_7dccdc905f2755d6,
          mid_getEarliest_da8f710d3d2958bf,
          mid_getEntries_412668abc8d889e9,
          mid_getGenerateCalls_412668abc8d889e9,
          mid_getGenerator_2c8890bb845f5c9a,
          mid_getGetNeighborsCalls_412668abc8d889e9,
          mid_getLatest_da8f710d3d2958bf,
          mid_getMaxNeighborsSize_412668abc8d889e9,
          mid_getMaxSlots_412668abc8d889e9,
          mid_getMaxSpan_557b8123390d8d0c,
          mid_getNeighbors_b9470a4d1609cf1f,
          mid_getNewSlotQuantumGap_557b8123390d8d0c,
          mid_getSlots_412668abc8d889e9,
          mid_getSlotsEvictions_412668abc8d889e9,
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
