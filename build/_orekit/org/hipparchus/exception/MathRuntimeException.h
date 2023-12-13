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
      class Localizable;
      class LocalizedException;
      class MathRuntimeException;
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
          mid_init$_9b3ada3301b0db8c,
          mid_init$_4d462b77e7e55a0d,
          mid_createInternalError_cfbaba94b4fd4362,
          mid_createInternalError_4f759f0cc64787fb,
          mid_getLocalizedMessage_1c1fa1e935d6cdcf,
          mid_getMessage_1c1fa1e935d6cdcf,
          mid_getMessage_26070c28e6ea354d,
          mid_getParts_24e2edd6319f4c5a,
          mid_getSpecifier_d8f5056e4f45c9a6,
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
