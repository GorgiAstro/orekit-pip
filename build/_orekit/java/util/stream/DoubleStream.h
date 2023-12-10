#ifndef java_util_stream_DoubleStream_H
#define java_util_stream_DoubleStream_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    namespace function {
      class Supplier;
      class DoubleConsumer;
    }
    class Spliterator$OfDouble;
    namespace stream {
      class Stream;
      class DoubleStream;
    }
    class OptionalDouble;
    class PrimitiveIterator$OfDouble;
    class DoubleSummaryStatistics;
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
          mid_average_1edd71440bc9c025,
          mid_boxed_20f6d2b462aaef4b,
          mid_concat_db68c624e3e364f3,
          mid_count_492808a339bfa35f,
          mid_distinct_0636ae0567d24d63,
          mid_empty_0636ae0567d24d63,
          mid_findAny_1edd71440bc9c025,
          mid_findFirst_1edd71440bc9c025,
          mid_forEach_6444b3e27af46e9d,
          mid_forEachOrdered_6444b3e27af46e9d,
          mid_iterator_5da49689b5c7efa5,
          mid_limit_b87abe13a25ee77e,
          mid_max_1edd71440bc9c025,
          mid_min_1edd71440bc9c025,
          mid_of_9158f17504e0009c,
          mid_of_67dfbfacb9e9ae1f,
          mid_parallel_0636ae0567d24d63,
          mid_peek_c46a6a2ed14a2cb8,
          mid_sequential_0636ae0567d24d63,
          mid_skip_b87abe13a25ee77e,
          mid_sorted_0636ae0567d24d63,
          mid_spliterator_801fcadd4b3f4dbb,
          mid_sum_dff5885c2c873297,
          mid_summaryStatistics_587562b2d9e0ac9f,
          mid_toArray_60c7040667a7dc5c,
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
