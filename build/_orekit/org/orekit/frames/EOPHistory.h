#ifndef org_orekit_frames_EOPHistory_H
#define org_orekit_frames_EOPHistory_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class TimeScales;
      class FieldAbsoluteDate;
      class AbsoluteDate;
    }
    namespace frames {
      class FieldPoleCorrection;
      class PoleCorrection;
      class EOPEntry;
      class ITRFVersion;
      class EOPHistory;
    }
    namespace utils {
      class IERSConventions;
    }
  }
  namespace hipparchus {
    class CalculusFieldElement;
  }
}
namespace java {
  namespace util {
    class List;
    class Collection;
  }
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace frames {

      class EOPHistory : public ::java::lang::Object {
       public:
        enum {
          mid_init$_430599cedbcf6c87,
          mid_cachesTidalCorrection_e470b6d9e0d979db,
          mid_checkEOPContinuity_77e0f9a1f260e2e5,
          mid_getConventions_f657aa17e72227da,
          mid_getEOPHistoryWithoutCachedTidalCorrection_1266c6198e5d43dd,
          mid_getEndDate_aaa854c403487cf3,
          mid_getEntries_a6156df500549a58,
          mid_getEquinoxNutationCorrection_e586dea4c0bad69b,
          mid_getEquinoxNutationCorrection_263b2fd0cf81fe4d,
          mid_getITRFVersion_cd056b51a1bc8948,
          mid_getInterpolationDegree_f2f64475e4580546,
          mid_getLOD_e912d21057defe63,
          mid_getLOD_7bc0fd76ee915b72,
          mid_getNonRotatinOriginNutationCorrection_e586dea4c0bad69b,
          mid_getNonRotatinOriginNutationCorrection_263b2fd0cf81fe4d,
          mid_getPoleCorrection_8f1ef07ba316c64b,
          mid_getPoleCorrection_a500ed9d98c577f1,
          mid_getStartDate_aaa854c403487cf3,
          mid_getTimeScales_5912acf3bafa785f,
          mid_getUT1MinusUTC_e912d21057defe63,
          mid_getUT1MinusUTC_7bc0fd76ee915b72,
          mid_isSimpleEop_e470b6d9e0d979db,
          mid_getNeighbors_1f145bd0decc1d0c,
          mid_hasDataFor_ee2067c5768b6768,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit EOPHistory(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        EOPHistory(const EOPHistory& obj) : ::java::lang::Object(obj) {}

        static jint DEFAULT_INTERPOLATION_DEGREE;

        EOPHistory(const ::org::orekit::utils::IERSConventions &, jint, const ::java::util::Collection &, jboolean, const ::org::orekit::time::TimeScales &);

        jboolean cachesTidalCorrection() const;
        void checkEOPContinuity(jdouble) const;
        ::org::orekit::utils::IERSConventions getConventions() const;
        EOPHistory getEOPHistoryWithoutCachedTidalCorrection() const;
        ::org::orekit::time::AbsoluteDate getEndDate() const;
        ::java::util::List getEntries() const;
        JArray< jdouble > getEquinoxNutationCorrection(const ::org::orekit::time::AbsoluteDate &) const;
        JArray< ::org::hipparchus::CalculusFieldElement > getEquinoxNutationCorrection(const ::org::orekit::time::FieldAbsoluteDate &) const;
        ::org::orekit::frames::ITRFVersion getITRFVersion(const ::org::orekit::time::AbsoluteDate &) const;
        jint getInterpolationDegree() const;
        jdouble getLOD(const ::org::orekit::time::AbsoluteDate &) const;
        ::org::hipparchus::CalculusFieldElement getLOD(const ::org::orekit::time::FieldAbsoluteDate &) const;
        JArray< jdouble > getNonRotatinOriginNutationCorrection(const ::org::orekit::time::AbsoluteDate &) const;
        JArray< ::org::hipparchus::CalculusFieldElement > getNonRotatinOriginNutationCorrection(const ::org::orekit::time::FieldAbsoluteDate &) const;
        ::org::orekit::frames::PoleCorrection getPoleCorrection(const ::org::orekit::time::AbsoluteDate &) const;
        ::org::orekit::frames::FieldPoleCorrection getPoleCorrection(const ::org::orekit::time::FieldAbsoluteDate &) const;
        ::org::orekit::time::AbsoluteDate getStartDate() const;
        ::org::orekit::time::TimeScales getTimeScales() const;
        jdouble getUT1MinusUTC(const ::org::orekit::time::AbsoluteDate &) const;
        ::org::hipparchus::CalculusFieldElement getUT1MinusUTC(const ::org::orekit::time::FieldAbsoluteDate &) const;
        jboolean isSimpleEop() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace frames {
      extern PyType_Def PY_TYPE_DEF(EOPHistory);
      extern PyTypeObject *PY_TYPE(EOPHistory);

      class t_EOPHistory {
      public:
        PyObject_HEAD
        EOPHistory object;
        static PyObject *wrap_Object(const EOPHistory&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
