#ifndef org_orekit_errors_OrekitException_H
#define org_orekit_errors_OrekitException_H

#include "java/lang/RuntimeException.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathRuntimeException;
      class Localizable;
    }
  }
  namespace orekit {
    namespace errors {
      class OrekitException;
      class LocalizedException;
    }
  }
}
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
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace errors {

      class OrekitException : public ::java::lang::RuntimeException {
       public:
        enum {
          mid_init$_23bc72a529164bda,
          mid_init$_2436a4119ba97d87,
          mid_init$_e22deb623183f3dc,
          mid_init$_db158649d786c484,
          mid_getLocalizedMessage_d2c8eb4129821f0e,
          mid_getMessage_d2c8eb4129821f0e,
          mid_getMessage_5969ecf7afac3dba,
          mid_getParts_2ab86268ef7a6631,
          mid_getSpecifier_667bcd34994d9d31,
          mid_unwrap_1ca98ec22fa4cc2a,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit OrekitException(jobject obj) : ::java::lang::RuntimeException(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        OrekitException(const OrekitException& obj) : ::java::lang::RuntimeException(obj) {}

        OrekitException(const ::org::hipparchus::exception::MathRuntimeException &);
        OrekitException(const ::org::hipparchus::exception::Localizable &, const JArray< ::java::lang::Object > &);
        OrekitException(const ::org::hipparchus::exception::Localizable &, const ::java::lang::Throwable &);
        OrekitException(const ::java::lang::Throwable &, const ::org::hipparchus::exception::Localizable &, const JArray< ::java::lang::Object > &);

        ::java::lang::String getLocalizedMessage() const;
        ::java::lang::String getMessage() const;
        ::java::lang::String getMessage(const ::java::util::Locale &) const;
        JArray< ::java::lang::Object > getParts() const;
        ::org::hipparchus::exception::Localizable getSpecifier() const;
        static OrekitException unwrap(const ::org::hipparchus::exception::MathRuntimeException &);
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace errors {
      extern PyType_Def PY_TYPE_DEF(OrekitException);
      extern PyTypeObject *PY_TYPE(OrekitException);

      class t_OrekitException {
      public:
        PyObject_HEAD
        OrekitException object;
        static PyObject *wrap_Object(const OrekitException&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
