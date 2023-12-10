#ifndef org_orekit_time_LazyLoadedTimeScales_H
#define org_orekit_time_LazyLoadedTimeScales_H

#include "org/orekit/time/AbstractTimeScales.h"

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
      class UTCTAIOffsetsLoader;
      class UT1Scale;
      class GLONASSScale;
      class GPSScale;
      class TCGScale;
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
          mid_init$_3a1eaf6addd91fd6,
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
          mid_getUT1_9806ff584bac5289,
          mid_getUT1_03564ba2f50e6e3b,
          mid_getUTC_4611f4f4ac7b3711,
          mid_getEopHistory_f7b9f8d7c24d861d,
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
