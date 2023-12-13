#ifndef org_hipparchus_random_Well44497b_H
#define org_hipparchus_random_Well44497b_H

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

      class Well44497b : public ::org::hipparchus::random::AbstractWell {
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

        explicit Well44497b(jobject obj) : ::org::hipparchus::random::AbstractWell(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        Well44497b(const Well44497b& obj) : ::org::hipparchus::random::AbstractWell(obj) {}

        Well44497b();
        Well44497b(const JArray< jint > &);
        Well44497b(jint);
        Well44497b(jlong);

        jint nextInt() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace random {
      extern PyType_Def PY_TYPE_DEF(Well44497b);
      extern PyTypeObject *PY_TYPE(Well44497b);

      class t_Well44497b {
      public:
        PyObject_HEAD
        Well44497b object;
        static PyObject *wrap_Object(const Well44497b&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
