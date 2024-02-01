#ifndef org_hipparchus_random_Well19937a_H
#define org_hipparchus_random_Well19937a_H

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

      class Well19937a : public ::org::hipparchus::random::AbstractWell {
       public:
        enum {
          mid_init$_ff7cb6c242604316,
          mid_init$_d43202153dd284f7,
          mid_init$_8fd427ab23829bf5,
          mid_init$_f5bbab7e97879358,
          mid_nextInt_d6ab429752e7c267,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit Well19937a(jobject obj) : ::org::hipparchus::random::AbstractWell(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        Well19937a(const Well19937a& obj) : ::org::hipparchus::random::AbstractWell(obj) {}

        Well19937a();
        Well19937a(const JArray< jint > &);
        Well19937a(jint);
        Well19937a(jlong);

        jint nextInt() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace random {
      extern PyType_Def PY_TYPE_DEF(Well19937a);
      extern PyTypeObject *PY_TYPE(Well19937a);

      class t_Well19937a {
      public:
        PyObject_HEAD
        Well19937a object;
        static PyObject *wrap_Object(const Well19937a&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
