#ifndef org_orekit_utils_ImmutableFieldTimeStampedCache_H
#define org_orekit_utils_ImmutableFieldTimeStampedCache_H

#include "java/lang/Object.h"

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
namespace org {
  namespace orekit {
    namespace time {
      class FieldTimeStamped;
      class FieldAbsoluteDate;
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
          mid_init$_1d943e35e7f31ea1,
          mid_emptyCache_bd8b621701a2c22c,
          mid_getAll_d751c1a57012b438,
          mid_getEarliest_eb7a4124bb25f40f,
          mid_getLatest_eb7a4124bb25f40f,
          mid_getNeighbors_9de8811782a2be8a,
          mid_getNeighborsSize_d6ab429752e7c267,
          mid_toString_d2c8eb4129821f0e,
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
