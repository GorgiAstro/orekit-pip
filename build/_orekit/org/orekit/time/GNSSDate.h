#ifndef org_orekit_time_GNSSDate_H
#define org_orekit_time_GNSSDate_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace gnss {
      class SatelliteSystem;
    }
    namespace time {
      class TimeScales;
      class AbsoluteDate;
      class TimeStamped;
      class DateComponents;
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

      class GNSSDate : public ::java::lang::Object {
       public:
        enum {
          mid_init$_b9cc2ac718a579c4,
          mid_init$_48a5f9e9ad2c84e7,
          mid_init$_dc5b21d86cac5eb8,
          mid_init$_754add1b388c7d4c,
          mid_init$_48bb1b17002bbd73,
          mid_getDate_85703d13e302437e,
          mid_getMilliInWeek_dff5885c2c873297,
          mid_getRolloverReference_06e6477664d37caa,
          mid_getSecondsInWeek_dff5885c2c873297,
          mid_getWeekNumber_570ce0828f81a2c1,
          mid_setRolloverReference_56dc33c3871b1cb7,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit GNSSDate(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        GNSSDate(const GNSSDate& obj) : ::java::lang::Object(obj) {}

        GNSSDate(const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::gnss::SatelliteSystem &);
        GNSSDate(const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::gnss::SatelliteSystem &, const ::org::orekit::time::TimeScales &);
        GNSSDate(jint, jdouble, const ::org::orekit::gnss::SatelliteSystem &);
        GNSSDate(jint, jdouble, const ::org::orekit::gnss::SatelliteSystem &, const ::org::orekit::time::TimeScales &);
        GNSSDate(jint, jdouble, const ::org::orekit::gnss::SatelliteSystem &, const ::org::orekit::time::DateComponents &, const ::org::orekit::time::TimeScales &);

        ::org::orekit::time::AbsoluteDate getDate() const;
        jdouble getMilliInWeek() const;
        static ::org::orekit::time::DateComponents getRolloverReference();
        jdouble getSecondsInWeek() const;
        jint getWeekNumber() const;
        static void setRolloverReference(const ::org::orekit::time::DateComponents &);
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace time {
      extern PyType_Def PY_TYPE_DEF(GNSSDate);
      extern PyTypeObject *PY_TYPE(GNSSDate);

      class t_GNSSDate {
      public:
        PyObject_HEAD
        GNSSDate object;
        static PyObject *wrap_Object(const GNSSDate&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
