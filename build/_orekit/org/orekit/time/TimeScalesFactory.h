#ifndef org_orekit_time_TimeScalesFactory_H
#define org_orekit_time_TimeScalesFactory_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class TDBScale;
      class GLONASSScale;
      class IRNSSScale;
      class UT1Scale;
      class GMSTScale;
      class LazyLoadedTimeScales;
      class TTScale;
      class UTCTAIOffsetsLoader;
      class QZSSScale;
      class TAIScale;
      class TCBScale;
      class UTCScale;
      class TCGScale;
      class GPSScale;
      class BDTScale;
      class GalileoScale;
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
          mid_addDefaultUTCTAIOffsetsLoaders_a1fa5dae97ea5ed2,
          mid_addUTCTAIOffsetsLoader_1237785d9625f10b,
          mid_clearUTCTAIOffsetsLoaders_a1fa5dae97ea5ed2,
          mid_getBDT_e66ecc29d9b0858a,
          mid_getGLONASS_75a06d4a3e06af34,
          mid_getGMST_375ab849f7e3d9ee,
          mid_getGPS_a74060fc815076a7,
          mid_getGST_935fd284aa6ccd53,
          mid_getIRNSS_d7fbef15a3374e78,
          mid_getQZSS_f801e6f0b9a78872,
          mid_getTAI_700cdb40469496d6,
          mid_getTCB_e0443055c5547bea,
          mid_getTCG_9ccd709f9ae42bbc,
          mid_getTDB_61ba58ac615801fa,
          mid_getTT_68d743a8c670f6cb,
          mid_getTimeScales_aca7b99124f1f289,
          mid_getUT1_0d98cf69977e0c28,
          mid_getUT1_246820b70f2cddeb,
          mid_getUTC_1e4acbbebd50858e,
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
