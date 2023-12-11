#ifndef org_orekit_frames_EOPEntry_H
#define org_orekit_frames_EOPEntry_H

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
    }
    namespace frames {
      class ITRFVersion;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace frames {

      class EOPEntry : public ::java::lang::Object {
       public:
        enum {
          mid_init$_3c622621d4e330b6,
          mid_getDate_7a97f7e149e79afb,
          mid_getDdEps_557b8123390d8d0c,
          mid_getDdPsi_557b8123390d8d0c,
          mid_getDx_557b8123390d8d0c,
          mid_getDy_557b8123390d8d0c,
          mid_getITRFType_b311296551ce8af2,
          mid_getLOD_557b8123390d8d0c,
          mid_getMjd_412668abc8d889e9,
          mid_getUT1MinusUTC_557b8123390d8d0c,
          mid_getX_557b8123390d8d0c,
          mid_getXRate_557b8123390d8d0c,
          mid_getY_557b8123390d8d0c,
          mid_getYRate_557b8123390d8d0c,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit EOPEntry(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        EOPEntry(const EOPEntry& obj) : ::java::lang::Object(obj) {}

        EOPEntry(jint, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, const ::org::orekit::frames::ITRFVersion &, const ::org::orekit::time::AbsoluteDate &);

        ::org::orekit::time::AbsoluteDate getDate() const;
        jdouble getDdEps() const;
        jdouble getDdPsi() const;
        jdouble getDx() const;
        jdouble getDy() const;
        ::org::orekit::frames::ITRFVersion getITRFType() const;
        jdouble getLOD() const;
        jint getMjd() const;
        jdouble getUT1MinusUTC() const;
        jdouble getX() const;
        jdouble getXRate() const;
        jdouble getY() const;
        jdouble getYRate() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace frames {
      extern PyType_Def PY_TYPE_DEF(EOPEntry);
      extern PyTypeObject *PY_TYPE(EOPEntry);

      class t_EOPEntry {
      public:
        PyObject_HEAD
        EOPEntry object;
        static PyObject *wrap_Object(const EOPEntry&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
