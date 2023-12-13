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
          mid_init$_a1fa5dae97ea5ed2,
          mid_init$_86a2769cb881d388,
          mid_init$_44ed599e93e8a30c,
          mid_init$_3d7dd2314a0dd456,
          mid_nextInt_55546ef6a647f39b,
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
