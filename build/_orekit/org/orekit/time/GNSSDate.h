#ifndef org_orekit_time_GNSSDate_H
#define org_orekit_time_GNSSDate_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class DateComponents;
      class TimeScales;
      class AbsoluteDate;
      class TimeStamped;
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
          mid_init$_ffd61ef24fa077be,
          mid_init$_3cd9580679dfece7,
          mid_init$_de24f59b772a2836,
          mid_init$_6ddcba0cbdf5fcf6,
          mid_init$_a083cdf2ad9b92d0,
          mid_getDate_7a97f7e149e79afb,
          mid_getMilliInWeek_557b8123390d8d0c,
          mid_getRolloverReference_ef81839d8717cc3a,
          mid_getSecondsInWeek_557b8123390d8d0c,
          mid_getWeekNumber_412668abc8d889e9,
          mid_setRolloverReference_4d2eb60c6d6ac3df,
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
