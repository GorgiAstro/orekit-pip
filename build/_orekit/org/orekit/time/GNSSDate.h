#ifndef org_orekit_time_GNSSDate_H
#define org_orekit_time_GNSSDate_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class TimeStamped;
      class DateComponents;
      class AbsoluteDate;
      class TimeScales;
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
          mid_init$_460e3cbac92b81c9,
          mid_init$_c2fc6034b56e038c,
          mid_init$_de6f9a13eca5764a,
          mid_init$_eb78c67fa56638d0,
          mid_init$_c372ae533369c432,
          mid_getDate_c325492395d89b24,
          mid_getMilliInWeek_b74f83833fdad017,
          mid_getRolloverReference_357436921b6db81c,
          mid_getSecondsInWeek_b74f83833fdad017,
          mid_getWeekNumber_55546ef6a647f39b,
          mid_setRolloverReference_a97e9138404c69cd,
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
