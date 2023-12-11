#ifndef org_hipparchus_util_RyuDouble_H
#define org_hipparchus_util_RyuDouble_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace util {

      class RyuDouble : public ::java::lang::Object {
       public:
        enum {
          mid_doubleToString_c03a7791f2fcb1f1,
          mid_doubleToString_cb74792e9bfe21f0,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit RyuDouble(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        RyuDouble(const RyuDouble& obj) : ::java::lang::Object(obj) {}

        static jint DEFAULT_HIGH_EXP;
        static jint DEFAULT_LOW_EXP;

        static ::java::lang::String doubleToString(jdouble);
        static ::java::lang::String doubleToString(jdouble, jint, jint);
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace util {
      extern PyType_Def PY_TYPE_DEF(RyuDouble);
      extern PyTypeObject *PY_TYPE(RyuDouble);

      class t_RyuDouble {
      public:
        PyObject_HEAD
        RyuDouble object;
        static PyObject *wrap_Object(const RyuDouble&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
