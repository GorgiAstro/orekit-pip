#ifndef org_orekit_utils_PythonStateFunction_H
#define org_orekit_utils_PythonStateFunction_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace utils {
      class StateFunction;
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

      class PythonStateFunction : public ::java::lang::Object {
       public:
        enum {
          mid_init$_ff7cb6c242604316,
          mid_finalize_ff7cb6c242604316,
          mid_pythonDecRef_ff7cb6c242604316,
          mid_pythonExtension_42c72b98e3c2e08a,
          mid_pythonExtension_f5bbab7e97879358,
          mid_value_e8a4ac02afc72623,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit PythonStateFunction(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        PythonStateFunction(const PythonStateFunction& obj) : ::java::lang::Object(obj) {}

        PythonStateFunction();

        void finalize() const;
        void pythonDecRef() const;
        jlong pythonExtension() const;
        void pythonExtension(jlong) const;
        JArray< jdouble > value(const ::org::orekit::propagation::SpacecraftState &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace utils {
      extern PyType_Def PY_TYPE_DEF(PythonStateFunction);
      extern PyTypeObject *PY_TYPE(PythonStateFunction);

      class t_PythonStateFunction {
      public:
        PyObject_HEAD
        PythonStateFunction object;
        static PyObject *wrap_Object(const PythonStateFunction&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
