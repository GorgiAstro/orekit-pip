#ifndef org_orekit_utils_StateFunction_H
#define org_orekit_utils_StateFunction_H

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

      class StateFunction : public ::java::lang::Object {
       public:
        enum {
          mid_value_e8a4ac02afc72623,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit StateFunction(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        StateFunction(const StateFunction& obj) : ::java::lang::Object(obj) {}

        JArray< jdouble > value(const ::org::orekit::propagation::SpacecraftState &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace utils {
      extern PyType_Def PY_TYPE_DEF(StateFunction);
      extern PyTypeObject *PY_TYPE(StateFunction);

      class t_StateFunction {
      public:
        PyObject_HEAD
        StateFunction object;
        static PyObject *wrap_Object(const StateFunction&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
