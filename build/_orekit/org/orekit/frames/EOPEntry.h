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
    namespace frames {
      class ITRFVersion;
    }
    namespace time {
      class AbsoluteDate;
      class TimeStamped;
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
          mid_init$_b9fb2587f40ba4f3,
          mid_getDate_85703d13e302437e,
          mid_getDdEps_dff5885c2c873297,
          mid_getDdPsi_dff5885c2c873297,
          mid_getDx_dff5885c2c873297,
          mid_getDy_dff5885c2c873297,
          mid_getITRFType_8a73c81b6e5084ce,
          mid_getLOD_dff5885c2c873297,
          mid_getMjd_570ce0828f81a2c1,
          mid_getUT1MinusUTC_dff5885c2c873297,
          mid_getX_dff5885c2c873297,
          mid_getXRate_dff5885c2c873297,
          mid_getY_dff5885c2c873297,
          mid_getYRate_dff5885c2c873297,
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
