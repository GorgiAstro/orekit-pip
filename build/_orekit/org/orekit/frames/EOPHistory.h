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
    namespace frames {
      class FieldPoleCorrection;
      class EOPEntry;
      class EOPHistory;
      class PoleCorrection;
      class ITRFVersion;
    }
    namespace time {
      class FieldAbsoluteDate;
      class AbsoluteDate;
      class TimeScales;
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
          mid_init$_e1d22f124694cefe,
          mid_cachesTidalCorrection_9ab94ac1dc23b105,
          mid_checkEOPContinuity_8ba9fe7a847cecad,
          mid_getConventions_53aaf70620a914af,
          mid_getEOPHistoryWithoutCachedTidalCorrection_f9d30be358d43685,
          mid_getEndDate_c325492395d89b24,
          mid_getEntries_e62d3bb06d56d7e3,
          mid_getEquinoxNutationCorrection_27b701db396ade01,
          mid_getEquinoxNutationCorrection_954ad4b53022f84b,
          mid_getITRFVersion_a8ff2358cca8c992,
          mid_getInterpolationDegree_55546ef6a647f39b,
          mid_getLOD_fd347811007a6ba3,
          mid_getLOD_140b8964300ddedf,
          mid_getNonRotatinOriginNutationCorrection_27b701db396ade01,
          mid_getNonRotatinOriginNutationCorrection_954ad4b53022f84b,
          mid_getPoleCorrection_a726f9782dce00d1,
          mid_getPoleCorrection_2c525218d1f29ffc,
          mid_getStartDate_c325492395d89b24,
          mid_getTimeScales_d1a571f8b033e2d3,
          mid_getUT1MinusUTC_fd347811007a6ba3,
          mid_getUT1MinusUTC_140b8964300ddedf,
          mid_isSimpleEop_9ab94ac1dc23b105,
          mid_getNeighbors_70177eb25c19b8d4,
          mid_hasDataFor_a35647bda2901f54,
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
