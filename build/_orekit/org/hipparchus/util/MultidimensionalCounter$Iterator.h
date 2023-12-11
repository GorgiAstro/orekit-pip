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
          mid_getCount_412668abc8d889e9,
          mid_getCount_0092017e99012694,
          mid_getCounts_1b41cf9ebf653611,
          mid_hasNext_89b302893bdbe1f1,
          mid_next_c8619d445fbf1e9f,
          mid_remove_0640e6acf969ed28,
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
