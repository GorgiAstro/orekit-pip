#ifndef java_util_stream_DoubleStream_H
#define java_util_stream_DoubleStream_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Spliterator$OfDouble;
    namespace function {
      class Supplier;
      class DoubleConsumer;
    }
    class OptionalDouble;
    class DoubleSummaryStatistics;
    class PrimitiveIterator$OfDouble;
    namespace stream {
      class Stream;
      class DoubleStream;
    }
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
          mid_average_a58140050545434b,
          mid_boxed_14e21bf777ff0ccf,
          mid_concat_bd58ff8c56bbc3be,
          mid_count_6c0ce7e438e5ded4,
          mid_distinct_48a8801871033f9c,
          mid_empty_48a8801871033f9c,
          mid_findAny_a58140050545434b,
          mid_findFirst_a58140050545434b,
          mid_forEach_85691ac11e338ac3,
          mid_forEachOrdered_85691ac11e338ac3,
          mid_iterator_a3a18fbc64c0382f,
          mid_limit_99f9dfe38cac6ad9,
          mid_max_a58140050545434b,
          mid_min_a58140050545434b,
          mid_of_969b847f93a58e14,
          mid_of_2d5ffbd866d95bb1,
          mid_parallel_48a8801871033f9c,
          mid_peek_b9194c52ae4a498c,
          mid_sequential_48a8801871033f9c,
          mid_skip_99f9dfe38cac6ad9,
          mid_sorted_48a8801871033f9c,
          mid_spliterator_6bd048c33c1b01f9,
          mid_sum_b74f83833fdad017,
          mid_summaryStatistics_2007d1a2094827e7,
          mid_toArray_25e1757a36c4dde2,
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
