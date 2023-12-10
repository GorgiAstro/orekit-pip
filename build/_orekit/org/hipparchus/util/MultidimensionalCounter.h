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
          mid_init$_d147d7ce001e2d45,
          mid_getCount_5741cb0fe93805c9,
          mid_getCounts_10b428b076a044c1,
          mid_getDimension_570ce0828f81a2c1,
          mid_getSize_570ce0828f81a2c1,
          mid_getSizes_d0635cea09dc178c,
          mid_iterator_4e94d3b41fa0685f,
          mid_toString_11b109bd155ca898,
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
