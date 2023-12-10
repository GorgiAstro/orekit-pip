#ifndef org_hipparchus_special_Beta_H
#define org_hipparchus_special_Beta_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace special {

      class Beta : public ::java::lang::Object {
       public:
        enum {
          mid_logBeta_86ffecc08a63eff0,
          mid_regularizedBeta_8c19bdea212fe058,
          mid_regularizedBeta_0f015b8be9d2dc40,
          mid_regularizedBeta_1a4183e52d14c27e,
          mid_regularizedBeta_d27207dbe188406b,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit Beta(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        Beta(const Beta& obj) : ::java::lang::Object(obj) {}

        static jdouble logBeta(jdouble, jdouble);
        static jdouble regularizedBeta(jdouble, jdouble, jdouble);
        static jdouble regularizedBeta(jdouble, jdouble, jdouble, jdouble);
        static jdouble regularizedBeta(jdouble, jdouble, jdouble, jint);
        static jdouble regularizedBeta(jdouble, jdouble, jdouble, jdouble, jint);
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace special {
      extern PyType_Def PY_TYPE_DEF(Beta);
      extern PyTypeObject *PY_TYPE(Beta);

      class t_Beta {
      public:
        PyObject_HEAD
        Beta object;
        static PyObject *wrap_Object(const Beta&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
