#ifndef org_orekit_errors_OrekitIOException_H
#define org_orekit_errors_OrekitIOException_H

#include "java/io/IOException.h"

namespace java {
  namespace util {
    class Locale;
  }
  namespace lang {
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

      class OrekitIOException : public ::java::io::IOException {
       public:
        enum {
          mid_init$_2436a4119ba97d87,
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

        explicit OrekitIOException(jobject obj) : ::java::io::IOException(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        OrekitIOException(const OrekitIOException& obj) : ::java::io::IOException(obj) {}

        OrekitIOException(const ::org::hipparchus::exception::Localizable &, const JArray< ::java::lang::Object > &);

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
      extern PyType_Def PY_TYPE_DEF(OrekitIOException);
      extern PyTypeObject *PY_TYPE(OrekitIOException);

      class t_OrekitIOException {
      public:
        PyObject_HEAD
        OrekitIOException object;
        static PyObject *wrap_Object(const OrekitIOException&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
