#ifndef java_util_Spliterator_H
#define java_util_Spliterator_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Spliterator;
    class Comparator;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class Spliterator : public ::java::lang::Object {
     public:
      enum {
        mid_characteristics_570ce0828f81a2c1,
        mid_estimateSize_492808a339bfa35f,
        mid_getComparator_96e45e3694fbbb22,
        mid_getExactSizeIfKnown_492808a339bfa35f,
        mid_hasCharacteristics_b6e9be1df30aebaf,
        mid_trySplit_ef1070394b413a84,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Spliterator(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Spliterator(const Spliterator& obj) : ::java::lang::Object(obj) {}

      static jint CONCURRENT;
      static jint DISTINCT;
      static jint IMMUTABLE;
      static jint NONNULL;
      static jint ORDERED;
      static jint SIZED;
      static jint SORTED;
      static jint SUBSIZED;

      jint characteristics() const;
      jlong estimateSize() const;
      ::java::util::Comparator getComparator() const;
      jlong getExactSizeIfKnown() const;
      jboolean hasCharacteristics(jint) const;
      Spliterator trySplit() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(Spliterator);
    extern PyTypeObject *PY_TYPE(Spliterator);

    class t_Spliterator {
    public:
      PyObject_HEAD
      Spliterator object;
      PyTypeObject *parameters[1];
      static PyTypeObject **parameters_(t_Spliterator *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const Spliterator&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const Spliterator&, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
