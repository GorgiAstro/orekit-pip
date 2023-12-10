#ifndef org_orekit_errors_FrameAncestorException_H
#define org_orekit_errors_FrameAncestorException_H

#include "org/orekit/errors/OrekitException.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class Localizable;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class Object;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace errors {

      class FrameAncestorException : public ::org::orekit::errors::OrekitException {
       public:
        enum {
          mid_init$_d0cf82c16a7e8751,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FrameAncestorException(jobject obj) : ::org::orekit::errors::OrekitException(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FrameAncestorException(const FrameAncestorException& obj) : ::org::orekit::errors::OrekitException(obj) {}

        FrameAncestorException(const ::org::hipparchus::exception::Localizable &, const JArray< ::java::lang::Object > &);
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace errors {
      extern PyType_Def PY_TYPE_DEF(FrameAncestorException);
      extern PyTypeObject *PY_TYPE(FrameAncestorException);

      class t_FrameAncestorException {
      public:
        PyObject_HEAD
        FrameAncestorException object;
        static PyObject *wrap_Object(const FrameAncestorException&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
