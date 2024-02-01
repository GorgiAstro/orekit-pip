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
          mid_init$_d43202153dd284f7,
          mid_getCount_4c6a473f00540fd2,
          mid_getCounts_adb0f0485f08dbd0,
          mid_getDimension_d6ab429752e7c267,
          mid_getSize_d6ab429752e7c267,
          mid_getSizes_d6f20bd740dd34cd,
          mid_iterator_583b7bb7d2617813,
          mid_toString_d2c8eb4129821f0e,
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
