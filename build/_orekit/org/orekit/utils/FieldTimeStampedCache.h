#ifndef org_orekit_utils_FieldTimeStampedCache_H
#define org_orekit_utils_FieldTimeStampedCache_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class FieldAbsoluteDate;
      class FieldTimeStamped;
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

      class FieldTimeStampedCache : public ::java::lang::Object {
       public:
        enum {
          mid_getEarliest_d840ecaffb3bbf7f,
          mid_getLatest_d840ecaffb3bbf7f,
          mid_getNeighbors_d2b16151ed8cc73c,
          mid_getNeighborsSize_412668abc8d889e9,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FieldTimeStampedCache(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FieldTimeStampedCache(const FieldTimeStampedCache& obj) : ::java::lang::Object(obj) {}

        ::org::orekit::time::FieldTimeStamped getEarliest() const;
        ::org::orekit::time::FieldTimeStamped getLatest() const;
        ::java::util::stream::Stream getNeighbors(const ::org::orekit::time::FieldAbsoluteDate &) const;
        jint getNeighborsSize() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace utils {
      extern PyType_Def PY_TYPE_DEF(FieldTimeStampedCache);
      extern PyTypeObject *PY_TYPE(FieldTimeStampedCache);

      class t_FieldTimeStampedCache {
      public:
        PyObject_HEAD
        FieldTimeStampedCache object;
        PyTypeObject *parameters[2];
        static PyTypeObject **parameters_(t_FieldTimeStampedCache *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const FieldTimeStampedCache&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const FieldTimeStampedCache&, PyTypeObject *, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
