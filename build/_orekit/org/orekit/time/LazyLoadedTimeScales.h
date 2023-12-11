#ifndef org_orekit_time_LazyLoadedTimeScales_H
#define org_orekit_time_LazyLoadedTimeScales_H

#include "org/orekit/time/AbstractTimeScales.h"

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
      class GalileoScale;
      class QZSSScale;
      class TCBScale;
      class TCGScale;
    }
    namespace frames {
      class LazyLoadedEop;
      class EOPHistory;
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
          mid_init$_e01fd964e5de5264,
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
          mid_getUT1_c21aaa13d4f3f95e,
          mid_getUT1_672057b4f848abf0,
          mid_getUTC_81e037be1ebdb551,
          mid_getEopHistory_9cf4a1ec2e53bbd3,
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
