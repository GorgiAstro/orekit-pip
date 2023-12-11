#ifndef org_orekit_utils_PythonTimeStampedCache_H
#define org_orekit_utils_PythonTimeStampedCache_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Throwable;
    class IllegalStateException;
    class Class;
  }
  namespace util {
    namespace stream {
      class Stream;
    }
  }
}
namespace org {
  namespace orekit {
    namespace utils {
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

      class PythonTimeStampedCache : public ::java::lang::Object {
       public:
        enum {
          mid_init$_0640e6acf969ed28,
          mid_finalize_0640e6acf969ed28,
          mid_getEarliest_da8f710d3d2958bf,
          mid_getLatest_da8f710d3d2958bf,
          mid_getMaxNeighborsSize_412668abc8d889e9,
          mid_getNeighbors_0545d4cc79d2fdd1,
          mid_getNeighbors_b9470a4d1609cf1f,
          mid_pythonDecRef_0640e6acf969ed28,
          mid_pythonExtension_9e26256fb0d384a2,
          mid_pythonExtension_3cd6a6b354c6aa22,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit PythonTimeStampedCache(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        PythonTimeStampedCache(const PythonTimeStampedCache& obj) : ::java::lang::Object(obj) {}

        PythonTimeStampedCache();

        void finalize() const;
        ::org::orekit::time::TimeStamped getEarliest() const;
        ::org::orekit::time::TimeStamped getLatest() const;
        jint getMaxNeighborsSize() const;
        ::java::util::stream::Stream getNeighbors(const ::org::orekit::time::AbsoluteDate &) const;
        ::java::util::stream::Stream getNeighbors(const ::org::orekit::time::AbsoluteDate &, jint) const;
        void pythonDecRef() const;
        jlong pythonExtension() const;
        void pythonExtension(jlong) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace utils {
      extern PyType_Def PY_TYPE_DEF(PythonTimeStampedCache);
      extern PyTypeObject *PY_TYPE(PythonTimeStampedCache);

      class t_PythonTimeStampedCache {
      public:
        PyObject_HEAD
        PythonTimeStampedCache object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_PythonTimeStampedCache *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const PythonTimeStampedCache&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const PythonTimeStampedCache&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
