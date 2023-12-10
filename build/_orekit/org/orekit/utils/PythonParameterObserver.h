#ifndef org_orekit_utils_PythonParameterObserver_H
#define org_orekit_utils_PythonParameterObserver_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Throwable;
    class Double;
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace utils {
      class TimeSpanMap;
      class ParameterObserver;
      class ParameterDriver;
    }
    namespace time {
      class AbsoluteDate;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace utils {

      class PythonParameterObserver : public ::java::lang::Object {
       public:
        enum {
          mid_init$_0fa09c18fee449d5,
          mid_finalize_0fa09c18fee449d5,
          mid_pythonDecRef_0fa09c18fee449d5,
          mid_pythonExtension_492808a339bfa35f,
          mid_pythonExtension_3a8e7649f31fdb20,
          mid_valueChanged_add632ecd3f14e19,
          mid_valueSpanMapChanged_8e4add4a2fbb55d9,
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
