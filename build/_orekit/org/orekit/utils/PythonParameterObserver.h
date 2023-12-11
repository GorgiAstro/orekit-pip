#ifndef org_orekit_utils_PythonParameterObserver_H
#define org_orekit_utils_PythonParameterObserver_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace utils {
      class TimeSpanMap;
      class ParameterDriver;
      class ParameterObserver;
    }
    namespace time {
      class AbsoluteDate;
    }
  }
}
namespace java {
  namespace lang {
    class Throwable;
    class Double;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace utils {

      class PythonParameterObserver : public ::java::lang::Object {
       public:
        enum {
          mid_init$_0640e6acf969ed28,
          mid_finalize_0640e6acf969ed28,
          mid_pythonDecRef_0640e6acf969ed28,
          mid_pythonExtension_9e26256fb0d384a2,
          mid_pythonExtension_3cd6a6b354c6aa22,
          mid_valueChanged_9eb625c4c5bd9f60,
          mid_valueSpanMapChanged_db2a83a9d010ab79,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit PythonParameterObserver(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        PythonParameterObserver(const PythonParameterObserver& obj) : ::java::lang::Object(obj) {}

        PythonParameterObserver();

        void finalize() const;
        void pythonDecRef() const;
        jlong pythonExtension() const;
        void pythonExtension(jlong) const;
        void valueChanged(jdouble, const ::org::orekit::utils::ParameterDriver &, const ::org::orekit::time::AbsoluteDate &) const;
        void valueSpanMapChanged(const ::org::orekit::utils::TimeSpanMap &, const ::org::orekit::utils::ParameterDriver &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace utils {
      extern PyType_Def PY_TYPE_DEF(PythonParameterObserver);
      extern PyTypeObject *PY_TYPE(PythonParameterObserver);

      class t_PythonParameterObserver {
      public:
        PyObject_HEAD
        PythonParameterObserver object;
        static PyObject *wrap_Object(const PythonParameterObserver&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
