#ifndef org_hipparchus_random_Well512a_H
#define org_hipparchus_random_Well512a_H

#include "org/hipparchus/random/AbstractWell.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace random {

      class Well512a : public ::org::hipparchus::random::AbstractWell {
       public:
        enum {
          mid_init$_0640e6acf969ed28,
          mid_init$_ec63cb8a58ef5a54,
          mid_init$_a3da1a935cb37f7b,
          mid_init$_3cd6a6b354c6aa22,
          mid_nextInt_412668abc8d889e9,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit Well512a(jobject obj) : ::org::hipparchus::random::AbstractWell(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        Well512a(const Well512a& obj) : ::org::hipparchus::random::AbstractWell(obj) {}

        Well512a();
        Well512a(const JArray< jint > &);
        Well512a(jint);
        Well512a(jlong);

        jint nextInt() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace random {
      extern PyType_Def PY_TYPE_DEF(Well512a);
      extern PyTypeObject *PY_TYPE(Well512a);

      class t_Well512a {
      public:
        PyObject_HEAD
        Well512a object;
        static PyObject *wrap_Object(const Well512a&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
