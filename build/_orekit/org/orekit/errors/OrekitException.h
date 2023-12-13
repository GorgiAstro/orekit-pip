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
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace errors {

      class OrekitException : public ::java::lang::RuntimeException {
       public:
        enum {
          mid_init$_5156a99a29d65d29,
          mid_init$_9b3ada3301b0db8c,
          mid_init$_4bb1ca1d16a113c3,
          mid_init$_4d462b77e7e55a0d,
          mid_getLocalizedMessage_1c1fa1e935d6cdcf,
          mid_getMessage_1c1fa1e935d6cdcf,
          mid_getMessage_26070c28e6ea354d,
          mid_getParts_24e2edd6319f4c5a,
          mid_getSpecifier_d8f5056e4f45c9a6,
          mid_unwrap_f8191f14ec005730,
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
