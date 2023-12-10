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
          mid_init$_b82e021312358546,
          mid_init$_224a394c2fd91cdf,
          mid_init$_d0cf82c16a7e8751,
          mid_init$_6ecc3fd6067c266c,
          mid_unwrap_98ab925763c8c570,
          mid_unwrap_3e62516228911b5b,
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
