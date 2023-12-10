#ifndef java_util_stream_DoubleStream_H
#define java_util_stream_DoubleStream_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    namespace function {
      class Supplier;
      class DoubleConsumer;
    }
    namespace stream {
      class Stream;
      class DoubleStream;
    }
    class PrimitiveIterator$OfDouble;
    class DoubleSummaryStatistics;
    class Spliterator$OfDouble;
    class OptionalDouble;
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
          mid_average_146894f57b982226,
          mid_boxed_a68a17dd093f796d,
          mid_concat_a520ab7ce0bc91f7,
          mid_count_a27fc9afd27e559d,
          mid_distinct_2c8690a58875e3ae,
          mid_empty_2c8690a58875e3ae,
          mid_findAny_146894f57b982226,
          mid_findFirst_146894f57b982226,
          mid_forEach_46bb77b3436e630a,
          mid_forEachOrdered_46bb77b3436e630a,
          mid_iterator_8d42d23f355abfe4,
          mid_limit_19dd39eae6a70cf7,
          mid_max_146894f57b982226,
          mid_min_146894f57b982226,
          mid_of_d042e1ca31d645c7,
          mid_of_3ece1b72cdf6ad44,
          mid_parallel_2c8690a58875e3ae,
          mid_peek_85d27fb759ccefaf,
          mid_sequential_2c8690a58875e3ae,
          mid_skip_19dd39eae6a70cf7,
          mid_sorted_2c8690a58875e3ae,
          mid_spliterator_ef028836b616dec4,
          mid_sum_456d9a2f64d6b28d,
          mid_summaryStatistics_0edb1d479a8a0f8a,
          mid_toArray_7cdc325af0834901,
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
