#ifndef java_util_AbstractSet_H
#define java_util_AbstractSet_H

#include "java/util/AbstractCollection.h"

namespace java {
  namespace util {
    class Collection;
    class Set;
  }
  namespace lang {
    class Class;
    class Object;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class AbstractSet : public ::java::util::AbstractCollection {
     public:
      enum {
        mid_equals_72faff9b05f5ed5e,
        mid_hashCode_d6ab429752e7c267,
        mid_removeAll_61d64368c58b84f3,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit AbstractSet(jobject obj) : ::java::util::AbstractCollection(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      AbstractSet(const AbstractSet& obj) : ::java::util::AbstractCollection(obj) {}

      jboolean equals(const ::java::lang::Object &) const;
      jint hashCode() const;
      jboolean removeAll(const ::java::util::Collection &) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(AbstractSet);
    extern PyTypeObject *PY_TYPE(AbstractSet);

    class t_AbstractSet {
    public:
      PyObject_HEAD
      AbstractSet object;
      PyTypeObject *parameters[1];
      static PyTypeObject **parameters_(t_AbstractSet *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const AbstractSet&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const AbstractSet&, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
