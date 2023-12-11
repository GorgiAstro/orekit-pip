#ifndef org_hipparchus_fraction_Fraction$ConvergenceTest_H
#define org_hipparchus_fraction_Fraction$ConvergenceTest_H

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

      class Fraction$ConvergenceTest : public ::java::lang::Object {
       public:
        enum {
          mid_test_1e0f61f59fdd7111,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit Fraction$ConvergenceTest(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        Fraction$ConvergenceTest(const Fraction$ConvergenceTest& obj) : ::java::lang::Object(obj) {}

        jboolean test(jint, jint) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace fraction {
      extern PyType_Def PY_TYPE_DEF(Fraction$ConvergenceTest);
      extern PyTypeObject *PY_TYPE(Fraction$ConvergenceTest);

      class t_Fraction$ConvergenceTest {
      public:
        PyObject_HEAD
        Fraction$ConvergenceTest object;
        static PyObject *wrap_Object(const Fraction$ConvergenceTest&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
