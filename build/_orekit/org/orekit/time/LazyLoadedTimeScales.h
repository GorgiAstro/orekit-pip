#ifndef org_orekit_time_LazyLoadedTimeScales_H
#define org_orekit_time_LazyLoadedTimeScales_H

#include "org/orekit/time/AbstractTimeScales.h"

namespace org {
  namespace orekit {
    namespace time {
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
          mid_init$_252e710e5a0593c8,
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
          mid_getUT1_7b22e00b4ab08eba,
          mid_getUT1_603d1058a5002a04,
          mid_getUTC_ed870393143e8ecb,
          mid_getEopHistory_7544a283da003d74,
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
