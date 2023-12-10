#ifndef org_orekit_time_TimeScales_H
#define org_orekit_time_TimeScales_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class TCBScale;
      class GMSTScale;
      class TimeScales;
      class AbsoluteDate;
      class TAIScale;
      class TDBScale;
      class GalileoScale;
      class QZSSScale;
      class TTScale;
      class UTCScale;
      class IRNSSScale;
      class BDTScale;
      class OffsetModel;
      class UT1Scale;
      class GLONASSScale;
      class GPSScale;
      class TCGScale;
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
          mid_createBesselianEpoch_149a9211a037d799,
          mid_createJulianEpoch_149a9211a037d799,
          mid_getBDT_fc0e10255fdb9359,
          mid_getBeidouEpoch_85703d13e302437e,
          mid_getCcsdsEpoch_85703d13e302437e,
          mid_getFiftiesEpoch_85703d13e302437e,
          mid_getFutureInfinity_85703d13e302437e,
          mid_getGLONASS_2b4079449103a541,
          mid_getGMST_17da19434c6eaf77,
          mid_getGPS_9e1c13089038a5fa,
          mid_getGST_0569916ae20da9e6,
          mid_getGalileoEpoch_85703d13e302437e,
          mid_getGlonassEpoch_85703d13e302437e,
          mid_getGpsEpoch_85703d13e302437e,
          mid_getIRNSS_acc0c9657c1b3fab,
          mid_getIrnssEpoch_85703d13e302437e,
          mid_getJ2000Epoch_85703d13e302437e,
          mid_getJavaEpoch_85703d13e302437e,
          mid_getJulianEpoch_85703d13e302437e,
          mid_getModifiedJulianEpoch_85703d13e302437e,
          mid_getPastInfinity_85703d13e302437e,
          mid_getQZSS_b61358961d42527b,
          mid_getQzssEpoch_85703d13e302437e,
          mid_getTAI_542013db907f5b2d,
          mid_getTCB_a36a736c24a84bc8,
          mid_getTCG_bc03267fa6cc0068,
          mid_getTDB_01a9b50b4c9899e0,
          mid_getTT_1cee2d27f65b3e44,
          mid_getUT1_03564ba2f50e6e3b,
          mid_getUTC_4611f4f4ac7b3711,
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
