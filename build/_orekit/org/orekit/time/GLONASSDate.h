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
          mid_init$_02135a6ef25adb4b,
          mid_init$_805befaa637d6dd5,
          mid_init$_94fe8d9ffeb50676,
          mid_init$_3d28d2f6b328edfa,
          mid_getDate_c325492395d89b24,
          mid_getDayNumber_55546ef6a647f39b,
          mid_getGMST_b74f83833fdad017,
          mid_getIntervalNumber_55546ef6a647f39b,
          mid_getJD0_b74f83833fdad017,
          mid_getSecInDay_b74f83833fdad017,
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
