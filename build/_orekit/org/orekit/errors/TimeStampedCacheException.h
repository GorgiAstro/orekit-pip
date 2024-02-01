#ifndef org_orekit_errors_TimeStampedCacheException_H
#define org_orekit_errors_TimeStampedCacheException_H

#include "org/orekit/errors/OrekitException.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathRuntimeException;
      class Localizable;
    }
  }
  namespace orekit {
    namespace errors {
      class TimeStampedCacheException;
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
  namespace orekit {
    namespace errors {

      class TimeStampedCacheException : public ::org::orekit::errors::OrekitException {
       public:
        enum {
          mid_init$_23bc72a529164bda,
          mid_init$_a3d9201369e0f719,
          mid_init$_2436a4119ba97d87,
          mid_init$_db158649d786c484,
          mid_unwrap_ce967debe2389e2a,
          mid_unwrap_ebde7ec9195e90a4,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit TimeStampedCacheException(jobject obj) : ::org::orekit::errors::OrekitException(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        TimeStampedCacheException(const TimeStampedCacheException& obj) : ::org::orekit::errors::OrekitException(obj) {}

        TimeStampedCacheException(const ::org::hipparchus::exception::MathRuntimeException &);
        TimeStampedCacheException(const ::org::orekit::errors::OrekitException &);
        TimeStampedCacheException(const ::org::hipparchus::exception::Localizable &, const JArray< ::java::lang::Object > &);
        TimeStampedCacheException(const ::java::lang::Throwable &, const ::org::hipparchus::exception::Localizable &, const JArray< ::java::lang::Object > &);

        static TimeStampedCacheException unwrap(const ::org::hipparchus::exception::MathRuntimeException &);
        static TimeStampedCacheException unwrap(const ::org::orekit::errors::OrekitException &);
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace errors {
      extern PyType_Def PY_TYPE_DEF(TimeStampedCacheException);
      extern PyTypeObject *PY_TYPE(TimeStampedCacheException);

      class t_TimeStampedCacheException {
      public:
        PyObject_HEAD
        TimeStampedCacheException object;
        static PyObject *wrap_Object(const TimeStampedCacheException&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
