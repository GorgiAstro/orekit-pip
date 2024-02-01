#ifndef org_orekit_time_TimeScales_H
#define org_orekit_time_TimeScales_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
      class UTCScale;
      class GalileoScale;
      class TimeScales;
      class TDBScale;
      class OffsetModel;
      class IRNSSScale;
      class BDTScale;
      class QZSSScale;
      class TCBScale;
      class GLONASSScale;
      class TTScale;
      class UT1Scale;
      class TCGScale;
      class GPSScale;
      class TAIScale;
      class GMSTScale;
    }
    namespace utils {
      class IERSConventions;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace util {
    class Collection;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace time {

      class TimeScales : public ::java::lang::Object {
       public:
        enum {
          mid_createBesselianEpoch_d2854c25a21df51f,
          mid_createJulianEpoch_d2854c25a21df51f,
          mid_getBDT_9d93fd70217d9218,
          mid_getBeidouEpoch_80e11148db499dda,
          mid_getCcsdsEpoch_80e11148db499dda,
          mid_getFiftiesEpoch_80e11148db499dda,
          mid_getFutureInfinity_80e11148db499dda,
          mid_getGLONASS_98a4c7e041a431de,
          mid_getGMST_3a2e75d759160885,
          mid_getGPS_bfc706ac1880dab6,
          mid_getGST_03bea9e4eca66482,
          mid_getGalileoEpoch_80e11148db499dda,
          mid_getGlonassEpoch_80e11148db499dda,
          mid_getGpsEpoch_80e11148db499dda,
          mid_getIRNSS_4011a9310ce86043,
          mid_getIrnssEpoch_80e11148db499dda,
          mid_getJ2000Epoch_80e11148db499dda,
          mid_getJavaEpoch_80e11148db499dda,
          mid_getJulianEpoch_80e11148db499dda,
          mid_getModifiedJulianEpoch_80e11148db499dda,
          mid_getPastInfinity_80e11148db499dda,
          mid_getQZSS_af6710830d0f02e7,
          mid_getQzssEpoch_80e11148db499dda,
          mid_getTAI_617450d859ecaf8d,
          mid_getTCB_0a0f63c3aa49765d,
          mid_getTCG_d96035eea3611111,
          mid_getTDB_cfeb575714faef31,
          mid_getTT_3b674fc7b42c8f62,
          mid_getUT1_ff99e037ad2c3870,
          mid_getUTC_bdbc31f45ed399a7,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit TimeScales(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        TimeScales(const TimeScales& obj) : ::java::lang::Object(obj) {}

        ::org::orekit::time::AbsoluteDate createBesselianEpoch(jdouble) const;
        ::org::orekit::time::AbsoluteDate createJulianEpoch(jdouble) const;
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
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace time {
      extern PyType_Def PY_TYPE_DEF(TimeScales);
      extern PyTypeObject *PY_TYPE(TimeScales);

      class t_TimeScales {
      public:
        PyObject_HEAD
        TimeScales object;
        static PyObject *wrap_Object(const TimeScales&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
