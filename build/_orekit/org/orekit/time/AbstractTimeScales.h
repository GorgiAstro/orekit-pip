#ifndef org_orekit_time_AbstractTimeScales_H
#define org_orekit_time_AbstractTimeScales_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class GMSTScale;
      class TimeScales;
      class UT1Scale;
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
          mid_init$_0fa09c18fee449d5,
          mid_createBesselianEpoch_149a9211a037d799,
          mid_createJulianEpoch_149a9211a037d799,
          mid_getBeidouEpoch_85703d13e302437e,
          mid_getCcsdsEpoch_85703d13e302437e,
          mid_getFiftiesEpoch_85703d13e302437e,
          mid_getFutureInfinity_85703d13e302437e,
          mid_getGMST_17da19434c6eaf77,
          mid_getGalileoEpoch_85703d13e302437e,
          mid_getGlonassEpoch_85703d13e302437e,
          mid_getGpsEpoch_85703d13e302437e,
          mid_getIrnssEpoch_85703d13e302437e,
          mid_getJ2000Epoch_85703d13e302437e,
          mid_getJavaEpoch_85703d13e302437e,
          mid_getJulianEpoch_85703d13e302437e,
          mid_getModifiedJulianEpoch_85703d13e302437e,
          mid_getPastInfinity_85703d13e302437e,
          mid_getQzssEpoch_85703d13e302437e,
          mid_getUT1_03564ba2f50e6e3b,
          mid_getUT1_9806ff584bac5289,
          mid_getEopHistory_f7b9f8d7c24d861d,
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
