#ifndef org_orekit_time_PythonAbstractTimeScales_H
#define org_orekit_time_PythonAbstractTimeScales_H

#include "org/orekit/time/AbstractTimeScales.h"

namespace org {
  namespace orekit {
    namespace time {
      class TTScale;
      class TAIScale;
      class UTCScale;
      class GLONASSScale;
      class GPSScale;
      class QZSSScale;
      class UT1Scale;
      class IRNSSScale;
      class TDBScale;
      class GalileoScale;
      class TCBScale;
      class TCGScale;
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
          mid_init$_0640e6acf969ed28,
          mid_finalize_0640e6acf969ed28,
          mid_getBDT_9391834b1a937fd3,
          mid_getEopHistory_9cf4a1ec2e53bbd3,
          mid_getGLONASS_237364a28a8cf0b4,
          mid_getGPS_0cd5c45ac1466124,
          mid_getGST_3eb0a3a9b450fe42,
          mid_getIRNSS_64d2db466ba002ef,
          mid_getQZSS_513baddf28d44704,
          mid_getTAI_d5c1bf5214e95dd6,
          mid_getTCB_1561497728a78b6a,
          mid_getTCG_2cdd0fa7c8f02aa9,
          mid_getTDB_777ef8538a45134b,
          mid_getTT_f6e670da699ff3f8,
          mid_getUT1_c21aaa13d4f3f95e,
          mid_getUTC_81e037be1ebdb551,
          mid_pythonDecRef_0640e6acf969ed28,
          mid_pythonExtension_9e26256fb0d384a2,
          mid_pythonExtension_3cd6a6b354c6aa22,
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
