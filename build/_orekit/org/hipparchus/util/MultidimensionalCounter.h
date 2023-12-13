#ifndef org_hipparchus_util_MultidimensionalCounter_H
#define org_hipparchus_util_MultidimensionalCounter_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Iterable;
    class Integer;
    class Class;
    class String;
  }
}
namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
    }
    namespace util {
      class MultidimensionalCounter$Iterator;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace util {

      class MultidimensionalCounter : public ::java::lang::Object {
       public:
        enum {
          mid_init$_86a2769cb881d388,
          mid_getCount_d57a86117ebc55bd,
          mid_getCounts_7247c1a113e968de,
          mid_getDimension_55546ef6a647f39b,
          mid_getSize_55546ef6a647f39b,
          mid_getSizes_4d095d7a08163110,
          mid_iterator_3bb401bf17509ee9,
          mid_toString_1c1fa1e935d6cdcf,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit MultidimensionalCounter(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        MultidimensionalCounter(const MultidimensionalCounter& obj) : ::java::lang::Object(obj) {}

        MultidimensionalCounter(const JArray< jint > &);

        jint getCount(const JArray< jint > &) const;
        JArray< jint > getCounts(jint) const;
        jint getDimension() const;
        jint getSize() const;
        JArray< jint > getSizes() const;
        ::org::hipparchus::util::MultidimensionalCounter$Iterator iterator() const;
        ::java::lang::String toString() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace util {
      extern PyType_Def PY_TYPE_DEF(MultidimensionalCounter);
      extern PyTypeObject *PY_TYPE(MultidimensionalCounter);

      class t_MultidimensionalCounter {
      public:
        PyObject_HEAD
        MultidimensionalCounter object;
        static PyObject *wrap_Object(const MultidimensionalCounter&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
