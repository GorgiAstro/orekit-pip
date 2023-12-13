#ifndef org_orekit_errors_TimeStampedCacheException_H
#define org_orekit_errors_TimeStampedCacheException_H

#include "org/orekit/errors/OrekitException.h"

namespace java {
  namespace lang {
    class Throwable;
    class Class;
    class Object;
  }
}
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
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace errors {

      class TimeStampedCacheException : public ::org::orekit::errors::OrekitException {
       public:
        enum {
          mid_init$_5156a99a29d65d29,
          mid_init$_554667b9a6ae8d23,
          mid_init$_9b3ada3301b0db8c,
          mid_init$_4d462b77e7e55a0d,
          mid_unwrap_a5feb75f1014fda3,
          mid_unwrap_4b6b5735a3621a84,
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
