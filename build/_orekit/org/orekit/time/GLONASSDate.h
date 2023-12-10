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
      class TimeStamped;
      class TimeScale;
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
          mid_init$_600a2a61652bc473,
          mid_init$_83d5b0065691b874,
          mid_init$_1506189166690b5e,
          mid_init$_9e28ee401d3a2b1f,
          mid_getDate_85703d13e302437e,
          mid_getDayNumber_570ce0828f81a2c1,
          mid_getGMST_dff5885c2c873297,
          mid_getIntervalNumber_570ce0828f81a2c1,
          mid_getJD0_dff5885c2c873297,
          mid_getSecInDay_dff5885c2c873297,
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
