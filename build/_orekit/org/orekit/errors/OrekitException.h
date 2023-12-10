#ifndef org_orekit_errors_OrekitException_H
#define org_orekit_errors_OrekitException_H

#include "java/lang/RuntimeException.h"

namespace org {
  namespace orekit {
    namespace errors {
      class OrekitException;
      class LocalizedException;
    }
  }
  namespace hipparchus {
    namespace exception {
      class MathRuntimeException;
      class Localizable;
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
          mid_init$_2171b09f9faab92f,
          mid_init$_3d6784947cb48668,
          mid_init$_f03459011cf1d5d9,
          mid_init$_ca997976b075d32c,
          mid_getLocalizedMessage_0090f7797e403f43,
          mid_getMessage_0090f7797e403f43,
          mid_getMessage_bab3be9b232acc5a,
          mid_getParts_e81d7907eea7e008,
          mid_getSpecifier_2e589a53386da289,
          mid_unwrap_bdd7f7bad3198ab9,
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