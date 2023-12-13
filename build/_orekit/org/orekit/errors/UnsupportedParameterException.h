#ifndef org_orekit_errors_UnsupportedParameterException_H
#define org_orekit_errors_UnsupportedParameterException_H

#include "org/orekit/errors/OrekitException.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace utils {
      class ParameterDriver;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace errors {

      class UnsupportedParameterException : public ::org::orekit::errors::OrekitException {
       public:
        enum {
          mid_init$_9c78226ca1e428f3,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit UnsupportedParameterException(jobject obj) : ::org::orekit::errors::OrekitException(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        UnsupportedParameterException(const UnsupportedParameterException& obj) : ::org::orekit::errors::OrekitException(obj) {}

        static ::java::lang::String *COMMA_SEP;
        static ::java::lang::String *NO_PARAMETER;

        UnsupportedParameterException(const ::java::lang::String &, const ::java::util::List &);
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace errors {
      extern PyType_Def PY_TYPE_DEF(UnsupportedParameterException);
      extern PyTypeObject *PY_TYPE(UnsupportedParameterException);

      class t_UnsupportedParameterException {
      public:
        PyObject_HEAD
        UnsupportedParameterException object;
        static PyObject *wrap_Object(const UnsupportedParameterException&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
