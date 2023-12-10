#ifndef org_orekit_time_TimeScales_H
#define org_orekit_time_TimeScales_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class UT1Scale;
      class GLONASSScale;
      class AbsoluteDate;
      class BDTScale;
      class UTCScale;
      class TTScale;
      class TDBScale;
      class TimeScales;
      class GPSScale;
      class QZSSScale;
      class OffsetModel;
      class TCBScale;
      class TCGScale;
      class TAIScale;
      class GalileoScale;
      class IRNSSScale;
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
          mid_createBesselianEpoch_a76f1ca2cc1b76e5,
          mid_createJulianEpoch_a76f1ca2cc1b76e5,
          mid_getBDT_deaa012966748070,
          mid_getBeidouEpoch_aaa854c403487cf3,
          mid_getCcsdsEpoch_aaa854c403487cf3,
          mid_getFiftiesEpoch_aaa854c403487cf3,
          mid_getFutureInfinity_aaa854c403487cf3,
          mid_getGLONASS_c91e99b6d55c6edd,
          mid_getGMST_9d529a30e942a554,
          mid_getGPS_c3529b957726f144,
          mid_getGST_11ee1ca64364e897,
          mid_getGalileoEpoch_aaa854c403487cf3,
          mid_getGlonassEpoch_aaa854c403487cf3,
          mid_getGpsEpoch_aaa854c403487cf3,
          mid_getIRNSS_ec0466e710e3daab,
          mid_getIrnssEpoch_aaa854c403487cf3,
          mid_getJ2000Epoch_aaa854c403487cf3,
          mid_getJavaEpoch_aaa854c403487cf3,
          mid_getJulianEpoch_aaa854c403487cf3,
          mid_getModifiedJulianEpoch_aaa854c403487cf3,
          mid_getPastInfinity_aaa854c403487cf3,
          mid_getQZSS_7f540f12419eda56,
          mid_getQzssEpoch_aaa854c403487cf3,
          mid_getTAI_9316322b62b6b656,
          mid_getTCB_2460e78d331af28f,
          mid_getTCG_30aeac15cc80b3c1,
          mid_getTDB_0bcc4110bc5be1d2,
          mid_getTT_9be074c5a298fe1e,
          mid_getUT1_603d1058a5002a04,
          mid_getUTC_ed870393143e8ecb,
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
