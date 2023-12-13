#ifndef org_orekit_time_LazyLoadedTimeScales_H
#define org_orekit_time_LazyLoadedTimeScales_H

#include "org/orekit/time/AbstractTimeScales.h"

namespace org {
  namespace orekit {
    namespace time {
      class TDBScale;
      class GLONASSScale;
      class IRNSSScale;
      class UT1Scale;
      class GMSTScale;
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
      class LazyLoadedEop;
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
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace time {

      class LazyLoadedTimeScales : public ::org::orekit::time::AbstractTimeScales {
       public:
        enum {
          mid_init$_69b9330e9509abf7,
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
          mid_getUT1_0d98cf69977e0c28,
          mid_getUT1_246820b70f2cddeb,
          mid_getUTC_1e4acbbebd50858e,
          mid_getEopHistory_a77e9d6bc0da2439,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit LazyLoadedTimeScales(jobject obj) : ::org::orekit::time::AbstractTimeScales(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        LazyLoadedTimeScales(const LazyLoadedTimeScales& obj) : ::org::orekit::time::AbstractTimeScales(obj) {}

        LazyLoadedTimeScales(const ::org::orekit::frames::LazyLoadedEop &);

        void addDefaultUTCTAIOffsetsLoaders() const;
        void addUTCTAIOffsetsLoader(const ::org::orekit::time::UTCTAIOffsetsLoader &) const;
        void clearUTCTAIOffsetsLoaders() const;
        ::org::orekit::time::BDTScale getBDT() const;
        ::org::orekit::time::GLONASSScale getGLONASS() const;
        ::org::orekit::time::GMSTScale getGMST(const ::org::orekit::utils::IERSConventions &, jboolean) const;
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
      extern PyType_Def PY_TYPE_DEF(LazyLoadedTimeScales);
      extern PyTypeObject *PY_TYPE(LazyLoadedTimeScales);

      class t_LazyLoadedTimeScales {
      public:
        PyObject_HEAD
        LazyLoadedTimeScales object;
        static PyObject *wrap_Object(const LazyLoadedTimeScales&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
