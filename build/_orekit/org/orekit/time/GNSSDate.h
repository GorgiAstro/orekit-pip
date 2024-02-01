#ifndef org_orekit_time_GNSSDate_H
#define org_orekit_time_GNSSDate_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class TimeStamped;
      class AbsoluteDate;
      class DateComponents;
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
          mid_init$_7695923634acd0ad,
          mid_init$_bf7567e1d0c046a5,
          mid_init$_de88248115685977,
          mid_init$_acb5713e51f8e5e7,
          mid_init$_d807d8762531da61,
          mid_getDate_80e11148db499dda,
          mid_getMilliInWeek_9981f74b2d109da6,
          mid_getRolloverReference_70bc100457881a79,
          mid_getSecondsInWeek_9981f74b2d109da6,
          mid_getWeekNumber_d6ab429752e7c267,
          mid_setRolloverReference_badbbe8d1e1c6168,
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
