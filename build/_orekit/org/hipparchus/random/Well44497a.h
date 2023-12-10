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
