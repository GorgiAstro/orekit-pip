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
      class DoubleStream;
      class Stream;
    }
    class DoubleSummaryStatistics;
    class PrimitiveIterator$OfDouble;
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
          mid_average_e3186f0c7a9ab30b,
          mid_boxed_d7cce92225eb0db2,
          mid_concat_e6e892ee2b5e7c18,
          mid_count_9e26256fb0d384a2,
          mid_distinct_78c9b5d7fa0dbac0,
          mid_empty_78c9b5d7fa0dbac0,
          mid_findAny_e3186f0c7a9ab30b,
          mid_findFirst_e3186f0c7a9ab30b,
          mid_forEach_fda350dd3513069c,
          mid_forEachOrdered_fda350dd3513069c,
          mid_iterator_ced90e8e748c0698,
          mid_limit_4761ea9169c0223a,
          mid_max_e3186f0c7a9ab30b,
          mid_min_e3186f0c7a9ab30b,
          mid_of_72362f5b4201ba22,
          mid_of_604854eda377da85,
          mid_parallel_78c9b5d7fa0dbac0,
          mid_peek_4e7702e12b9baa81,
          mid_sequential_78c9b5d7fa0dbac0,
          mid_skip_4761ea9169c0223a,
          mid_sorted_78c9b5d7fa0dbac0,
          mid_spliterator_67e70219587d017f,
          mid_sum_557b8123390d8d0c,
          mid_summaryStatistics_3557148e3cd839f9,
          mid_toArray_a53a7513ecedada2,
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
