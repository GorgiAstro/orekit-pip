#ifndef java_util_stream_Stream_H
#define java_util_stream_Stream_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Comparator;
    namespace function {
      class Supplier;
    }
    namespace stream {
      class Stream;
      class DoubleStream;
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
          mid_concat_998b04527a7f50f0,
          mid_count_a27fc9afd27e559d,
          mid_distinct_a68a17dd093f796d,
          mid_empty_a68a17dd093f796d,
          mid_findAny_c56b7edc0c3c7d86,
          mid_findFirst_c56b7edc0c3c7d86,
          mid_generate_1476e234e65a8ad9,
          mid_limit_efe008656a118eb2,
          mid_max_a9410836db4e0853,
          mid_min_a9410836db4e0853,
          mid_of_df43cc70bb37f421,
          mid_of_7c5de970421e460b,
          mid_ofNullable_7c5de970421e460b,
          mid_skip_efe008656a118eb2,
          mid_sorted_a68a17dd093f796d,
          mid_sorted_37058ce9aee2114a,
          mid_toArray_e81d7907eea7e008,
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
