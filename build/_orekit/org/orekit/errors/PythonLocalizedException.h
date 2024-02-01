#ifndef org_orekit_errors_PythonLocalizedException_H
#define org_orekit_errors_PythonLocalizedException_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Locale;
  }
  namespace lang {
    class Throwable;
    class Class;
    class String;
  }
}
namespace org {
  namespace hipparchus {
    namespace exception {
      class Localizable;
    }
  }
  namespace orekit {
    namespace errors {
      class LocalizedException;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace errors {

      class PythonLocalizedException : public ::java::lang::Object {
       public:
        enum {
          mid_init$_ff7cb6c242604316,
          mid_finalize_ff7cb6c242604316,
          mid_getMessage_5969ecf7afac3dba,
          mid_getParts_2ab86268ef7a6631,
          mid_getSpecifier_667bcd34994d9d31,
          mid_pythonDecRef_ff7cb6c242604316,
          mid_pythonExtension_42c72b98e3c2e08a,
          mid_pythonExtension_f5bbab7e97879358,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit PythonLocalizedException(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        PythonLocalizedException(const PythonLocalizedException& obj) : ::java::lang::Object(obj) {}

        PythonLocalizedException();

        void finalize() const;
        ::java::lang::String getMessage(const ::java::util::Locale &) const;
        JArray< ::java::lang::Object > getParts() const;
        ::org::hipparchus::exception::Localizable getSpecifier() const;
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
    namespace errors {
      extern PyType_Def PY_TYPE_DEF(PythonLocalizedException);
      extern PyTypeObject *PY_TYPE(PythonLocalizedException);

      class t_PythonLocalizedException {
      public:
        PyObject_HEAD
        PythonLocalizedException object;
        static PyObject *wrap_Object(const PythonLocalizedException&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
