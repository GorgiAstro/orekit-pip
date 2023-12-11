#ifndef org_hipparchus_random_Well44497a_H
#define org_hipparchus_random_Well44497a_H

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

      class Well44497a : public ::org::hipparchus::random::AbstractWell {
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

        explicit Well44497a(jobject obj) : ::org::hipparchus::random::AbstractWell(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        Well44497a(const Well44497a& obj) : ::org::hipparchus::random::AbstractWell(obj) {}

        Well44497a();
        Well44497a(const JArray< jint > &);
        Well44497a(jint);
        Well44497a(jlong);

        jint nextInt() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace random {
      extern PyType_Def PY_TYPE_DEF(Well44497a);
      extern PyTypeObject *PY_TYPE(Well44497a);

      class t_Well44497a {
      public:
        PyObject_HEAD
        Well44497a object;
        static PyObject *wrap_Object(const Well44497a&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
