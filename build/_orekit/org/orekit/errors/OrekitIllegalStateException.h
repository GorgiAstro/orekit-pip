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
  namespace orekit {
    namespace errors {
      class LocalizedException;
    }
  }
  namespace hipparchus {
    namespace exception {
      class Localizable;
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
          mid_init$_4fde7f3f87bbd6f7,
          mid_getLocalizedMessage_3cffd47377eca18a,
          mid_getMessage_3cffd47377eca18a,
          mid_getMessage_4b51060c6b7ea981,
          mid_getParts_6555a5198c71b73a,
          mid_getSpecifier_a86d7419cf3241b7,
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
