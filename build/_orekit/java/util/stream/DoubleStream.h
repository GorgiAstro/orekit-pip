#ifndef java_util_stream_DoubleStream_H
#define java_util_stream_DoubleStream_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    namespace stream {
      class Stream;
      class DoubleStream;
    }
    class Spliterator$OfDouble;
    namespace function {
      class Supplier;
      class DoubleConsumer;
    }
    class DoubleSummaryStatistics;
    class OptionalDouble;
    class PrimitiveIterator$OfDouble;
  }
  namespace lang {
    class Double;
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {
    namespace stream {

      class DoubleStream : public ::java::lang::Object {
       public:
        enum {
          mid_average_04dba3560d5bf527,
          mid_boxed_11e4ca8182c1933d,
          mid_concat_0167487baf7210c4,
          mid_count_42c72b98e3c2e08a,
          mid_distinct_98f7f3ef9d3d1b57,
          mid_empty_98f7f3ef9d3d1b57,
          mid_findAny_04dba3560d5bf527,
          mid_findFirst_04dba3560d5bf527,
          mid_forEach_a4d506ef5f26a2aa,
          mid_forEachOrdered_a4d506ef5f26a2aa,
          mid_iterator_a28dcb58dfaadd89,
          mid_limit_0b951659a4ffdc52,
          mid_max_04dba3560d5bf527,
          mid_min_04dba3560d5bf527,
          mid_of_6c41db567343fc7b,
          mid_of_848ddad4f9b27f1e,
          mid_parallel_98f7f3ef9d3d1b57,
          mid_peek_35f6a3acef2e38ef,
          mid_sequential_98f7f3ef9d3d1b57,
          mid_skip_0b951659a4ffdc52,
          mid_sorted_98f7f3ef9d3d1b57,
          mid_spliterator_2d06752ec2b10dcc,
          mid_sum_9981f74b2d109da6,
          mid_summaryStatistics_199cb26abe5fb0e1,
          mid_toArray_be783177b060994b,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit DoubleStream(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        DoubleStream(const DoubleStream& obj) : ::java::lang::Object(obj) {}

        ::java::util::OptionalDouble average() const;
        ::java::util::stream::Stream boxed() const;
        static DoubleStream concat(const DoubleStream &, const DoubleStream &);
        jlong count() const;
        DoubleStream distinct() const;
        static DoubleStream empty();
        ::java::util::OptionalDouble findAny() const;
        ::java::util::OptionalDouble findFirst() const;
        void forEach(const ::java::util::function::DoubleConsumer &) const;
        void forEachOrdered(const ::java::util::function::DoubleConsumer &) const;
        ::java::util::PrimitiveIterator$OfDouble iterator() const;
        DoubleStream limit(jlong) const;
        ::java::util::OptionalDouble max$() const;
        ::java::util::OptionalDouble min$() const;
        static DoubleStream of(const JArray< jdouble > &);
        static DoubleStream of(jdouble);
        DoubleStream parallel() const;
        DoubleStream peek(const ::java::util::function::DoubleConsumer &) const;
        DoubleStream sequential() const;
        DoubleStream skip(jlong) const;
        DoubleStream sorted() const;
        ::java::util::Spliterator$OfDouble spliterator() const;
        jdouble sum() const;
        ::java::util::DoubleSummaryStatistics summaryStatistics() const;
        JArray< jdouble > toArray() const;
      };
    }
  }
}

#include <Python.h>

namespace java {
  namespace util {
    namespace stream {
      extern PyType_Def PY_TYPE_DEF(DoubleStream);
      extern PyTypeObject *PY_TYPE(DoubleStream);

      class t_DoubleStream {
      public:
        PyObject_HEAD
        DoubleStream object;
        static PyObject *wrap_Object(const DoubleStream&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
