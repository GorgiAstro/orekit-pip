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
          mid_init$_6f37635c3285dbdf,
          mid_comparator_96e45e3694fbbb22,
          mid_getK_570ce0828f81a2c1,
          mid_getN_570ce0828f81a2c1,
          mid_iterator_4d23511a9f0db098,
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
