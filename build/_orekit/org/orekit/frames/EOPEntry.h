#ifndef org_orekit_frames_EOPEntry_H
#define org_orekit_frames_EOPEntry_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class TimeStamped;
      class AbsoluteDate;
    }
    namespace frames {
      class ITRFVersion;
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
    namespace frames {

      class EOPEntry : public ::java::lang::Object {
       public:
        enum {
          mid_init$_0e7468bd511b7d4e,
          mid_getDate_80e11148db499dda,
          mid_getDdEps_9981f74b2d109da6,
          mid_getDdPsi_9981f74b2d109da6,
          mid_getDx_9981f74b2d109da6,
          mid_getDy_9981f74b2d109da6,
          mid_getITRFType_4865f340ec39b9c4,
          mid_getLOD_9981f74b2d109da6,
          mid_getMjd_d6ab429752e7c267,
          mid_getUT1MinusUTC_9981f74b2d109da6,
          mid_getX_9981f74b2d109da6,
          mid_getXRate_9981f74b2d109da6,
          mid_getY_9981f74b2d109da6,
          mid_getYRate_9981f74b2d109da6,
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
