#ifndef org_hipparchus_exception_NullArgumentException_H
#define org_hipparchus_exception_NullArgumentException_H

#include "java/lang/NullPointerException.h"

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
      class LocalizedException;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace exception {

      class NullArgumentException : public ::java::lang::NullPointerException {
       public:
        enum {
          mid_init$_a1fa5dae97ea5ed2,
          mid_init$_9b3ada3301b0db8c,
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
