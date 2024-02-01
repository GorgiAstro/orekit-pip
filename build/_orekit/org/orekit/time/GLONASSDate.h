#ifndef org_orekit_time_GLONASSDate_H
#define org_orekit_time_GLONASSDate_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class TimeStamped;
      class AbsoluteDate;
      class TimeScale;
    }
  }
}
namespace java {
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace time {

      class GLONASSDate : public ::java::lang::Object {
       public:
        enum {
          mid_init$_8497861b879c83f7,
          mid_init$_9fe8d849aef9a85f,
          mid_init$_e98d7b3e971b6087,
          mid_init$_751ae7c5bf954915,
          mid_getDate_80e11148db499dda,
          mid_getDayNumber_d6ab429752e7c267,
          mid_getGMST_9981f74b2d109da6,
          mid_getIntervalNumber_d6ab429752e7c267,
          mid_getJD0_9981f74b2d109da6,
          mid_getSecInDay_9981f74b2d109da6,
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
