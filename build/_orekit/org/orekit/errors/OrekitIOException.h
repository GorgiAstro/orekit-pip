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
          mid_init$_3d6784947cb48668,
          mid_getLocalizedMessage_0090f7797e403f43,
          mid_getMessage_0090f7797e403f43,
          mid_getMessage_bab3be9b232acc5a,
          mid_getParts_e81d7907eea7e008,
          mid_getSpecifier_2e589a53386da289,
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
