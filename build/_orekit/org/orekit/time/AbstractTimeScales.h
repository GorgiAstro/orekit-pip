#ifndef org_orekit_time_AbstractTimeScales_H
#define org_orekit_time_AbstractTimeScales_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class GMSTScale;
      class UT1Scale;
      class TimeScales;
      class AbsoluteDate;
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

      class AbstractTimeScales : public ::java::lang::Object {
       public:
        enum {
          mid_init$_0640e6acf969ed28,
          mid_createBesselianEpoch_8ef471ef852a9678,
          mid_createJulianEpoch_8ef471ef852a9678,
          mid_getBeidouEpoch_7a97f7e149e79afb,
          mid_getCcsdsEpoch_7a97f7e149e79afb,
          mid_getFiftiesEpoch_7a97f7e149e79afb,
          mid_getFutureInfinity_7a97f7e149e79afb,
          mid_getGMST_265dd6a5eaf62dee,
          mid_getGalileoEpoch_7a97f7e149e79afb,
          mid_getGlonassEpoch_7a97f7e149e79afb,
          mid_getGpsEpoch_7a97f7e149e79afb,
          mid_getIrnssEpoch_7a97f7e149e79afb,
          mid_getJ2000Epoch_7a97f7e149e79afb,
          mid_getJavaEpoch_7a97f7e149e79afb,
          mid_getJulianEpoch_7a97f7e149e79afb,
          mid_getModifiedJulianEpoch_7a97f7e149e79afb,
          mid_getPastInfinity_7a97f7e149e79afb,
          mid_getQzssEpoch_7a97f7e149e79afb,
          mid_getUT1_672057b4f848abf0,
          mid_getUT1_c21aaa13d4f3f95e,
          mid_getEopHistory_9cf4a1ec2e53bbd3,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit AbstractTimeScales(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        AbstractTimeScales(const AbstractTimeScales& obj) : ::java::lang::Object(obj) {}

        AbstractTimeScales();

        ::org::orekit::time::AbsoluteDate createBesselianEpoch(jdouble) const;
        ::org::orekit::time::AbsoluteDate createJulianEpoch(jdouble) const;
        ::org::orekit::time::AbsoluteDate getBeidouEpoch() const;
        ::org::orekit::time::AbsoluteDate getCcsdsEpoch() const;
        ::org::orekit::time::AbsoluteDate getFiftiesEpoch() const;
        ::org::orekit::time::AbsoluteDate getFutureInfinity() const;
        ::org::orekit::time::GMSTScale getGMST(const ::org::orekit::utils::IERSConventions &, jboolean) const;
        ::org::orekit::time::AbsoluteDate getGalileoEpoch() const;
        ::org::orekit::time::AbsoluteDate getGlonassEpoch() const;
        ::org::orekit::time::AbsoluteDate getGpsEpoch() const;
        ::org::orekit::time::AbsoluteDate getIrnssEpoch() const;
        ::org::orekit::time::AbsoluteDate getJ2000Epoch() const;
        ::org::orekit::time::AbsoluteDate getJavaEpoch() const;
        ::org::orekit::time::AbsoluteDate getJulianEpoch() const;
        ::org::orekit::time::AbsoluteDate getModifiedJulianEpoch() const;
        ::org::orekit::time::AbsoluteDate getPastInfinity() const;
        ::org::orekit::time::AbsoluteDate getQzssEpoch() const;
        ::org::orekit::time::UT1Scale getUT1(const ::org::orekit::utils::IERSConventions &, jboolean) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace time {
      extern PyType_Def PY_TYPE_DEF(AbstractTimeScales);
      extern PyTypeObject *PY_TYPE(AbstractTimeScales);

      class t_AbstractTimeScales {
      public:
        PyObject_HEAD
        AbstractTimeScales object;
        static PyObject *wrap_Object(const AbstractTimeScales&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
