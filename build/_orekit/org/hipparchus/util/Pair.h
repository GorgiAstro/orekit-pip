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
          mid_init$_ea69641e3fe74dd6,
          mid_create_a5c1ad0a4a768dd2,
          mid_equals_65c7d273e80d497a,
          mid_getFirst_4d26fd885228c716,
          mid_getKey_4d26fd885228c716,
          mid_getSecond_4d26fd885228c716,
          mid_getValue_4d26fd885228c716,
          mid_hashCode_570ce0828f81a2c1,
          mid_toString_11b109bd155ca898,
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
