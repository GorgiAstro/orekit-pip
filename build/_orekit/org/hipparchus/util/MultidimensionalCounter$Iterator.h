#ifndef org_hipparchus_util_MultidimensionalCounter$Iterator_H
#define org_hipparchus_util_MultidimensionalCounter$Iterator_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Iterator;
  }
  namespace lang {
    class Class;
    class Integer;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace util {

      class MultidimensionalCounter$Iterator : public ::java::lang::Object {
       public:
        enum {
          mid_getCount_570ce0828f81a2c1,
          mid_getCount_2235cd056f5a882b,
          mid_getCounts_d0635cea09dc178c,
          mid_hasNext_b108b35ef48e27bd,
          mid_next_3bcb553ed7fb0daa,
          mid_remove_0fa09c18fee449d5,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit MultidimensionalCounter$Iterator(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        MultidimensionalCounter$Iterator(const MultidimensionalCounter$Iterator& obj) : ::java::lang::Object(obj) {}

        jint getCount() const;
        jint getCount(jint) const;
        JArray< jint > getCounts() const;
        jboolean hasNext() const;
        ::java::lang::Integer next() const;
        void remove() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace util {
      extern PyType_Def PY_TYPE_DEF(MultidimensionalCounter$Iterator);
      extern PyTypeObject *PY_TYPE(MultidimensionalCounter$Iterator);

      class t_MultidimensionalCounter$Iterator {
      public:
        PyObject_HEAD
        MultidimensionalCounter$Iterator object;
        static PyObject *wrap_Object(const MultidimensionalCounter$Iterator&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
