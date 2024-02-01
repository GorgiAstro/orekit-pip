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
    namespace time {
      class AbsoluteDate;
    }
    namespace utils {
      class ParameterObserver;
      class TimeSpanMap;
      class ParameterDriver;
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
          mid_init$_ff7cb6c242604316,
          mid_finalize_ff7cb6c242604316,
          mid_pythonDecRef_ff7cb6c242604316,
          mid_pythonExtension_42c72b98e3c2e08a,
          mid_pythonExtension_f5bbab7e97879358,
          mid_valueChanged_561d325e967ec35c,
          mid_valueSpanMapChanged_d10bdde76d08bc2c,
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
