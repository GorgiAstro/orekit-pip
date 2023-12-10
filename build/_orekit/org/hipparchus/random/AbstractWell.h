#ifndef org_hipparchus_random_AbstractWell_H
#define org_hipparchus_random_AbstractWell_H

#include "org/hipparchus/random/IntRandomGenerator.h"

namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class Serializable;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace random {

      class AbstractWell : public ::org::hipparchus::random::IntRandomGenerator {
       public:
        enum {
          mid_setSeed_3b603738d1eb3233,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit AbstractWell(jobject obj) : ::org::hipparchus::random::IntRandomGenerator(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        AbstractWell(const AbstractWell& obj) : ::org::hipparchus::random::IntRandomGenerator(obj) {}

        void setSeed(const JArray< jint > &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace random {
      extern PyType_Def PY_TYPE_DEF(AbstractWell);
      extern PyTypeObject *PY_TYPE(AbstractWell);

      class t_AbstractWell {
      public:
        PyObject_HEAD
        AbstractWell object;
        static PyObject *wrap_Object(const AbstractWell&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
