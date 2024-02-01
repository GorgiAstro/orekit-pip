#ifndef org_orekit_frames_EOPHistory_H
#define org_orekit_frames_EOPHistory_H

#include "java/lang/Object.h"

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
namespace org {
  namespace orekit {
    namespace utils {
      class IERSConventions;
    }
    namespace time {
      class AbsoluteDate;
      class FieldAbsoluteDate;
      class TimeScales;
    }
    namespace frames {
      class EOPEntry;
      class ITRFVersion;
      class FieldPoleCorrection;
      class PoleCorrection;
      class EOPHistory;
    }
  }
  namespace hipparchus {
    class CalculusFieldElement;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace frames {

      class EOPHistory : public ::java::lang::Object {
       public:
        enum {
          mid_init$_5f09d8608893e5f9,
          mid_cachesTidalCorrection_eee3de00fe971136,
          mid_checkEOPContinuity_1ad26e8c8c0cd65b,
          mid_getConventions_635853a14837ea6f,
          mid_getEOPHistoryWithoutCachedTidalCorrection_867110817f590882,
          mid_getEndDate_80e11148db499dda,
          mid_getEntries_d751c1a57012b438,
          mid_getEquinoxNutationCorrection_9b63d19c31941c0f,
          mid_getEquinoxNutationCorrection_977531d905f4ab3f,
          mid_getITRFVersion_6251f357bd0da5fd,
          mid_getInterpolationDegree_d6ab429752e7c267,
          mid_getLOD_209f08246d708042,
          mid_getLOD_cf010978f3c5a913,
          mid_getNonRotatinOriginNutationCorrection_9b63d19c31941c0f,
          mid_getNonRotatinOriginNutationCorrection_977531d905f4ab3f,
          mid_getPoleCorrection_b04b0c9b6ced5b0a,
          mid_getPoleCorrection_06a314d42c0939e2,
          mid_getStartDate_80e11148db499dda,
          mid_getTimeScales_796d09eb9f0f96ef,
          mid_getUT1MinusUTC_209f08246d708042,
          mid_getUT1MinusUTC_cf010978f3c5a913,
          mid_isSimpleEop_eee3de00fe971136,
          mid_getNeighbors_ad75bac85cbb88e7,
          mid_hasDataFor_b16e79ba1b2830a1,
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
