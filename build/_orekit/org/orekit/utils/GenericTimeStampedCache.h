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
    class Class;
    class IllegalStateException;
  }
}
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
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace utils {

      class GenericTimeStampedCache : public ::java::lang::Object {
       public:
        enum {
          mid_init$_7f578824dbb30780,
          mid_init$_78773a34e0cc3e3a,
          mid_getEarliest_c2a1e08c7d64b02c,
          mid_getEntries_570ce0828f81a2c1,
          mid_getGenerateCalls_570ce0828f81a2c1,
          mid_getGenerator_8de8e24d5cfdcebf,
          mid_getGetNeighborsCalls_570ce0828f81a2c1,
          mid_getLatest_c2a1e08c7d64b02c,
          mid_getMaxNeighborsSize_570ce0828f81a2c1,
          mid_getMaxSlots_570ce0828f81a2c1,
          mid_getMaxSpan_dff5885c2c873297,
          mid_getNeighbors_a067290de6165283,
          mid_getNewSlotQuantumGap_dff5885c2c873297,
          mid_getSlots_570ce0828f81a2c1,
          mid_getSlotsEvictions_570ce0828f81a2c1,
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
