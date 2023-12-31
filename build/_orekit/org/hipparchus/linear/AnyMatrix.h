#ifndef org_hipparchus_linear_AnyMatrix_H
#define org_hipparchus_linear_AnyMatrix_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace linear {

      class AnyMatrix : public ::java::lang::Object {
       public:
        enum {
          mid_getColumnDimension_55546ef6a647f39b,
          mid_getRowDimension_55546ef6a647f39b,
          mid_isSquare_9ab94ac1dc23b105,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit AnyMatrix(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        AnyMatrix(const AnyMatrix& obj) : ::java::lang::Object(obj) {}

        jint getColumnDimension() const;
        jint getRowDimension() const;
        jboolean isSquare() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace linear {
      extern PyType_Def PY_TYPE_DEF(AnyMatrix);
      extern PyTypeObject *PY_TYPE(AnyMatrix);

      class t_AnyMatrix {
      public:
        PyObject_HEAD
        AnyMatrix object;
        static PyObject *wrap_Object(const AnyMatrix&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
