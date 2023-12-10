#ifndef org_hipparchus_util_Pair_H
#define org_hipparchus_util_Pair_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace util {
      class Pair;
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace util {

      class Pair : public ::java::lang::Object {
       public:
        enum {
          mid_init$_0d8a2282c8979673,
          mid_create_0c1f52eb3dc20797,
          mid_equals_229c87223f486349,
          mid_getFirst_dfd7647d9110ac9f,
          mid_getKey_dfd7647d9110ac9f,
          mid_getSecond_dfd7647d9110ac9f,
          mid_getValue_dfd7647d9110ac9f,
          mid_hashCode_f2f64475e4580546,
          mid_toString_0090f7797e403f43,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit Pair(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        Pair(const Pair& obj) : ::java::lang::Object(obj) {}

        Pair(const ::java::lang::Object &, const ::java::lang::Object &);

        static Pair create(const ::java::lang::Object &, const ::java::lang::Object &);
        jboolean equals(const ::java::lang::Object &) const;
        ::java::lang::Object getFirst() const;
        ::java::lang::Object getKey() const;
        ::java::lang::Object getSecond() const;
        ::java::lang::Object getValue() const;
        jint hashCode() const;
        ::java::lang::String toString() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace util {
      extern PyType_Def PY_TYPE_DEF(Pair);
      extern PyTypeObject *PY_TYPE(Pair);

      class t_Pair {
      public:
        PyObject_HEAD
        Pair object;
        PyTypeObject *parameters[2];
        static PyTypeObject **parameters_(t_Pair *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const Pair&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const Pair&, PyTypeObject *, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
