#ifndef org_orekit_time_TimeScalesFactory_H
#define org_orekit_time_TimeScalesFactory_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class LazyLoadedTimeScales;
      class UT1Scale;
      class GLONASSScale;
      class BDTScale;
      class UTCScale;
      class TTScale;
      class UTCTAIOffsetsLoader;
      class TDBScale;
      class GPSScale;
      class QZSSScale;
      class TCBScale;
      class TCGScale;
      class TAIScale;
      class GalileoScale;
      class IRNSSScale;
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
          mid_addDefaultUTCTAIOffsetsLoaders_7ae3461a92a43152,
          mid_addUTCTAIOffsetsLoader_fd1ab7015414bef0,
          mid_clearUTCTAIOffsetsLoaders_7ae3461a92a43152,
          mid_getBDT_deaa012966748070,
          mid_getGLONASS_c91e99b6d55c6edd,
          mid_getGMST_9d529a30e942a554,
          mid_getGPS_c3529b957726f144,
          mid_getGST_11ee1ca64364e897,
          mid_getIRNSS_ec0466e710e3daab,
          mid_getQZSS_7f540f12419eda56,
          mid_getTAI_9316322b62b6b656,
          mid_getTCB_2460e78d331af28f,
          mid_getTCG_30aeac15cc80b3c1,
          mid_getTDB_0bcc4110bc5be1d2,
          mid_getTT_9be074c5a298fe1e,
          mid_getTimeScales_8c0eab743ddad863,
          mid_getUT1_7b22e00b4ab08eba,
          mid_getUT1_603d1058a5002a04,
          mid_getUTC_ed870393143e8ecb,
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
