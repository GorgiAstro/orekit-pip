#ifndef org_orekit_utils_PythonStateJacobian_H
#define org_orekit_utils_PythonStateJacobian_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace utils {
      class StateJacobian;
    }
    namespace propagation {
      class SpacecraftState;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class Throwable;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace utils {

      class PythonStateJacobian : public ::java::lang::Object {
       public:
        enum {
          mid_init$_0640e6acf969ed28,
          mid_finalize_0640e6acf969ed28,
          mid_pythonDecRef_0640e6acf969ed28,
          mid_pythonExtension_9e26256fb0d384a2,
          mid_pythonExtension_3cd6a6b354c6aa22,
          mid_value_223e694727d946d7,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit PythonStateJacobian(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        PythonStateJacobian(const PythonStateJacobian& obj) : ::java::lang::Object(obj) {}

        PythonStateJacobian();

        void finalize() const;
        void pythonDecRef() const;
        jlong pythonExtension() const;
        void pythonExtension(jlong) const;
        JArray< JArray< jdouble > > value(const ::org::orekit::propagation::SpacecraftState &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace utils {
      extern PyType_Def PY_TYPE_DEF(PythonStateJacobian);
      extern PyTypeObject *PY_TYPE(PythonStateJacobian);

      class t_PythonStateJacobian {
      public:
        PyObject_HEAD
        PythonStateJacobian object;
        static PyObject *wrap_Object(const PythonStateJacobian&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
