#ifndef org_orekit_utils_DateDriver_H
#define org_orekit_utils_DateDriver_H

#include "org/orekit/utils/ParameterDriver.h"

namespace org {
  namespace orekit {
    namespace time {
      class TimeStamped;
      class AbsoluteDate;
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace utils {

      class DateDriver : public ::org::orekit::utils::ParameterDriver {
       public:
        enum {
          mid_init$_bbfbb4872f4edb46,
          mid_getBaseDate_aaa854c403487cf3,
          mid_getDate_aaa854c403487cf3,
          mid_isStart_e470b6d9e0d979db,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit DateDriver(jobject obj) : ::org::orekit::utils::ParameterDriver(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        DateDriver(const DateDriver& obj) : ::org::orekit::utils::ParameterDriver(obj) {}

        DateDriver(const ::org::orekit::time::AbsoluteDate &, const ::java::lang::String &, jboolean);

        ::org::orekit::time::AbsoluteDate getBaseDate() const;
        ::org::orekit::time::AbsoluteDate getDate() const;
        jboolean isStart() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace utils {
      extern PyType_Def PY_TYPE_DEF(DateDriver);
      extern PyTypeObject *PY_TYPE(DateDriver);

      class t_DateDriver {
      public:
        PyObject_HEAD
        DateDriver object;
        static PyObject *wrap_Object(const DateDriver&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
