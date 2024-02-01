#ifndef org_orekit_errors_OrekitParseException_H
#define org_orekit_errors_OrekitParseException_H

#include "java/text/ParseException.h"

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

      class OrekitParseException : public ::java::text::ParseException {
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

        explicit OrekitParseException(jobject obj) : ::java::text::ParseException(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        OrekitParseException(const OrekitParseException& obj) : ::java::text::ParseException(obj) {}

        OrekitParseException(const ::org::hipparchus::exception::Localizable &, const JArray< ::java::lang::Object > &);

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
      extern PyType_Def PY_TYPE_DEF(OrekitParseException);
      extern PyTypeObject *PY_TYPE(OrekitParseException);

      class t_OrekitParseException {
      public:
        PyObject_HEAD
        OrekitParseException object;
        static PyObject *wrap_Object(const OrekitParseException&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
