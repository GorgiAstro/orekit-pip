#ifndef java_util_DoubleSummaryStatistics_H
#define java_util_DoubleSummaryStatistics_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class DoubleSummaryStatistics;
    namespace function {
      class DoubleConsumer;
    }
  }
  namespace lang {
    class Class;
    class IllegalArgumentException;
    class String;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class DoubleSummaryStatistics : public ::java::lang::Object {
     public:
      enum {
        mid_init$_ff7cb6c242604316,
        mid_init$_257192635519977a,
        mid_accept_1ad26e8c8c0cd65b,
        mid_combine_f6ad304dbf6fe8b1,
        mid_getAverage_9981f74b2d109da6,
        mid_getCount_42c72b98e3c2e08a,
        mid_getMax_9981f74b2d109da6,
        mid_getMin_9981f74b2d109da6,
        mid_getSum_9981f74b2d109da6,
        mid_toString_d2c8eb4129821f0e,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit DoubleSummaryStatistics(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      DoubleSummaryStatistics(const DoubleSummaryStatistics& obj) : ::java::lang::Object(obj) {}

      DoubleSummaryStatistics();
      DoubleSummaryStatistics(jlong, jdouble, jdouble, jdouble);

      void accept(jdouble) const;
      void combine(const DoubleSummaryStatistics &) const;
      jdouble getAverage() const;
      jlong getCount() const;
      jdouble getMax() const;
      jdouble getMin() const;
      jdouble getSum() const;
      ::java::lang::String toString() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(DoubleSummaryStatistics);
    extern PyTypeObject *PY_TYPE(DoubleSummaryStatistics);

    class t_DoubleSummaryStatistics {
    public:
      PyObject_HEAD
      DoubleSummaryStatistics object;
      static PyObject *wrap_Object(const DoubleSummaryStatistics&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
