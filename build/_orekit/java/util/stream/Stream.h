#ifndef java_util_stream_Stream_H
#define java_util_stream_Stream_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    namespace stream {
      class Stream;
      class DoubleStream;
    }
    class Comparator;
    namespace function {
      class Supplier;
    }
    class Optional;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {
    namespace stream {

      class Stream : public ::java::lang::Object {
       public:
        enum {
          mid_concat_1e3d866c4700912a,
          mid_count_42c72b98e3c2e08a,
          mid_distinct_11e4ca8182c1933d,
          mid_empty_11e4ca8182c1933d,
          mid_findAny_aa56605e3771f379,
          mid_findFirst_aa56605e3771f379,
          mid_generate_2f8405cc89f98235,
          mid_limit_e5c29d6e72640fd8,
          mid_max_62928695c6c9336f,
          mid_min_62928695c6c9336f,
          mid_of_ea5d6111543a5047,
          mid_of_20f6511147a3e46d,
          mid_ofNullable_20f6511147a3e46d,
          mid_skip_e5c29d6e72640fd8,
          mid_sorted_11e4ca8182c1933d,
          mid_sorted_9e0086f5081f1d56,
          mid_toArray_2ab86268ef7a6631,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit Stream(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        Stream(const Stream& obj) : ::java::lang::Object(obj) {}

        static Stream concat(const Stream &, const Stream &);
        jlong count() const;
        Stream distinct() const;
        static Stream empty();
        ::java::util::Optional findAny() const;
        ::java::util::Optional findFirst() const;
        static Stream generate(const ::java::util::function::Supplier &);
        Stream limit(jlong) const;
        ::java::util::Optional max$(const ::java::util::Comparator &) const;
        ::java::util::Optional min$(const ::java::util::Comparator &) const;
        static Stream of(const JArray< ::java::lang::Object > &);
        static Stream of(const ::java::lang::Object &);
        static Stream ofNullable(const ::java::lang::Object &);
        Stream skip(jlong) const;
        Stream sorted() const;
        Stream sorted(const ::java::util::Comparator &) const;
        JArray< ::java::lang::Object > toArray() const;
      };
    }
  }
}

#include <Python.h>

namespace java {
  namespace util {
    namespace stream {
      extern PyType_Def PY_TYPE_DEF(Stream);
      extern PyTypeObject *PY_TYPE(Stream);

      class t_Stream {
      public:
        PyObject_HEAD
        Stream object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_Stream *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const Stream&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const Stream&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
