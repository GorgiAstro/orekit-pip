#ifndef org_orekit_utils_PythonFieldTimeStampedCache_H
#define org_orekit_utils_PythonFieldTimeStampedCache_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class FieldAbsoluteDate;
      class FieldTimeStamped;
    }
    namespace utils {
      class FieldTimeStampedCache;
    }
  }
  namespace hipparchus {
    class CalculusFieldElement;
  }
}
namespace java {
  namespace lang {
    class Throwable;
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

      class PythonFieldTimeStampedCache : public ::java::lang::Object {
       public:
        enum {
          mid_init$_a1fa5dae97ea5ed2,
          mid_finalize_a1fa5dae97ea5ed2,
          mid_getEarliest_e7a49be0190c3b40,
          mid_getLatest_e7a49be0190c3b40,
          mid_getNeighbors_fe526c9a9cb8189c,
          mid_getNeighborsSize_55546ef6a647f39b,
          mid_pythonDecRef_a1fa5dae97ea5ed2,
          mid_pythonExtension_6c0ce7e438e5ded4,
          mid_pythonExtension_3d7dd2314a0dd456,
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
