#ifndef org_orekit_utils_ImmutableFieldTimeStampedCache_H
#define org_orekit_utils_ImmutableFieldTimeStampedCache_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
    class Collection;
    namespace stream {
      class Stream;
    }
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace time {
      class FieldAbsoluteDate;
      class FieldTimeStamped;
    }
    namespace utils {
      class ImmutableFieldTimeStampedCache;
      class FieldTimeStampedCache;
    }
  }
  namespace hipparchus {
    class CalculusFieldElement;
    class Field;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace utils {

      class ImmutableFieldTimeStampedCache : public ::java::lang::Object {
       public:
        enum {
          mid_init$_7eb5c0f6d06d97ea,
          mid_emptyCache_9f9530342ec23b16,
          mid_getAll_0d9551367f7ecdef,
          mid_getEarliest_d840ecaffb3bbf7f,
          mid_getLatest_d840ecaffb3bbf7f,
          mid_getNeighbors_d2b16151ed8cc73c,
          mid_getNeighborsSize_412668abc8d889e9,
          mid_toString_3cffd47377eca18a,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit ImmutableFieldTimeStampedCache(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        ImmutableFieldTimeStampedCache(const ImmutableFieldTimeStampedCache& obj) : ::java::lang::Object(obj) {}

        ImmutableFieldTimeStampedCache(jint, const ::java::util::Collection &);

        static ImmutableFieldTimeStampedCache emptyCache(const ::org::hipparchus::Field &);
        ::java::util::List getAll() const;
        ::org::orekit::time::FieldTimeStamped getEarliest() const;
        ::org::orekit::time::FieldTimeStamped getLatest() const;
        ::java::util::stream::Stream getNeighbors(const ::org::orekit::time::FieldAbsoluteDate &) const;
        jint getNeighborsSize() const;
        ::java::lang::String toString() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace utils {
      extern PyType_Def PY_TYPE_DEF(ImmutableFieldTimeStampedCache);
      extern PyTypeObject *PY_TYPE(ImmutableFieldTimeStampedCache);

      class t_ImmutableFieldTimeStampedCache {
      public:
        PyObject_HEAD
        ImmutableFieldTimeStampedCache object;
        PyTypeObject *parameters[2];
        static PyTypeObject **parameters_(t_ImmutableFieldTimeStampedCache *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const ImmutableFieldTimeStampedCache&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const ImmutableFieldTimeStampedCache&, PyTypeObject *, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
