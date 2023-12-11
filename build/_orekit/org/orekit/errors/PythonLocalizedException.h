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
  namespace orekit {
    namespace errors {
      class LocalizedException;
    }
  }
  namespace hipparchus {
    namespace exception {
      class Localizable;
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
          mid_init$_0640e6acf969ed28,
          mid_finalize_0640e6acf969ed28,
          mid_getMessage_4b51060c6b7ea981,
          mid_getParts_6555a5198c71b73a,
          mid_getSpecifier_a86d7419cf3241b7,
          mid_pythonDecRef_0640e6acf969ed28,
          mid_pythonExtension_9e26256fb0d384a2,
          mid_pythonExtension_3cd6a6b354c6aa22,
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
