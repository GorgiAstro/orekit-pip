#ifndef org_hipparchus_random_Well19937c_H
#define org_hipparchus_random_Well19937c_H

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

      class Well19937c : public ::org::hipparchus::random::AbstractWell {
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

        explicit Well19937c(jobject obj) : ::org::hipparchus::random::AbstractWell(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        Well19937c(const Well19937c& obj) : ::org::hipparchus::random::AbstractWell(obj) {}

        Well19937c();
        Well19937c(const JArray< jint > &);
        Well19937c(jint);
        Well19937c(jlong);

        jint nextInt() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace random {
      extern PyType_Def PY_TYPE_DEF(Well19937c);
      extern PyTypeObject *PY_TYPE(Well19937c);

      class t_Well19937c {
      public:
        PyObject_HEAD
        Well19937c object;
        static PyObject *wrap_Object(const Well19937c&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
