#ifndef org_orekit_utils_ParameterFunction_H
#define org_orekit_utils_ParameterFunction_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
    }
    namespace utils {
      class ParameterDriver;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace utils {

      class ParameterFunction : public ::java::lang::Object {
       public:
        enum {
          mid_value_ceb9685d0630065e,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit ParameterFunction(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        ParameterFunction(const ParameterFunction& obj) : ::java::lang::Object(obj) {}

        jdouble value(const ::org::orekit::utils::ParameterDriver &, const ::org::orekit::time::AbsoluteDate &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace utils {
      extern PyType_Def PY_TYPE_DEF(ParameterFunction);
      extern PyTypeObject *PY_TYPE(ParameterFunction);

      class t_ParameterFunction {
      public:
        PyObject_HEAD
        ParameterFunction object;
        static PyObject *wrap_Object(const ParameterFunction&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
