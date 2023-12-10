#ifndef org_orekit_time_AbstractTimeScales_H
#define org_orekit_time_AbstractTimeScales_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class TimeScales;
      class UT1Scale;
      class AbsoluteDate;
      class GMSTScale;
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
          mid_init$_7ae3461a92a43152,
          mid_createBesselianEpoch_a76f1ca2cc1b76e5,
          mid_createJulianEpoch_a76f1ca2cc1b76e5,
          mid_getBeidouEpoch_aaa854c403487cf3,
          mid_getCcsdsEpoch_aaa854c403487cf3,
          mid_getFiftiesEpoch_aaa854c403487cf3,
          mid_getFutureInfinity_aaa854c403487cf3,
          mid_getGMST_9d529a30e942a554,
          mid_getGalileoEpoch_aaa854c403487cf3,
          mid_getGlonassEpoch_aaa854c403487cf3,
          mid_getGpsEpoch_aaa854c403487cf3,
          mid_getIrnssEpoch_aaa854c403487cf3,
          mid_getJ2000Epoch_aaa854c403487cf3,
          mid_getJavaEpoch_aaa854c403487cf3,
          mid_getJulianEpoch_aaa854c403487cf3,
          mid_getModifiedJulianEpoch_aaa854c403487cf3,
          mid_getPastInfinity_aaa854c403487cf3,
          mid_getQzssEpoch_aaa854c403487cf3,
          mid_getUT1_603d1058a5002a04,
          mid_getUT1_7b22e00b4ab08eba,
          mid_getEopHistory_7544a283da003d74,
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
