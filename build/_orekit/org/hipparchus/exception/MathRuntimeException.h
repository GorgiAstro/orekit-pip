#ifndef org_hipparchus_exception_MathRuntimeException_H
#define org_hipparchus_exception_MathRuntimeException_H

#include "java/lang/RuntimeException.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathRuntimeException;
      class Localizable;
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
  namespace hipparchus {
    namespace exception {

      class MathRuntimeException : public ::java::lang::RuntimeException {
       public:
        enum {
          mid_init$_2436a4119ba97d87,
          mid_init$_db158649d786c484,
          mid_createInternalError_f51081121a8ebb04,
          mid_createInternalError_875275e2137f37ad,
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

        explicit MathRuntimeException(jobject obj) : ::java::lang::RuntimeException(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        MathRuntimeException(const MathRuntimeException& obj) : ::java::lang::RuntimeException(obj) {}

        MathRuntimeException(const ::org::hipparchus::exception::Localizable &, const JArray< ::java::lang::Object > &);
        MathRuntimeException(const ::java::lang::Throwable &, const ::org::hipparchus::exception::Localizable &, const JArray< ::java::lang::Object > &);

        static MathRuntimeException createInternalError();
        static MathRuntimeException createInternalError(const ::java::lang::Throwable &);
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
  namespace hipparchus {
    namespace exception {
      extern PyType_Def PY_TYPE_DEF(MathRuntimeException);
      extern PyTypeObject *PY_TYPE(MathRuntimeException);

      class t_MathRuntimeException {
      public:
        PyObject_HEAD
        MathRuntimeException object;
        static PyObject *wrap_Object(const MathRuntimeException&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
