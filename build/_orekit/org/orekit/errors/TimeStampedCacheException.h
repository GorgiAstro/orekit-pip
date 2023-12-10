#ifndef org_orekit_errors_TimeStampedCacheException_H
#define org_orekit_errors_TimeStampedCacheException_H

#include "org/orekit/errors/OrekitException.h"

namespace org {
  namespace orekit {
    namespace errors {
      class TimeStampedCacheException;
    }
  }
  namespace hipparchus {
    namespace exception {
      class Localizable;
      class MathRuntimeException;
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
          mid_init$_2171b09f9faab92f,
          mid_init$_ab3e19f36ee9b26f,
          mid_init$_3d6784947cb48668,
          mid_init$_ca997976b075d32c,
          mid_unwrap_ee714fe96be7f1d9,
          mid_unwrap_cd6f351421ae331c,
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
