#ifndef org_orekit_time_AbstractTimeScales_H
#define org_orekit_time_AbstractTimeScales_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace utils {
      class IERSConventions;
    }
    namespace time {
      class AbsoluteDate;
      class GMSTScale;
      class UT1Scale;
      class TimeScales;
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
          mid_init$_ff7cb6c242604316,
          mid_createBesselianEpoch_d2854c25a21df51f,
          mid_createJulianEpoch_d2854c25a21df51f,
          mid_getBeidouEpoch_80e11148db499dda,
          mid_getCcsdsEpoch_80e11148db499dda,
          mid_getFiftiesEpoch_80e11148db499dda,
          mid_getFutureInfinity_80e11148db499dda,
          mid_getGMST_3a2e75d759160885,
          mid_getGalileoEpoch_80e11148db499dda,
          mid_getGlonassEpoch_80e11148db499dda,
          mid_getGpsEpoch_80e11148db499dda,
          mid_getIrnssEpoch_80e11148db499dda,
          mid_getJ2000Epoch_80e11148db499dda,
          mid_getJavaEpoch_80e11148db499dda,
          mid_getJulianEpoch_80e11148db499dda,
          mid_getModifiedJulianEpoch_80e11148db499dda,
          mid_getPastInfinity_80e11148db499dda,
          mid_getQzssEpoch_80e11148db499dda,
          mid_getUT1_ff99e037ad2c3870,
          mid_getUT1_0287466dc96c535a,
          mid_getEopHistory_5f3b1864e8a02d51,
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
