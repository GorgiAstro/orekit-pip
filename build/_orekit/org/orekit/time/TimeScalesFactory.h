#ifndef org_orekit_time_TimeScalesFactory_H
#define org_orekit_time_TimeScalesFactory_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class TCBScale;
      class GMSTScale;
      class TAIScale;
      class TDBScale;
      class GalileoScale;
      class QZSSScale;
      class TTScale;
      class UTCScale;
      class IRNSSScale;
      class BDTScale;
      class LazyLoadedTimeScales;
      class UTCTAIOffsetsLoader;
      class UT1Scale;
      class GLONASSScale;
      class GPSScale;
      class TCGScale;
    }
    namespace frames {
      class EOPHistory;
    }
    namespace utils {
      class IERSConventions;
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
          mid_addDefaultUTCTAIOffsetsLoaders_0fa09c18fee449d5,
          mid_addUTCTAIOffsetsLoader_65100d031698831e,
          mid_clearUTCTAIOffsetsLoaders_0fa09c18fee449d5,
          mid_getBDT_fc0e10255fdb9359,
          mid_getGLONASS_2b4079449103a541,
          mid_getGMST_17da19434c6eaf77,
          mid_getGPS_9e1c13089038a5fa,
          mid_getGST_0569916ae20da9e6,
          mid_getIRNSS_acc0c9657c1b3fab,
          mid_getQZSS_b61358961d42527b,
          mid_getTAI_542013db907f5b2d,
          mid_getTCB_a36a736c24a84bc8,
          mid_getTCG_bc03267fa6cc0068,
          mid_getTDB_01a9b50b4c9899e0,
          mid_getTT_1cee2d27f65b3e44,
          mid_getTimeScales_81309dd1495ca0f7,
          mid_getUT1_9806ff584bac5289,
          mid_getUT1_03564ba2f50e6e3b,
          mid_getUTC_4611f4f4ac7b3711,
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
