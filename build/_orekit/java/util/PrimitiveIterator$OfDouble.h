#ifndef java_util_PrimitiveIterator$OfDouble_H
#define java_util_PrimitiveIterator$OfDouble_H

#include "java/util/PrimitiveIterator.h"

namespace java {
  namespace lang {
    class Double;
    class Class;
  }
  namespace util {
    namespace function {
      class DoubleConsumer;
    }
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class PrimitiveIterator$OfDouble : public ::java::util::PrimitiveIterator {
     public:
      enum {
        mid_forEachRemaining_85691ac11e338ac3,
        mid_next_3e9d5c8261f8e4a2,
        mid_nextDouble_b74f83833fdad017,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit PrimitiveIterator$OfDouble(jobject obj) : ::java::util::PrimitiveIterator(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      PrimitiveIterator$OfDouble(const PrimitiveIterator$OfDouble& obj) : ::java::util::PrimitiveIterator(obj) {}

      void forEachRemaining(const ::java::util::function::DoubleConsumer &) const;
      ::java::lang::Double next() const;
      jdouble nextDouble() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(PrimitiveIterator$OfDouble);
    extern PyTypeObject *PY_TYPE(PrimitiveIterator$OfDouble);

    class t_PrimitiveIterator$OfDouble {
    public:
      PyObject_HEAD
      PrimitiveIterator$OfDouble object;
      PyTypeObject *parameters[2];
      static PyTypeObject **parameters_(t_PrimitiveIterator$OfDouble *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const PrimitiveIterator$OfDouble&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const PrimitiveIterator$OfDouble&, PyTypeObject *, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
