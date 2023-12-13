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
        mid_init$_a1fa5dae97ea5ed2,
        mid_init$_355b25c254536058,
        mid_accept_8ba9fe7a847cecad,
        mid_combine_1880d89d9943057f,
        mid_getAverage_b74f83833fdad017,
        mid_getCount_6c0ce7e438e5ded4,
        mid_getMax_b74f83833fdad017,
        mid_getMin_b74f83833fdad017,
        mid_getSum_b74f83833fdad017,
        mid_toString_1c1fa1e935d6cdcf,
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
