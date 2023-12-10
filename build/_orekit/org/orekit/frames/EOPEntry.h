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
          mid_init$_c68cf8d9937ee5f1,
          mid_getDate_aaa854c403487cf3,
          mid_getDdEps_456d9a2f64d6b28d,
          mid_getDdPsi_456d9a2f64d6b28d,
          mid_getDx_456d9a2f64d6b28d,
          mid_getDy_456d9a2f64d6b28d,
          mid_getITRFType_f157e1cf87d45e2d,
          mid_getLOD_456d9a2f64d6b28d,
          mid_getMjd_f2f64475e4580546,
          mid_getUT1MinusUTC_456d9a2f64d6b28d,
          mid_getX_456d9a2f64d6b28d,
          mid_getXRate_456d9a2f64d6b28d,
          mid_getY_456d9a2f64d6b28d,
          mid_getYRate_456d9a2f64d6b28d,
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
