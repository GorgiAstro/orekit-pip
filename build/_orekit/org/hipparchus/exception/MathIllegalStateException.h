#ifndef org_hipparchus_exception_MathIllegalStateException_H
#define org_hipparchus_exception_MathIllegalStateException_H

#include "org/hipparchus/exception/MathRuntimeException.h"

namespace java {
  namespace lang {
    class Throwable;
    class Class;
    class Object;
  }
}
namespace org {
  namespace hipparchus {
    namespace exception {
      class Localizable;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace exception {

      class MathIllegalStateException : public ::org::hipparchus::exception::MathRuntimeException {
       public:
        enum {
          mid_init$_9b3ada3301b0db8c,
          mid_init$_4d462b77e7e55a0d,
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
