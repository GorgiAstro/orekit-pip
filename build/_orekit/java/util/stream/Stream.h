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
          mid_concat_0b92fe9e9f9acef1,
          mid_count_492808a339bfa35f,
          mid_distinct_20f6d2b462aaef4b,
          mid_empty_20f6d2b462aaef4b,
          mid_findAny_c5e311a9e5531e7d,
          mid_findFirst_c5e311a9e5531e7d,
          mid_generate_8be855f490d09fce,
          mid_limit_e15865d9d042e9f4,
          mid_max_d7a4493c96ea432e,
          mid_min_d7a4493c96ea432e,
          mid_of_fcdf5e804d048ff5,
          mid_of_5ec77a47066bac4a,
          mid_ofNullable_5ec77a47066bac4a,
          mid_skip_e15865d9d042e9f4,
          mid_sorted_20f6d2b462aaef4b,
          mid_sorted_f1a7c968203f8263,
          mid_toArray_b93c730013ce64c6,
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
