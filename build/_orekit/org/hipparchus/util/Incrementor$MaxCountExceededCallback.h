#ifndef org_hipparchus_util_Incrementor$MaxCountExceededCallback_H
#define org_hipparchus_util_Incrementor$MaxCountExceededCallback_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalStateException;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace util {

      class Incrementor$MaxCountExceededCallback : public ::java::lang::Object {
       public:
        enum {
          mid_trigger_a3da1a935cb37f7b,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit Incrementor$MaxCountExceededCallback(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        Incrementor$MaxCountExceededCallback(const Incrementor$MaxCountExceededCallback& obj) : ::java::lang::Object(obj) {}

        void trigger(jint) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace util {
      extern PyType_Def PY_TYPE_DEF(Incrementor$MaxCountExceededCallback);
      extern PyTypeObject *PY_TYPE(Incrementor$MaxCountExceededCallback);

      class t_Incrementor$MaxCountExceededCallback {
      public:
        PyObject_HEAD
        Incrementor$MaxCountExceededCallback object;
        static PyObject *wrap_Object(const Incrementor$MaxCountExceededCallback&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
