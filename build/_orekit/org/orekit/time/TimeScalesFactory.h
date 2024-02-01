#ifndef org_orekit_time_TimeScalesFactory_H
#define org_orekit_time_TimeScalesFactory_H

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
    namespace time {
      class UTCScale;
      class GalileoScale;
      class TDBScale;
      class IRNSSScale;
      class BDTScale;
      class LazyLoadedTimeScales;
      class UTCTAIOffsetsLoader;
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
    namespace frames {
      class EOPHistory;
    }
    namespace utils {
      class IERSConventions;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace time {

      class TimeScalesFactory : public ::java::lang::Object {
       public:
        enum {
          mid_addDefaultUTCTAIOffsetsLoaders_ff7cb6c242604316,
          mid_addUTCTAIOffsetsLoader_87c1680ac97bbb89,
          mid_clearUTCTAIOffsetsLoaders_ff7cb6c242604316,
          mid_getBDT_9d93fd70217d9218,
          mid_getGLONASS_98a4c7e041a431de,
          mid_getGMST_3a2e75d759160885,
          mid_getGPS_bfc706ac1880dab6,
          mid_getGST_03bea9e4eca66482,
          mid_getIRNSS_4011a9310ce86043,
          mid_getQZSS_af6710830d0f02e7,
          mid_getTAI_617450d859ecaf8d,
          mid_getTCB_0a0f63c3aa49765d,
          mid_getTCG_d96035eea3611111,
          mid_getTDB_cfeb575714faef31,
          mid_getTT_3b674fc7b42c8f62,
          mid_getTimeScales_0dcddb8d5df4bba7,
          mid_getUT1_0287466dc96c535a,
          mid_getUT1_ff99e037ad2c3870,
          mid_getUTC_bdbc31f45ed399a7,
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
