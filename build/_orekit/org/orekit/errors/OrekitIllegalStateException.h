#ifndef org_orekit_errors_OrekitIllegalStateException_H
#define org_orekit_errors_OrekitIllegalStateException_H

#include "java/lang/IllegalStateException.h"

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

      class OrekitIllegalStateException : public ::java::lang::IllegalStateException {
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

        explicit OrekitIllegalStateException(jobject obj) : ::java::lang::IllegalStateException(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        OrekitIllegalStateException(const OrekitIllegalStateException& obj) : ::java::lang::IllegalStateException(obj) {}

        OrekitIllegalStateException(const ::org::hipparchus::exception::Localizable &, const JArray< ::java::lang::Object > &);

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
      extern PyType_Def PY_TYPE_DEF(OrekitIllegalStateException);
      extern PyTypeObject *PY_TYPE(OrekitIllegalStateException);

      class t_OrekitIllegalStateException {
      public:
        PyObject_HEAD
        OrekitIllegalStateException object;
        static PyObject *wrap_Object(const OrekitIllegalStateException&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
