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
          mid_init$_0fa09c18fee449d5,
          mid_init$_d147d7ce001e2d45,
          mid_init$_99803b0791f320ff,
          mid_init$_3a8e7649f31fdb20,
          mid_nextInt_570ce0828f81a2c1,
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
