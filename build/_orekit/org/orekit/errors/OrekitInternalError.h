#ifndef org_orekit_errors_OrekitInternalError_H
#define org_orekit_errors_OrekitInternalError_H

#include "java/lang/IllegalStateException.h"

namespace java {
  namespace util {
    class Locale;
  }
  namespace lang {
    class Throwable;
    class Class;
    class Object;
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

      class OrekitInternalError : public ::java::lang::IllegalStateException {
       public:
        enum {
          mid_init$_0a70d77e3c5fdad0,
          mid_getLocalizedMessage_d2c8eb4129821f0e,
          mid_getMessage_d2c8eb4129821f0e,
          mid_getMessage_5969ecf7afac3dba,
          mid_getParts_2ab86268ef7a6631,
          mid_getSpecifier_667bcd34994d9d31,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit OrekitInternalError(jobject obj) : ::java::lang::IllegalStateException(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        OrekitInternalError(const OrekitInternalError& obj) : ::java::lang::IllegalStateException(obj) {}

        OrekitInternalError(const ::java::lang::Throwable &);

        ::java::lang::String getLocalizedMessage() const;
        ::java::lang::String getMessage() const;
        ::java::lang::String getMessage(const ::java::util::Locale &) const;
        JArray< ::java::lang::Object > getParts() const;
        ::org::hipparchus::exception::Localizable getSpecifier() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace errors {
      extern PyType_Def PY_TYPE_DEF(OrekitInternalError);
      extern PyTypeObject *PY_TYPE(OrekitInternalError);

      class t_OrekitInternalError {
      public:
        PyObject_HEAD
        OrekitInternalError object;
        static PyObject *wrap_Object(const OrekitInternalError&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
