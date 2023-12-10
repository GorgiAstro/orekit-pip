#ifndef org_orekit_time_PythonAbstractTimeScales_H
#define org_orekit_time_PythonAbstractTimeScales_H

#include "org/orekit/time/AbstractTimeScales.h"

namespace org {
  namespace orekit {
    namespace time {
      class TCBScale;
      class TDBScale;
      class UTCScale;
      class UT1Scale;
      class GalileoScale;
      class QZSSScale;
      class GLONASSScale;
      class TTScale;
      class IRNSSScale;
      class TAIScale;
      class BDTScale;
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
          mid_init$_0fa09c18fee449d5,
          mid_finalize_0fa09c18fee449d5,
          mid_getBDT_fc0e10255fdb9359,
          mid_getEopHistory_f7b9f8d7c24d861d,
          mid_getGLONASS_2b4079449103a541,
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
          mid_getUTC_4611f4f4ac7b3711,
          mid_pythonDecRef_0fa09c18fee449d5,
          mid_pythonExtension_492808a339bfa35f,
          mid_pythonExtension_3a8e7649f31fdb20,
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
