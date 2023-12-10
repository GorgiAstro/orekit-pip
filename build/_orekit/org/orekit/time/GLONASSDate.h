#ifndef org_orekit_time_GLONASSDate_H
#define org_orekit_time_GLONASSDate_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class TimeStamped;
      class TimeScale;
      class AbsoluteDate;
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
          mid_init$_e82d68cd9f886886,
          mid_init$_74b53bb4dd72a089,
          mid_init$_78e41e7b5124a628,
          mid_init$_f2d461027d284506,
          mid_getDate_aaa854c403487cf3,
          mid_getDayNumber_f2f64475e4580546,
          mid_getGMST_456d9a2f64d6b28d,
          mid_getIntervalNumber_f2f64475e4580546,
          mid_getJD0_456d9a2f64d6b28d,
          mid_getSecInDay_456d9a2f64d6b28d,
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
