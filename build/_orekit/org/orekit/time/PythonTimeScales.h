#ifndef org_orekit_time_PythonTimeScales_H
#define org_orekit_time_PythonTimeScales_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class TDBScale;
      class GLONASSScale;
      class IRNSSScale;
      class UT1Scale;
      class GMSTScale;
      class TTScale;
      class QZSSScale;
      class TAIScale;
      class TCBScale;
      class UTCScale;
      class TimeScales;
      class TCGScale;
      class GPSScale;
      class BDTScale;
      class AbsoluteDate;
      class GalileoScale;
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

      class PythonTimeScales : public ::java::lang::Object {
       public:
        enum {
          mid_init$_a1fa5dae97ea5ed2,
          mid_createBesselianEpoch_f359a0110559347a,
          mid_createJulianEpoch_f359a0110559347a,
          mid_finalize_a1fa5dae97ea5ed2,
          mid_getBDT_e66ecc29d9b0858a,
          mid_getBeidouEpoch_c325492395d89b24,
          mid_getCcsdsEpoch_c325492395d89b24,
          mid_getFiftiesEpoch_c325492395d89b24,
          mid_getFutureInfinity_c325492395d89b24,
          mid_getGLONASS_75a06d4a3e06af34,
          mid_getGMST_375ab849f7e3d9ee,
          mid_getGPS_a74060fc815076a7,
          mid_getGST_935fd284aa6ccd53,
          mid_getGalileoEpoch_c325492395d89b24,
          mid_getGlonassEpoch_c325492395d89b24,
          mid_getGpsEpoch_c325492395d89b24,
          mid_getIRNSS_d7fbef15a3374e78,
          mid_getIrnssEpoch_c325492395d89b24,
          mid_getJ2000Epoch_c325492395d89b24,
          mid_getJavaEpoch_c325492395d89b24,
          mid_getJulianEpoch_c325492395d89b24,
          mid_getModifiedJulianEpoch_c325492395d89b24,
          mid_getPastInfinity_c325492395d89b24,
          mid_getQZSS_f801e6f0b9a78872,
          mid_getQzssEpoch_c325492395d89b24,
          mid_getTAI_700cdb40469496d6,
          mid_getTCB_e0443055c5547bea,
          mid_getTCG_9ccd709f9ae42bbc,
          mid_getTDB_61ba58ac615801fa,
          mid_getTT_68d743a8c670f6cb,
          mid_getUT1_246820b70f2cddeb,
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

        explicit PythonTimeScales(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        PythonTimeScales(const PythonTimeScales& obj) : ::java::lang::Object(obj) {}

        PythonTimeScales();

        ::org::orekit::time::AbsoluteDate createBesselianEpoch(jdouble) const;
        ::org::orekit::time::AbsoluteDate createJulianEpoch(jdouble) const;
        void finalize() const;
        ::org::orekit::time::BDTScale getBDT() const;
        ::org::orekit::time::AbsoluteDate getBeidouEpoch() const;
        ::org::orekit::time::AbsoluteDate getCcsdsEpoch() const;
        ::org::orekit::time::AbsoluteDate getFiftiesEpoch() const;
        ::org::orekit::time::AbsoluteDate getFutureInfinity() const;
        ::org::orekit::time::GLONASSScale getGLONASS() const;
        ::org::orekit::time::GMSTScale getGMST(const ::org::orekit::utils::IERSConventions &, jboolean) const;
        ::org::orekit::time::GPSScale getGPS() const;
        ::org::orekit::time::GalileoScale getGST() const;
        ::org::orekit::time::AbsoluteDate getGalileoEpoch() const;
        ::org::orekit::time::AbsoluteDate getGlonassEpoch() const;
        ::org::orekit::time::AbsoluteDate getGpsEpoch() const;
        ::org::orekit::time::IRNSSScale getIRNSS() const;
        ::org::orekit::time::AbsoluteDate getIrnssEpoch() const;
        ::org::orekit::time::AbsoluteDate getJ2000Epoch() const;
        ::org::orekit::time::AbsoluteDate getJavaEpoch() const;
        ::org::orekit::time::AbsoluteDate getJulianEpoch() const;
        ::org::orekit::time::AbsoluteDate getModifiedJulianEpoch() const;
        ::org::orekit::time::AbsoluteDate getPastInfinity() const;
        ::org::orekit::time::QZSSScale getQZSS() const;
        ::org::orekit::time::AbsoluteDate getQzssEpoch() const;
        ::org::orekit::time::TAIScale getTAI() const;
        ::org::orekit::time::TCBScale getTCB() const;
        ::org::orekit::time::TCGScale getTCG() const;
        ::org::orekit::time::TDBScale getTDB() const;
        ::org::orekit::time::TTScale getTT() const;
        ::org::orekit::time::UT1Scale getUT1(const ::org::orekit::utils::IERSConventions &, jboolean) const;
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
      extern PyType_Def PY_TYPE_DEF(PythonTimeScales);
      extern PyTypeObject *PY_TYPE(PythonTimeScales);

      class t_PythonTimeScales {
      public:
        PyObject_HEAD
        PythonTimeScales object;
        static PyObject *wrap_Object(const PythonTimeScales&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
