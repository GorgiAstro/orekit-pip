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
          mid_init$_ff7cb6c242604316,
          mid_finalize_ff7cb6c242604316,
          mid_pythonDecRef_ff7cb6c242604316,
          mid_pythonExtension_42c72b98e3c2e08a,
          mid_pythonExtension_f5bbab7e97879358,
          mid_value_9f1f355491808400,
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
