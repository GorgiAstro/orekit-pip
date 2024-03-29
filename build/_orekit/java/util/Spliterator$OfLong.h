#ifndef java_util_Spliterator$OfLong_H
#define java_util_Spliterator$OfLong_H

#include "java/util/Spliterator$OfPrimitive.h"

namespace java {
  namespace lang {
    class Long;
    class Class;
  }
  namespace util {
    namespace function {
      class LongConsumer;
    }
    class Spliterator$OfLong;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class Spliterator$OfLong : public ::java::util::Spliterator$OfPrimitive {
     public:
      enum {
        mid_forEachRemaining_6eb6c26d2f8e123b,
        mid_tryAdvance_20c85a04ebc23896,
        mid_trySplit_a1ccd7694ec41555,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Spliterator$OfLong(jobject obj) : ::java::util::Spliterator$OfPrimitive(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Spliterator$OfLong(const Spliterator$OfLong& obj) : ::java::util::Spliterator$OfPrimitive(obj) {}

      void forEachRemaining(const ::java::util::function::LongConsumer &) const;
      jboolean tryAdvance(const ::java::util::function::LongConsumer &) const;
      Spliterator$OfLong trySplit() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(Spliterator$OfLong);
    extern PyTypeObject *PY_TYPE(Spliterator$OfLong);

    class t_Spliterator$OfLong {
    public:
      PyObject_HEAD
      Spliterator$OfLong object;
      PyTypeObject *parameters[1];
      static PyTypeObject **parameters_(t_Spliterator$OfLong *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const Spliterator$OfLong&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const Spliterator$OfLong&, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
