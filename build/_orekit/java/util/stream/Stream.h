#ifndef java_util_stream_Stream_H
#define java_util_stream_Stream_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Comparator;
    namespace stream {
      class DoubleStream;
      class Stream;
    }
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
          mid_concat_9e0a3c4944e5dc50,
          mid_count_9e26256fb0d384a2,
          mid_distinct_d7cce92225eb0db2,
          mid_empty_d7cce92225eb0db2,
          mid_findAny_d0ccac9b4c6bdd55,
          mid_findFirst_d0ccac9b4c6bdd55,
          mid_generate_3245191b6f3ae2e0,
          mid_limit_2d0d8836c8e6d751,
          mid_max_17d9ff3676ac1fa2,
          mid_min_17d9ff3676ac1fa2,
          mid_of_13c199dd7611bbb8,
          mid_of_f5d6c2fe1294fb2d,
          mid_ofNullable_f5d6c2fe1294fb2d,
          mid_skip_2d0d8836c8e6d751,
          mid_sorted_d7cce92225eb0db2,
          mid_sorted_f8130c0783e3fa7c,
          mid_toArray_6555a5198c71b73a,
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
