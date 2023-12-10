#ifndef org_orekit_frames_EOPHistory_H
#define org_orekit_frames_EOPHistory_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace frames {
      class EOPEntry;
      class EOPHistory;
      class ITRFVersion;
      class FieldPoleCorrection;
      class PoleCorrection;
    }
    namespace utils {
      class IERSConventions;
    }
    namespace time {
      class TimeScales;
      class AbsoluteDate;
      class FieldAbsoluteDate;
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
          mid_init$_4a3c17d419eb577d,
          mid_cachesTidalCorrection_b108b35ef48e27bd,
          mid_checkEOPContinuity_17db3a65980d3441,
          mid_getConventions_60f9ded87ab7ca4c,
          mid_getEOPHistoryWithoutCachedTidalCorrection_a75a6d9d92c81a5e,
          mid_getEndDate_85703d13e302437e,
          mid_getEntries_2afa36052df4765d,
          mid_getEquinoxNutationCorrection_2b9aa40de0a696a4,
          mid_getEquinoxNutationCorrection_1d12c7a27955163b,
          mid_getITRFVersion_7516dbdbd6368e44,
          mid_getInterpolationDegree_570ce0828f81a2c1,
          mid_getLOD_bf1d7732f1acb697,
          mid_getLOD_2a5f05be83ff251d,
          mid_getNonRotatinOriginNutationCorrection_2b9aa40de0a696a4,
          mid_getNonRotatinOriginNutationCorrection_1d12c7a27955163b,
          mid_getPoleCorrection_6d8f033f24b22917,
          mid_getPoleCorrection_78539f38afd6a92e,
          mid_getStartDate_85703d13e302437e,
          mid_getTimeScales_f0675560047d99cd,
          mid_getUT1MinusUTC_bf1d7732f1acb697,
          mid_getUT1MinusUTC_2a5f05be83ff251d,
          mid_isSimpleEop_b108b35ef48e27bd,
          mid_getNeighbors_a067290de6165283,
          mid_hasDataFor_db6d81809797ddaa,
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
