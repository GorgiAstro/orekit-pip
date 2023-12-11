#ifndef org_orekit_utils_PythonParameterDriversProvider_H
#define org_orekit_utils_PythonParameterDriversProvider_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Throwable;
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace utils {
      class ParameterDriver;
      class ParameterDriversProvider;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace utils {

      class PythonParameterDriversProvider : public ::java::lang::Object {
       public:
        enum {
          mid_init$_0640e6acf969ed28,
          mid_finalize_0640e6acf969ed28,
          mid_getParametersDrivers_0d9551367f7ecdef,
          mid_pythonDecRef_0640e6acf969ed28,
          mid_pythonExtension_9e26256fb0d384a2,
          mid_pythonExtension_3cd6a6b354c6aa22,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit PythonParameterDriversProvider(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        PythonParameterDriversProvider(const PythonParameterDriversProvider& obj) : ::java::lang::Object(obj) {}

        PythonParameterDriversProvider();

        void finalize() const;
        ::java::util::List getParametersDrivers() const;
        void pythonDecRef() const;
        jlong pythonExtension() const;
        void pythonExtension(jlong) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace utils {
      extern PyType_Def PY_TYPE_DEF(PythonParameterDriversProvider);
      extern PyTypeObject *PY_TYPE(PythonParameterDriversProvider);

      class t_PythonParameterDriversProvider {
      public:
        PyObject_HEAD
        PythonParameterDriversProvider object;
        static PyObject *wrap_Object(const PythonParameterDriversProvider&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
