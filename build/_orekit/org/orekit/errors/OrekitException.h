#ifndef org_orekit_errors_OrekitException_H
#define org_orekit_errors_OrekitException_H

#include "java/lang/RuntimeException.h"

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
  namespace orekit {
    namespace errors {
      class LocalizedException;
      class OrekitException;
    }
  }
  namespace hipparchus {
    namespace exception {
      class MathRuntimeException;
      class Localizable;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace errors {

      class OrekitException : public ::java::lang::RuntimeException {
       public:
        enum {
          mid_init$_5a362f030f21d160,
          mid_init$_4fde7f3f87bbd6f7,
          mid_init$_7e3eb40b1c2d2586,
          mid_init$_0ff5a331e85ddf14,
          mid_getLocalizedMessage_3cffd47377eca18a,
          mid_getMessage_3cffd47377eca18a,
          mid_getMessage_4b51060c6b7ea981,
          mid_getParts_6555a5198c71b73a,
          mid_getSpecifier_a86d7419cf3241b7,
          mid_unwrap_b461ed04f2b877b6,
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
