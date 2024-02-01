#ifndef org_orekit_utils_PythonTimeStampedCache_H
#define org_orekit_utils_PythonTimeStampedCache_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    namespace stream {
      class Stream;
    }
  }
  namespace lang {
    class Throwable;
    class IllegalStateException;
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace utils {
      class TimeStampedCache;
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

      class PythonTimeStampedCache : public ::java::lang::Object {
       public:
        enum {
          mid_init$_ff7cb6c242604316,
          mid_finalize_ff7cb6c242604316,
          mid_getEarliest_80bbab87cd34ef1a,
          mid_getLatest_80bbab87cd34ef1a,
          mid_getMaxNeighborsSize_d6ab429752e7c267,
          mid_getNeighbors_51316859db71bd81,
          mid_getNeighbors_ad75bac85cbb88e7,
          mid_pythonDecRef_ff7cb6c242604316,
          mid_pythonExtension_42c72b98e3c2e08a,
          mid_pythonExtension_f5bbab7e97879358,
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
