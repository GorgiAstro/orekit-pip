#ifndef org_orekit_time_GNSSDate_H
#define org_orekit_time_GNSSDate_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class TimeScales;
      class TimeStamped;
      class AbsoluteDate;
      class DateComponents;
    }
    namespace gnss {
      class SatelliteSystem;
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
          mid_init$_c8e9851122b2cc76,
          mid_init$_991740cf003bee22,
          mid_init$_939d3b583033478d,
          mid_init$_8f630f653a46ac47,
          mid_init$_54cbeb883a9840f5,
          mid_getDate_aaa854c403487cf3,
          mid_getMilliInWeek_456d9a2f64d6b28d,
          mid_getRolloverReference_d592c1a2c355eb35,
          mid_getSecondsInWeek_456d9a2f64d6b28d,
          mid_getWeekNumber_f2f64475e4580546,
          mid_setRolloverReference_cd567be04bee4d03,
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
