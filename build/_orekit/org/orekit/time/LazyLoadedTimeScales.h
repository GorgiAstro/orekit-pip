#ifndef org_orekit_time_LazyLoadedTimeScales_H
#define org_orekit_time_LazyLoadedTimeScales_H

#include "org/orekit/time/AbstractTimeScales.h"

namespace org {
  namespace orekit {
    namespace time {
      class UTCScale;
      class GalileoScale;
      class TDBScale;
      class IRNSSScale;
      class BDTScale;
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
          mid_init$_9a9df3f1eee81313,
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
          mid_getUT1_0287466dc96c535a,
          mid_getUT1_ff99e037ad2c3870,
          mid_getUTC_bdbc31f45ed399a7,
          mid_getEopHistory_5f3b1864e8a02d51,
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
