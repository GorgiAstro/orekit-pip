#ifndef org_orekit_utils_ParameterDriversList$DelegatingDriver_H
#define org_orekit_utils_ParameterDriversList$DelegatingDriver_H

#include "org/orekit/utils/ParameterDriver.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace utils {

      class ParameterDriversList$DelegatingDriver : public ::org::orekit::utils::ParameterDriver {
       public:
        enum {
          mid_getRawDrivers_d751c1a57012b438,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit ParameterDriversList$DelegatingDriver(jobject obj) : ::org::orekit::utils::ParameterDriver(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        ParameterDriversList$DelegatingDriver(const ParameterDriversList$DelegatingDriver& obj) : ::org::orekit::utils::ParameterDriver(obj) {}

        ::java::util::List getRawDrivers() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace utils {
      extern PyType_Def PY_TYPE_DEF(ParameterDriversList$DelegatingDriver);
      extern PyTypeObject *PY_TYPE(ParameterDriversList$DelegatingDriver);

      class t_ParameterDriversList$DelegatingDriver {
      public:
        PyObject_HEAD
        ParameterDriversList$DelegatingDriver object;
        static PyObject *wrap_Object(const ParameterDriversList$DelegatingDriver&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
