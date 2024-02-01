#ifndef org_orekit_time_PythonAbstractTimeScales_H
#define org_orekit_time_PythonAbstractTimeScales_H

#include "org/orekit/time/AbstractTimeScales.h"

namespace org {
  namespace orekit {
    namespace time {
      class IRNSSScale;
      class GLONASSScale;
      class BDTScale;
      class UTCScale;
      class TTScale;
      class TCBScale;
      class TAIScale;
      class QZSSScale;
      class UT1Scale;
      class TCGScale;
      class GPSScale;
      class TDBScale;
      class GalileoScale;
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
          mid_init$_ff7cb6c242604316,
          mid_finalize_ff7cb6c242604316,
          mid_getBDT_9d93fd70217d9218,
          mid_getEopHistory_5f3b1864e8a02d51,
          mid_getGLONASS_98a4c7e041a431de,
          mid_getGPS_bfc706ac1880dab6,
          mid_getGST_03bea9e4eca66482,
          mid_getIRNSS_4011a9310ce86043,
          mid_getQZSS_af6710830d0f02e7,
          mid_getTAI_617450d859ecaf8d,
          mid_getTCB_0a0f63c3aa49765d,
          mid_getTCG_d96035eea3611111,
          mid_getTDB_cfeb575714faef31,
          mid_getTT_3b674fc7b42c8f62,
          mid_getUT1_0287466dc96c535a,
          mid_getUTC_bdbc31f45ed399a7,
          mid_pythonDecRef_ff7cb6c242604316,
          mid_pythonExtension_42c72b98e3c2e08a,
          mid_pythonExtension_f5bbab7e97879358,
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
