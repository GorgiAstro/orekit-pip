#ifndef org_orekit_utils_ImmutableFieldTimeStampedCache_H
#define org_orekit_utils_ImmutableFieldTimeStampedCache_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
    class Field;
  }
  namespace orekit {
    namespace time {
      class FieldTimeStamped;
      class FieldAbsoluteDate;
    }
    namespace utils {
      class FieldTimeStampedCache;
      class ImmutableFieldTimeStampedCache;
    }
  }
}
namespace java {
  namespace util {
    namespace stream {
      class Stream;
    }
    class List;
    class Collection;
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace utils {

      class ImmutableFieldTimeStampedCache : public ::java::lang::Object {
       public:
        enum {
          mid_init$_11390acb87dd159d,
          mid_emptyCache_5028f5f041777e9b,
          mid_getAll_2afa36052df4765d,
          mid_getEarliest_f8d8d28f6791aa76,
          mid_getLatest_f8d8d28f6791aa76,
          mid_getNeighbors_92d676459a63dcda,
          mid_getNeighborsSize_570ce0828f81a2c1,
          mid_toString_11b109bd155ca898,
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
