#ifndef org_hipparchus_fraction_BigFraction$ConvergenceTest_H
#define org_hipparchus_fraction_BigFraction$ConvergenceTest_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace fraction {

      class BigFraction$ConvergenceTest : public ::java::lang::Object {
       public:
        enum {
          mid_test_1b137d4ac927d5c5,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit BigFraction$ConvergenceTest(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        BigFraction$ConvergenceTest(const BigFraction$ConvergenceTest& obj) : ::java::lang::Object(obj) {}

        jboolean test(jlong, jlong) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace fraction {
      extern PyType_Def PY_TYPE_DEF(BigFraction$ConvergenceTest);
      extern PyTypeObject *PY_TYPE(BigFraction$ConvergenceTest);

      class t_BigFraction$ConvergenceTest {
      public:
        PyObject_HEAD
        BigFraction$ConvergenceTest object;
        static PyObject *wrap_Object(const BigFraction$ConvergenceTest&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
