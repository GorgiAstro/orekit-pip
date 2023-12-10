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
    namespace util {
      class MultidimensionalCounter$Iterator;
    }
    namespace exception {
      class MathIllegalArgumentException;
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
          mid_init$_3b603738d1eb3233,
          mid_getCount_5c5c9df37b0af581,
          mid_getCounts_d7f52bcc4a12ae58,
          mid_getDimension_f2f64475e4580546,
          mid_getSize_f2f64475e4580546,
          mid_getSizes_d8ead0d90ce828b0,
          mid_iterator_2fe36aa334da25e7,
          mid_toString_0090f7797e403f43,
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
