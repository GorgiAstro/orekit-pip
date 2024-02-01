#ifndef org_orekit_utils_PythonFieldTimeStampedCache_H
#define org_orekit_utils_PythonFieldTimeStampedCache_H

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
    namespace time {
      class FieldTimeStamped;
      class FieldAbsoluteDate;
    }
    namespace utils {
      class FieldTimeStampedCache;
    }
  }
  namespace hipparchus {
    class CalculusFieldElement;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace utils {

      class PythonFieldTimeStampedCache : public ::java::lang::Object {
       public:
        enum {
          mid_init$_ff7cb6c242604316,
          mid_finalize_ff7cb6c242604316,
          mid_getEarliest_eb7a4124bb25f40f,
          mid_getLatest_eb7a4124bb25f40f,
          mid_getNeighbors_9de8811782a2be8a,
          mid_getNeighborsSize_d6ab429752e7c267,
          mid_pythonDecRef_ff7cb6c242604316,
          mid_pythonExtension_42c72b98e3c2e08a,
          mid_pythonExtension_f5bbab7e97879358,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit PythonFieldTimeStampedCache(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        PythonFieldTimeStampedCache(const PythonFieldTimeStampedCache& obj) : ::java::lang::Object(obj) {}

        PythonFieldTimeStampedCache();

        void finalize() const;
        ::org::orekit::time::FieldTimeStamped getEarliest() const;
        ::org::orekit::time::FieldTimeStamped getLatest() const;
        ::java::util::stream::Stream getNeighbors(const ::org::orekit::time::FieldAbsoluteDate &) const;
        jint getNeighborsSize() const;
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
      extern PyType_Def PY_TYPE_DEF(PythonFieldTimeStampedCache);
      extern PyTypeObject *PY_TYPE(PythonFieldTimeStampedCache);

      class t_PythonFieldTimeStampedCache {
      public:
        PyObject_HEAD
        PythonFieldTimeStampedCache object;
        PyTypeObject *parameters[2];
        static PyTypeObject **parameters_(t_PythonFieldTimeStampedCache *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const PythonFieldTimeStampedCache&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const PythonFieldTimeStampedCache&, PyTypeObject *, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
