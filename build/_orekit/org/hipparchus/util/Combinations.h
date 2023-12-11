#ifndef org_hipparchus_util_Combinations_H
#define org_hipparchus_util_Combinations_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Iterator;
    class Comparator;
  }
  namespace lang {
    class Iterable;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace util {

      class Combinations : public ::java::lang::Object {
       public:
        enum {
          mid_init$_a84c9a223722150c,
          mid_comparator_b0b551d4a54c7150,
          mid_getK_412668abc8d889e9,
          mid_getN_412668abc8d889e9,
          mid_iterator_834a3801c426326d,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit Combinations(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        Combinations(const Combinations& obj) : ::java::lang::Object(obj) {}

        Combinations(jint, jint);

        ::java::util::Comparator comparator() const;
        jint getK() const;
        jint getN() const;
        ::java::util::Iterator iterator() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace util {
      extern PyType_Def PY_TYPE_DEF(Combinations);
      extern PyTypeObject *PY_TYPE(Combinations);

      class t_Combinations {
      public:
        PyObject_HEAD
        Combinations object;
        static PyObject *wrap_Object(const Combinations&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
