#ifndef org_hipparchus_exception_MathRuntimeException_H
#define org_hipparchus_exception_MathRuntimeException_H

#include "java/lang/RuntimeException.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class LocalizedException;
      class Localizable;
      class MathRuntimeException;
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
          mid_init$_d0cf82c16a7e8751,
          mid_init$_6ecc3fd6067c266c,
          mid_createInternalError_563b33cf1923d177,
          mid_createInternalError_1f40e342c6164292,
          mid_getLocalizedMessage_11b109bd155ca898,
          mid_getMessage_11b109bd155ca898,
          mid_getMessage_3cd873bfb132c4fd,
          mid_getParts_b93c730013ce64c6,
          mid_getSpecifier_517615caa9b88a24,
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
