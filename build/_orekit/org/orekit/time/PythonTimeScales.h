#ifndef org_orekit_time_PythonTimeScales_H
#define org_orekit_time_PythonTimeScales_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class TTScale;
      class TAIScale;
      class GMSTScale;
      class GLONASSScale;
      class UT1Scale;
      class IRNSSScale;
      class TDBScale;
      class AbsoluteDate;
      class BDTScale;
      class UTCScale;
      class GPSScale;
      class TimeScales;
      class GalileoScale;
      class QZSSScale;
      class TCBScale;
      class TCGScale;
    }
    namespace utils {
      class IERSConventions;
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

      class PythonTimeScales : public ::java::lang::Object {
       public:
        enum {
          mid_init$_0640e6acf969ed28,
          mid_createBesselianEpoch_8ef471ef852a9678,
          mid_createJulianEpoch_8ef471ef852a9678,
          mid_finalize_0640e6acf969ed28,
          mid_getBDT_9391834b1a937fd3,
          mid_getBeidouEpoch_7a97f7e149e79afb,
          mid_getCcsdsEpoch_7a97f7e149e79afb,
          mid_getFiftiesEpoch_7a97f7e149e79afb,
          mid_getFutureInfinity_7a97f7e149e79afb,
          mid_getGLONASS_237364a28a8cf0b4,
          mid_getGMST_265dd6a5eaf62dee,
          mid_getGPS_0cd5c45ac1466124,
          mid_getGST_3eb0a3a9b450fe42,
          mid_getGalileoEpoch_7a97f7e149e79afb,
          mid_getGlonassEpoch_7a97f7e149e79afb,
          mid_getGpsEpoch_7a97f7e149e79afb,
          mid_getIRNSS_64d2db466ba002ef,
          mid_getIrnssEpoch_7a97f7e149e79afb,
          mid_getJ2000Epoch_7a97f7e149e79afb,
          mid_getJavaEpoch_7a97f7e149e79afb,
          mid_getJulianEpoch_7a97f7e149e79afb,
          mid_getModifiedJulianEpoch_7a97f7e149e79afb,
          mid_getPastInfinity_7a97f7e149e79afb,
          mid_getQZSS_513baddf28d44704,
          mid_getQzssEpoch_7a97f7e149e79afb,
          mid_getTAI_d5c1bf5214e95dd6,
          mid_getTCB_1561497728a78b6a,
          mid_getTCG_2cdd0fa7c8f02aa9,
          mid_getTDB_777ef8538a45134b,
          mid_getTT_f6e670da699ff3f8,
          mid_getUT1_672057b4f848abf0,
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

        explicit PythonTimeScales(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        PythonTimeScales(const PythonTimeScales& obj) : ::java::lang::Object(obj) {}

        PythonTimeScales();

        ::org::orekit::time::AbsoluteDate createBesselianEpoch(jdouble) const;
        ::org::orekit::time::AbsoluteDate createJulianEpoch(jdouble) const;
        void finalize() const;
        ::org::orekit::time::BDTScale getBDT() const;
        ::org::orekit::time::AbsoluteDate getBeidouEpoch() const;
        ::org::orekit::time::AbsoluteDate getCcsdsEpoch() const;
        ::org::orekit::time::AbsoluteDate getFiftiesEpoch() const;
        ::org::orekit::time::AbsoluteDate getFutureInfinity() const;
        ::org::orekit::time::GLONASSScale getGLONASS() const;
        ::org::orekit::time::GMSTScale getGMST(const ::org::orekit::utils::IERSConventions &, jboolean) const;
        ::org::orekit::time::GPSScale getGPS() const;
        ::org::orekit::time::GalileoScale getGST() const;
        ::org::orekit::time::AbsoluteDate getGalileoEpoch() const;
        ::org::orekit::time::AbsoluteDate getGlonassEpoch() const;
        ::org::orekit::time::AbsoluteDate getGpsEpoch() const;
        ::org::orekit::time::IRNSSScale getIRNSS() const;
        ::org::orekit::time::AbsoluteDate getIrnssEpoch() const;
        ::org::orekit::time::AbsoluteDate getJ2000Epoch() const;
        ::org::orekit::time::AbsoluteDate getJavaEpoch() const;
        ::org::orekit::time::AbsoluteDate getJulianEpoch() const;
        ::org::orekit::time::AbsoluteDate getModifiedJulianEpoch() const;
        ::org::orekit::time::AbsoluteDate getPastInfinity() const;
        ::org::orekit::time::QZSSScale getQZSS() const;
        ::org::orekit::time::AbsoluteDate getQzssEpoch() const;
        ::org::orekit::time::TAIScale getTAI() const;
        ::org::orekit::time::TCBScale getTCB() const;
        ::org::orekit::time::TCGScale getTCG() const;
        ::org::orekit::time::TDBScale getTDB() const;
        ::org::orekit::time::TTScale getTT() const;
        ::org::orekit::time::UT1Scale getUT1(const ::org::orekit::utils::IERSConventions &, jboolean) const;
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
      extern PyType_Def PY_TYPE_DEF(PythonTimeScales);
      extern PyTypeObject *PY_TYPE(PythonTimeScales);

      class t_PythonTimeScales {
      public:
        PyObject_HEAD
        PythonTimeScales object;
        static PyObject *wrap_Object(const PythonTimeScales&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
