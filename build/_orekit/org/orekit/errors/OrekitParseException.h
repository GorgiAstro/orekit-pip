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
