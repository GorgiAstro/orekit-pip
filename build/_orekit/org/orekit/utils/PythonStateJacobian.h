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
    class Throwable;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace utils {

      class PythonStateJacobian : public ::java::lang::Object {
       public:
        enum {
          mid_init$_7ae3461a92a43152,
          mid_finalize_7ae3461a92a43152,
          mid_pythonDecRef_7ae3461a92a43152,
          mid_pythonExtension_a27fc9afd27e559d,
          mid_pythonExtension_fefb08975c10f0a1,
          mid_value_2f2af053a5858dd9,
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
