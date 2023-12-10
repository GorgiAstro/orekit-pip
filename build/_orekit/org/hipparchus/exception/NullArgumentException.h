#ifndef org_hipparchus_exception_NullArgumentException_H
#define org_hipparchus_exception_NullArgumentException_H

#include "java/lang/NullPointerException.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class LocalizedException;
      class Localizable;
    }
  }
}
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
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace exception {

      class NullArgumentException : public ::java::lang::NullPointerException {
       public:
        enum {
          mid_init$_0fa09c18fee449d5,
          mid_init$_d0cf82c16a7e8751,
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

        explicit NullArgumentException(jobject obj) : ::java::lang::NullPointerException(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        NullArgumentException(const NullArgumentException& obj) : ::java::lang::NullPointerException(obj) {}

        NullArgumentException();
        NullArgumentException(const ::org::hipparchus::exception::Localizable &, const JArray< ::java::lang::Object > &);

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
      extern PyType_Def PY_TYPE_DEF(NullArgumentException);
      extern PyTypeObject *PY_TYPE(NullArgumentException);

      class t_NullArgumentException {
      public:
        PyObject_HEAD
        NullArgumentException object;
        static PyObject *wrap_Object(const NullArgumentException&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
