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
