#ifndef org_hipparchus_exception_MathIllegalArgumentException_H
#define org_hipparchus_exception_MathIllegalArgumentException_H

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

      class MathIllegalArgumentException : public ::org::hipparchus::exception::MathRuntimeException {
       public:
        enum {
          mid_init$_2436a4119ba97d87,
          mid_init$_db158649d786c484,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit MathIllegalArgumentException(jobject obj) : ::org::hipparchus::exception::MathRuntimeException(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        MathIllegalArgumentException(const MathIllegalArgumentException& obj) : ::org::hipparchus::exception::MathRuntimeException(obj) {}

        MathIllegalArgumentException(const ::org::hipparchus::exception::Localizable &, const JArray< ::java::lang::Object > &);
        MathIllegalArgumentException(const ::java::lang::Throwable &, const ::org::hipparchus::exception::Localizable &, const JArray< ::java::lang::Object > &);
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace exception {
      extern PyType_Def PY_TYPE_DEF(MathIllegalArgumentException);
      extern PyTypeObject *PY_TYPE(MathIllegalArgumentException);

      class t_MathIllegalArgumentException {
      public:
        PyObject_HEAD
        MathIllegalArgumentException object;
        static PyObject *wrap_Object(const MathIllegalArgumentException&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
