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
          mid_init$_98504698e8b85a67,
          mid_getLocalizedMessage_11b109bd155ca898,
          mid_getMessage_11b109bd155ca898,
          mid_getMessage_3cd873bfb132c4fd,
          mid_getParts_b93c730013ce64c6,
          mid_getSpecifier_517615caa9b88a24,
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
