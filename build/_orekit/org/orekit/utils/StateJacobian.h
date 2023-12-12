#ifndef org_orekit_utils_StateJacobian_H
#define org_orekit_utils_StateJacobian_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class SpacecraftState;
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
  namespace orekit {
    namespace utils {

      class StateJacobian : public ::java::lang::Object {
       public:
        enum {
          mid_value_223e694727d946d7,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit StateJacobian(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        StateJacobian(const StateJacobian& obj) : ::java::lang::Object(obj) {}

        JArray< JArray< jdouble > > value(const ::org::orekit::propagation::SpacecraftState &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace utils {
      extern PyType_Def PY_TYPE_DEF(StateJacobian);
      extern PyTypeObject *PY_TYPE(StateJacobian);

      class t_StateJacobian {
      public:
        PyObject_HEAD
        StateJacobian object;
        static PyObject *wrap_Object(const StateJacobian&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
