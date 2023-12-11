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
    namespace time {
      class FieldAbsoluteDate;
      class TimeScales;
      class AbsoluteDate;
    }
    namespace utils {
      class IERSConventions;
    }
    namespace frames {
      class FieldPoleCorrection;
      class EOPEntry;
      class ITRFVersion;
      class EOPHistory;
      class PoleCorrection;
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
          mid_init$_fab96ebbb42599e8,
          mid_cachesTidalCorrection_89b302893bdbe1f1,
          mid_checkEOPContinuity_10f281d777284cea,
          mid_getConventions_690653480c12ac72,
          mid_getEOPHistoryWithoutCachedTidalCorrection_9a64cc378cf7ab6b,
          mid_getEndDate_7a97f7e149e79afb,
          mid_getEntries_0d9551367f7ecdef,
          mid_getEquinoxNutationCorrection_89e8b78e4211e023,
          mid_getEquinoxNutationCorrection_f77452810420dd04,
          mid_getITRFVersion_df72f6fe6d5dd352,
          mid_getInterpolationDegree_412668abc8d889e9,
          mid_getLOD_b0b988f941da47d8,
          mid_getLOD_b884068a2c99f6ca,
          mid_getNonRotatinOriginNutationCorrection_89e8b78e4211e023,
          mid_getNonRotatinOriginNutationCorrection_f77452810420dd04,
          mid_getPoleCorrection_2c5aebecdb63e56e,
          mid_getPoleCorrection_edfb8c5443b93454,
          mid_getStartDate_7a97f7e149e79afb,
          mid_getTimeScales_ac9ef17f951ae11a,
          mid_getUT1MinusUTC_b0b988f941da47d8,
          mid_getUT1MinusUTC_b884068a2c99f6ca,
          mid_isSimpleEop_89b302893bdbe1f1,
          mid_hasDataFor_981023bfa4a8a093,
          mid_getNeighbors_b9470a4d1609cf1f,
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
