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
        mid_init$_0fa09c18fee449d5,
        mid_init$_098c7cc63aadde07,
        mid_accept_17db3a65980d3441,
        mid_combine_fbdc5ba466050c3e,
        mid_getAverage_dff5885c2c873297,
        mid_getCount_492808a339bfa35f,
        mid_getMax_dff5885c2c873297,
        mid_getMin_dff5885c2c873297,
        mid_getSum_dff5885c2c873297,
        mid_toString_11b109bd155ca898,
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
