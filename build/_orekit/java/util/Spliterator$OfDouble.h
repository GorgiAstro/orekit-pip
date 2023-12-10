#ifndef java_util_Spliterator$OfDouble_H
#define java_util_Spliterator$OfDouble_H

#include "java/util/Spliterator$OfPrimitive.h"

namespace java {
  namespace lang {
    class Double;
    class Class;
  }
  namespace util {
    class Spliterator$OfDouble;
    namespace function {
      class DoubleConsumer;
    }
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class Spliterator$OfDouble : public ::java::util::Spliterator$OfPrimitive {
     public:
      enum {
        mid_forEachRemaining_46bb77b3436e630a,
        mid_tryAdvance_c19e063446a5bed5,
        mid_trySplit_ef028836b616dec4,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Spliterator$OfDouble(jobject obj) : ::java::util::Spliterator$OfPrimitive(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Spliterator$OfDouble(const Spliterator$OfDouble& obj) : ::java::util::Spliterator$OfPrimitive(obj) {}

      void forEachRemaining(const ::java::util::function::DoubleConsumer &) const;
      jboolean tryAdvance(const ::java::util::function::DoubleConsumer &) const;
      Spliterator$OfDouble trySplit() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(Spliterator$OfDouble);
    extern PyTypeObject *PY_TYPE(Spliterator$OfDouble);

    class t_Spliterator$OfDouble {
    public:
      PyObject_HEAD
      Spliterator$OfDouble object;
      PyTypeObject *parameters[1];
      static PyTypeObject **parameters_(t_Spliterator$OfDouble *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const Spliterator$OfDouble&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const Spliterator$OfDouble&, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
