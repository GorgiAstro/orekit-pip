#ifndef org_orekit_time_PythonAbstractTimeScales_H
#define org_orekit_time_PythonAbstractTimeScales_H

#include "org/orekit/time/AbstractTimeScales.h"

namespace org {
  namespace orekit {
    namespace time {
      class TDBScale;
      class GLONASSScale;
      class IRNSSScale;
      class TCGScale;
      class TAIScale;
      class UT1Scale;
      class TCBScale;
      class GPSScale;
      class BDTScale;
      class TTScale;
      class UTCScale;
      class GalileoScale;
      class QZSSScale;
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
  namespace lang {
    class Throwable;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace time {

      class PythonAbstractTimeScales : public ::org::orekit::time::AbstractTimeScales {
       public:
        enum {
          mid_init$_a1fa5dae97ea5ed2,
          mid_finalize_a1fa5dae97ea5ed2,
          mid_getBDT_e66ecc29d9b0858a,
          mid_getEopHistory_a77e9d6bc0da2439,
          mid_getGLONASS_75a06d4a3e06af34,
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
          mid_getUTC_1e4acbbebd50858e,
          mid_pythonDecRef_a1fa5dae97ea5ed2,
          mid_pythonExtension_6c0ce7e438e5ded4,
          mid_pythonExtension_3d7dd2314a0dd456,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit PythonAbstractTimeScales(jobject obj) : ::org::orekit::time::AbstractTimeScales(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        PythonAbstractTimeScales(const PythonAbstractTimeScales& obj) : ::org::orekit::time::AbstractTimeScales(obj) {}

        PythonAbstractTimeScales();

        void finalize() const;
        ::org::orekit::time::BDTScale getBDT() const;
        ::org::orekit::frames::EOPHistory getEopHistory(const ::org::orekit::utils::IERSConventions &, jboolean) const;
        ::org::orekit::time::GLONASSScale getGLONASS() const;
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
        ::org::orekit::time::UTCScale getUTC() const;
        void pythonDecRef() const;
        jlong pythonExtension() const;
        void pythonExtension(jlong) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace time {
      extern PyType_Def PY_TYPE_DEF(PythonAbstractTimeScales);
      extern PyTypeObject *PY_TYPE(PythonAbstractTimeScales);

      class t_PythonAbstractTimeScales {
      public:
        PyObject_HEAD
        PythonAbstractTimeScales object;
        static PyObject *wrap_Object(const PythonAbstractTimeScales&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
