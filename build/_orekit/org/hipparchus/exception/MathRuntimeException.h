#ifndef org_hipparchus_exception_MathRuntimeException_H
#define org_hipparchus_exception_MathRuntimeException_H

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
  namespace hipparchus {
    namespace exception {
      class MathRuntimeException;
      class LocalizedException;
      class Localizable;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace exception {

      class MathRuntimeException : public ::java::lang::RuntimeException {
       public:
        enum {
          mid_init$_4fde7f3f87bbd6f7,
          mid_init$_0ff5a331e85ddf14,
          mid_createInternalError_c9f32b67c212ac06,
          mid_createInternalError_8d3e86709cac667c,
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
