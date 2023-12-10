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
      class TimeStampedGenerator;
      class TimeStampedCache;
    }
  }
}
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
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace utils {

      class GenericTimeStampedCache : public ::java::lang::Object {
       public:
        enum {
          mid_init$_fa9ad4845ee8a7ca,
          mid_init$_6afdb9308cfd17c0,
          mid_getEarliest_b6273cee359d7146,
          mid_getEntries_f2f64475e4580546,
          mid_getGenerateCalls_f2f64475e4580546,
          mid_getGenerator_aaa86a4e6cb88059,
          mid_getGetNeighborsCalls_f2f64475e4580546,
          mid_getLatest_b6273cee359d7146,
          mid_getMaxNeighborsSize_f2f64475e4580546,
          mid_getMaxSlots_f2f64475e4580546,
          mid_getMaxSpan_456d9a2f64d6b28d,
          mid_getNeighbors_1f145bd0decc1d0c,
          mid_getNewSlotQuantumGap_456d9a2f64d6b28d,
          mid_getSlots_f2f64475e4580546,
          mid_getSlotsEvictions_f2f64475e4580546,
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
