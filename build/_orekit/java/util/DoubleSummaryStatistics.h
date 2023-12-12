#ifndef java_util_DoubleSummaryStatistics_H
#define java_util_DoubleSummaryStatistics_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    namespace function {
      class DoubleConsumer;
    }
    class DoubleSummaryStatistics;
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
        mid_init$_0640e6acf969ed28,
        mid_init$_c5227966293c74be,
        mid_accept_10f281d777284cea,
        mid_combine_c9a194a4ddbf0293,
        mid_getAverage_557b8123390d8d0c,
        mid_getCount_9e26256fb0d384a2,
        mid_getMax_557b8123390d8d0c,
        mid_getMin_557b8123390d8d0c,
        mid_getSum_557b8123390d8d0c,
        mid_toString_3cffd47377eca18a,
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
