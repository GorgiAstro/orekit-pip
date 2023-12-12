#ifndef org_orekit_time_TimeScalesFactory_H
#define org_orekit_time_TimeScalesFactory_H

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
      class BDTScale;
      class UTCScale;
      class UTCTAIOffsetsLoader;
      class GPSScale;
      class LazyLoadedTimeScales;
      class GalileoScale;
      class QZSSScale;
      class TCBScale;
      class TCGScale;
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
    namespace time {

      class TimeScalesFactory : public ::java::lang::Object {
       public:
        enum {
          mid_addDefaultUTCTAIOffsetsLoaders_0640e6acf969ed28,
          mid_addUTCTAIOffsetsLoader_e93935f5cbbffcd2,
          mid_clearUTCTAIOffsetsLoaders_0640e6acf969ed28,
          mid_getBDT_9391834b1a937fd3,
          mid_getGLONASS_237364a28a8cf0b4,
          mid_getGMST_265dd6a5eaf62dee,
          mid_getGPS_0cd5c45ac1466124,
          mid_getGST_3eb0a3a9b450fe42,
          mid_getIRNSS_64d2db466ba002ef,
          mid_getQZSS_513baddf28d44704,
          mid_getTAI_d5c1bf5214e95dd6,
          mid_getTCB_1561497728a78b6a,
          mid_getTCG_2cdd0fa7c8f02aa9,
          mid_getTDB_777ef8538a45134b,
          mid_getTT_f6e670da699ff3f8,
          mid_getTimeScales_52cbe31230c76b6b,
          mid_getUT1_c21aaa13d4f3f95e,
          mid_getUT1_672057b4f848abf0,
          mid_getUTC_81e037be1ebdb551,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit TimeScalesFactory(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        TimeScalesFactory(const TimeScalesFactory& obj) : ::java::lang::Object(obj) {}

        static void addDefaultUTCTAIOffsetsLoaders();
        static void addUTCTAIOffsetsLoader(const ::org::orekit::time::UTCTAIOffsetsLoader &);
        static void clearUTCTAIOffsetsLoaders();
        static ::org::orekit::time::BDTScale getBDT();
        static ::org::orekit::time::GLONASSScale getGLONASS();
        static ::org::orekit::time::GMSTScale getGMST(const ::org::orekit::utils::IERSConventions &, jboolean);
        static ::org::orekit::time::GPSScale getGPS();
        static ::org::orekit::time::GalileoScale getGST();
        static ::org::orekit::time::IRNSSScale getIRNSS();
        static ::org::orekit::time::QZSSScale getQZSS();
        static ::org::orekit::time::TAIScale getTAI();
        static ::org::orekit::time::TCBScale getTCB();
        static ::org::orekit::time::TCGScale getTCG();
        static ::org::orekit::time::TDBScale getTDB();
        static ::org::orekit::time::TTScale getTT();
        static ::org::orekit::time::LazyLoadedTimeScales getTimeScales();
        static ::org::orekit::time::UT1Scale getUT1(const ::org::orekit::frames::EOPHistory &);
        static ::org::orekit::time::UT1Scale getUT1(const ::org::orekit::utils::IERSConventions &, jboolean);
        static ::org::orekit::time::UTCScale getUTC();
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace time {
      extern PyType_Def PY_TYPE_DEF(TimeScalesFactory);
      extern PyTypeObject *PY_TYPE(TimeScalesFactory);

      class t_TimeScalesFactory {
      public:
        PyObject_HEAD
        TimeScalesFactory object;
        static PyObject *wrap_Object(const TimeScalesFactory&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
