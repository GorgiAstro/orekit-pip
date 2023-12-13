#ifndef org_orekit_time_AbstractTimeScales_H
#define org_orekit_time_AbstractTimeScales_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace utils {
      class IERSConventions;
    }
    namespace time {
      class UT1Scale;
      class GMSTScale;
      class AbsoluteDate;
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
          mid_init$_a1fa5dae97ea5ed2,
          mid_createBesselianEpoch_f359a0110559347a,
          mid_createJulianEpoch_f359a0110559347a,
          mid_getBeidouEpoch_c325492395d89b24,
          mid_getCcsdsEpoch_c325492395d89b24,
          mid_getFiftiesEpoch_c325492395d89b24,
          mid_getFutureInfinity_c325492395d89b24,
          mid_getGMST_375ab849f7e3d9ee,
          mid_getGalileoEpoch_c325492395d89b24,
          mid_getGlonassEpoch_c325492395d89b24,
          mid_getGpsEpoch_c325492395d89b24,
          mid_getIrnssEpoch_c325492395d89b24,
          mid_getJ2000Epoch_c325492395d89b24,
          mid_getJavaEpoch_c325492395d89b24,
          mid_getJulianEpoch_c325492395d89b24,
          mid_getModifiedJulianEpoch_c325492395d89b24,
          mid_getPastInfinity_c325492395d89b24,
          mid_getQzssEpoch_c325492395d89b24,
          mid_getUT1_246820b70f2cddeb,
          mid_getUT1_0d98cf69977e0c28,
          mid_getEopHistory_a77e9d6bc0da2439,
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
