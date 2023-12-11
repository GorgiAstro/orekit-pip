#ifndef org_orekit_time_GLONASSDate_H
#define org_orekit_time_GLONASSDate_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
      class TimeScale;
      class TimeStamped;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace time {

      class GLONASSDate : public ::java::lang::Object {
       public:
        enum {
          mid_init$_20affcbd28542333,
          mid_init$_9d31fbd7d3d72cec,
          mid_init$_754312f3734d6e2f,
          mid_init$_8b3ae84c27acbc02,
          mid_getDate_7a97f7e149e79afb,
          mid_getDayNumber_412668abc8d889e9,
          mid_getGMST_557b8123390d8d0c,
          mid_getIntervalNumber_412668abc8d889e9,
          mid_getJD0_557b8123390d8d0c,
          mid_getSecInDay_557b8123390d8d0c,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit GLONASSDate(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        GLONASSDate(const GLONASSDate& obj) : ::java::lang::Object(obj) {}

        GLONASSDate(const ::org::orekit::time::AbsoluteDate &);
        GLONASSDate(const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::time::TimeScale &);
        GLONASSDate(jint, jint, jdouble);
        GLONASSDate(jint, jint, jdouble, const ::org::orekit::time::TimeScale &);

        ::org::orekit::time::AbsoluteDate getDate() const;
        jint getDayNumber() const;
        jdouble getGMST() const;
        jint getIntervalNumber() const;
        jdouble getJD0() const;
        jdouble getSecInDay() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace time {
      extern PyType_Def PY_TYPE_DEF(GLONASSDate);
      extern PyTypeObject *PY_TYPE(GLONASSDate);

      class t_GLONASSDate {
      public:
        PyObject_HEAD
        GLONASSDate object;
        static PyObject *wrap_Object(const GLONASSDate&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
