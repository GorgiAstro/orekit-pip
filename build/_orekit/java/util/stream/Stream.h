#ifndef java_util_stream_Stream_H
#define java_util_stream_Stream_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    namespace function {
      class Supplier;
    }
    class Comparator;
    class Optional;
    namespace stream {
      class Stream;
      class DoubleStream;
    }
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
          mid_concat_ea8982e01635e55c,
          mid_count_6c0ce7e438e5ded4,
          mid_distinct_14e21bf777ff0ccf,
          mid_empty_14e21bf777ff0ccf,
          mid_findAny_9fe5189c8c3b230d,
          mid_findFirst_9fe5189c8c3b230d,
          mid_generate_1f5b10f94e90fcb5,
          mid_limit_06d5b3d071eb65f4,
          mid_max_df542debf2a7bc51,
          mid_min_df542debf2a7bc51,
          mid_of_f33e55a5742a331d,
          mid_of_0338d8b14797c119,
          mid_ofNullable_0338d8b14797c119,
          mid_skip_06d5b3d071eb65f4,
          mid_sorted_14e21bf777ff0ccf,
          mid_sorted_0d98d46dfd00f1f4,
          mid_toArray_24e2edd6319f4c5a,
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
