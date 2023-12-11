#ifndef org_hipparchus_exception_MathIllegalStateException_H
#define org_hipparchus_exception_MathIllegalStateException_H

#include "org/hipparchus/exception/MathRuntimeException.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class Localizable;
    }
  }
}
namespace java {
  namespace lang {
    class Throwable;
    class Class;
    class Object;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace exception {

      class MathIllegalStateException : public ::org::hipparchus::exception::MathRuntimeException {
       public:
        enum {
          mid_init$_4fde7f3f87bbd6f7,
          mid_init$_0ff5a331e85ddf14,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit MathIllegalStateException(jobject obj) : ::org::hipparchus::exception::MathRuntimeException(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        MathIllegalStateException(const MathIllegalStateException& obj) : ::org::hipparchus::exception::MathRuntimeException(obj) {}

        MathIllegalStateException(const ::org::hipparchus::exception::Localizable &, const JArray< ::java::lang::Object > &);
        MathIllegalStateException(const ::java::lang::Throwable &, const ::org::hipparchus::exception::Localizable &, const JArray< ::java::lang::Object > &);
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace exception {
      extern PyType_Def PY_TYPE_DEF(MathIllegalStateException);
      extern PyTypeObject *PY_TYPE(MathIllegalStateException);

      class t_MathIllegalStateException {
      public:
        PyObject_HEAD
        MathIllegalStateException object;
        static PyObject *wrap_Object(const MathIllegalStateException&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
