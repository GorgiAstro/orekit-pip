#ifndef org_orekit_utils_ImmutableFieldTimeStampedCache_H
#define org_orekit_utils_ImmutableFieldTimeStampedCache_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace utils {
      class ImmutableFieldTimeStampedCache;
      class FieldTimeStampedCache;
    }
    namespace time {
      class FieldTimeStamped;
      class FieldAbsoluteDate;
    }
  }
  namespace hipparchus {
    class Field;
    class CalculusFieldElement;
  }
}
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
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace utils {

      class ImmutableFieldTimeStampedCache : public ::java::lang::Object {
       public:
        enum {
          mid_init$_23703d999b776f91,
          mid_emptyCache_c50aa02b5080c185,
          mid_getAll_a6156df500549a58,
          mid_getEarliest_2ac58ed946476d4e,
          mid_getLatest_2ac58ed946476d4e,
          mid_getNeighbors_a39ee104977ad16b,
          mid_getNeighborsSize_f2f64475e4580546,
          mid_toString_0090f7797e403f43,
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
