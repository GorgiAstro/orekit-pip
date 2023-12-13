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
    class Field;
    class CalculusFieldElement;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace utils {

      class ImmutableFieldTimeStampedCache : public ::java::lang::Object {
       public:
        enum {
          mid_init$_36a24b5e65508672,
          mid_emptyCache_14972a5b95f969fe,
          mid_getAll_e62d3bb06d56d7e3,
          mid_getEarliest_e7a49be0190c3b40,
          mid_getLatest_e7a49be0190c3b40,
          mid_getNeighbors_fe526c9a9cb8189c,
          mid_getNeighborsSize_55546ef6a647f39b,
          mid_toString_1c1fa1e935d6cdcf,
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
