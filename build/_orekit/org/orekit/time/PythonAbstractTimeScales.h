#ifndef org_orekit_time_PythonAbstractTimeScales_H
#define org_orekit_time_PythonAbstractTimeScales_H

#include "org/orekit/time/AbstractTimeScales.h"

namespace org {
  namespace orekit {
    namespace time {
      class UTCScale;
      class GPSScale;
      class QZSSScale;
      class GLONASSScale;
      class TCBScale;
      class UT1Scale;
      class TCGScale;
      class TTScale;
      class TAIScale;
      class GalileoScale;
      class TDBScale;
      class IRNSSScale;
      class BDTScale;
    }
    namespace utils {
      class IERSConventions;
    }
    namespace frames {
      class EOPHistory;
    }
  }
}
namespace java {
  namespace lang {
    class Throwable;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace time {

      class PythonAbstractTimeScales : public ::org::orekit::time::AbstractTimeScales {
       public:
        enum {
          mid_init$_7ae3461a92a43152,
          mid_finalize_7ae3461a92a43152,
          mid_getBDT_deaa012966748070,
          mid_getEopHistory_7544a283da003d74,
          mid_getGLONASS_c91e99b6d55c6edd,
          mid_getGPS_c3529b957726f144,
          mid_getGST_11ee1ca64364e897,
          mid_getIRNSS_ec0466e710e3daab,
          mid_getQZSS_7f540f12419eda56,
          mid_getTAI_9316322b62b6b656,
          mid_getTCB_2460e78d331af28f,
          mid_getTCG_30aeac15cc80b3c1,
          mid_getTDB_0bcc4110bc5be1d2,
          mid_getTT_9be074c5a298fe1e,
          mid_getUT1_7b22e00b4ab08eba,
          mid_getUTC_ed870393143e8ecb,
          mid_pythonDecRef_7ae3461a92a43152,
          mid_pythonExtension_a27fc9afd27e559d,
          mid_pythonExtension_fefb08975c10f0a1,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit PythonAbstractTimeScales(jobject obj) : ::org::orekit::time::AbstractTimeScales(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        PythonAbstractTimeScales(const PythonAbstractTimeScales& obj) : ::org::orekit::time::AbstractTimeScales(obj) {}

        PythonAbstractTimeScales();

        void finalize() const;
        ::org::orekit::time::BDTScale getBDT() const;
        ::org::orekit::frames::EOPHistory getEopHistory(const ::org::orekit::utils::IERSConventions &, jboolean) const;
        ::org::orekit::time::GLONASSScale getGLONASS() const;
        ::org::orekit::time::GPSScale getGPS() const;
        ::org::orekit::time::GalileoScale getGST() const;
        ::org::orekit::time::IRNSSScale getIRNSS() const;
        ::org::orekit::time::QZSSScale getQZSS() const;
        ::org::orekit::time::TAIScale getTAI() const;
        ::org::orekit::time::TCBScale getTCB() const;
        ::org::orekit::time::TCGScale getTCG() const;
        ::org::orekit::time::TDBScale getTDB() const;
        ::org::orekit::time::TTScale getTT() const;
        ::org::orekit::time::UT1Scale getUT1(const ::org::orekit::frames::EOPHistory &) const;
        ::org::orekit::time::UTCScale getUTC() const;
        void pythonDecRef() const;
        jlong pythonExtension() const;
        void pythonExtension(jlong) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace time {
      extern PyType_Def PY_TYPE_DEF(PythonAbstractTimeScales);
      extern PyTypeObject *PY_TYPE(PythonAbstractTimeScales);

      class t_PythonAbstractTimeScales {
      public:
        PyObject_HEAD
        PythonAbstractTimeScales object;
        static PyObject *wrap_Object(const PythonAbstractTimeScales&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
