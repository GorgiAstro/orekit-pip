#ifndef org_hipparchus_util_OpenIntToDoubleHashMap$Iterator_H
#define org_hipparchus_util_OpenIntToDoubleHashMap$Iterator_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class NoSuchElementException;
    class ConcurrentModificationException;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace util {

      class OpenIntToDoubleHashMap$Iterator : public ::java::lang::Object {
       public:
        enum {
          mid_advance_0fa09c18fee449d5,
          mid_hasNext_b108b35ef48e27bd,
          mid_key_570ce0828f81a2c1,
          mid_value_dff5885c2c873297,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit OpenIntToDoubleHashMap$Iterator(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        OpenIntToDoubleHashMap$Iterator(const OpenIntToDoubleHashMap$Iterator& obj) : ::java::lang::Object(obj) {}

        void advance() const;
        jboolean hasNext() const;
        jint key() const;
        jdouble value() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace util {
      extern PyType_Def PY_TYPE_DEF(OpenIntToDoubleHashMap$Iterator);
      extern PyTypeObject *PY_TYPE(OpenIntToDoubleHashMap$Iterator);

      class t_OpenIntToDoubleHashMap$Iterator {
      public:
        PyObject_HEAD
        OpenIntToDoubleHashMap$Iterator object;
        static PyObject *wrap_Object(const OpenIntToDoubleHashMap$Iterator&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
