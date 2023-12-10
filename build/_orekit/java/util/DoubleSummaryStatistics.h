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
        mid_init$_7ae3461a92a43152,
        mid_init$_e91f0c25c14e98ea,
        mid_accept_77e0f9a1f260e2e5,
        mid_combine_c0ba40af689196dd,
        mid_getAverage_456d9a2f64d6b28d,
        mid_getCount_a27fc9afd27e559d,
        mid_getMax_456d9a2f64d6b28d,
        mid_getMin_456d9a2f64d6b28d,
        mid_getSum_456d9a2f64d6b28d,
        mid_toString_0090f7797e403f43,
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
