#ifndef org_orekit_files_sp3_SP3Header_H
#define org_orekit_files_sp3_SP3Header_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sp3 {
        class SP3OrbitType;
        class SP3FileType;
        class DataUsed;
      }
    }
    namespace gnss {
      class TimeSystem;
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace utils {
      class CartesianDerivativesFilter;
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace sp3 {

        class SP3Header : public ::java::lang::Object {
         public:
          enum {
            mid_init$_a1fa5dae97ea5ed2,
            mid_addComment_734b91ac30d5f9b4,
            mid_addSatId_734b91ac30d5f9b4,
            mid_getAccuracy_a84f304e8cd7ce1b,
            mid_getAgency_1c1fa1e935d6cdcf,
            mid_getClockBase_b74f83833fdad017,
            mid_getComments_e62d3bb06d56d7e3,
            mid_getCoordinateSystem_1c1fa1e935d6cdcf,
            mid_getDataUsed_e62d3bb06d56d7e3,
            mid_getDayFraction_b74f83833fdad017,
            mid_getEpoch_c325492395d89b24,
            mid_getEpochInterval_b74f83833fdad017,
            mid_getFilter_63bfdcc4b7a0536c,
            mid_getGpsWeek_55546ef6a647f39b,
            mid_getModifiedJulianDay_55546ef6a647f39b,
            mid_getNumberOfEpochs_55546ef6a647f39b,
            mid_getOrbitType_71c14ff93916aacc,
            mid_getOrbitTypeKey_1c1fa1e935d6cdcf,
            mid_getPosVelBase_b74f83833fdad017,
            mid_getSatIds_e62d3bb06d56d7e3,
            mid_getSecondsOfWeek_b74f83833fdad017,
            mid_getTimeSystem_28830357acffb3e1,
            mid_getType_ba422381bb7c60c3,
            mid_getVersion_5e2f8fc4d7c03fbd,
            mid_setAccuracy_d5322b8b512aeb26,
            mid_setAgency_734b91ac30d5f9b4,
            mid_setClockBase_8ba9fe7a847cecad,
            mid_setCoordinateSystem_734b91ac30d5f9b4,
            mid_setDataUsed_0e7c3032c7c93ed3,
            mid_setDayFraction_8ba9fe7a847cecad,
            mid_setEpoch_02135a6ef25adb4b,
            mid_setEpochInterval_8ba9fe7a847cecad,
            mid_setFilter_6ac810da33942183,
            mid_setGpsWeek_44ed599e93e8a30c,
            mid_setModifiedJulianDay_44ed599e93e8a30c,
            mid_setNumberOfEpochs_44ed599e93e8a30c,
            mid_setOrbitTypeKey_734b91ac30d5f9b4,
            mid_setPosVelBase_8ba9fe7a847cecad,
            mid_setSecondsOfWeek_8ba9fe7a847cecad,
            mid_setTimeSystem_885124f6a0a748ea,
            mid_setType_704e55a56e9bfadc,
            mid_setVersion_df95ad02f5b4acd9,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SP3Header(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SP3Header(const SP3Header& obj) : ::java::lang::Object(obj) {}

          static ::java::lang::String *SP3_FRAME_CENTER_STRING;

          SP3Header();

          void addComment(const ::java::lang::String &) const;
          void addSatId(const ::java::lang::String &) const;
          jdouble getAccuracy(const ::java::lang::String &) const;
          ::java::lang::String getAgency() const;
          jdouble getClockBase() const;
          ::java::util::List getComments() const;
          ::java::lang::String getCoordinateSystem() const;
          ::java::util::List getDataUsed() const;
          jdouble getDayFraction() const;
          ::org::orekit::time::AbsoluteDate getEpoch() const;
          jdouble getEpochInterval() const;
          ::org::orekit::utils::CartesianDerivativesFilter getFilter() const;
          jint getGpsWeek() const;
          jint getModifiedJulianDay() const;
          jint getNumberOfEpochs() const;
          ::org::orekit::files::sp3::SP3OrbitType getOrbitType() const;
          ::java::lang::String getOrbitTypeKey() const;
          jdouble getPosVelBase() const;
          ::java::util::List getSatIds() const;
          jdouble getSecondsOfWeek() const;
          ::org::orekit::gnss::TimeSystem getTimeSystem() const;
          ::org::orekit::files::sp3::SP3FileType getType() const;
          jchar getVersion() const;
          void setAccuracy(jint, jdouble) const;
          void setAgency(const ::java::lang::String &) const;
          void setClockBase(jdouble) const;
          void setCoordinateSystem(const ::java::lang::String &) const;
          void setDataUsed(const ::java::util::List &) const;
          void setDayFraction(jdouble) const;
          void setEpoch(const ::org::orekit::time::AbsoluteDate &) const;
          void setEpochInterval(jdouble) const;
          void setFilter(const ::org::orekit::utils::CartesianDerivativesFilter &) const;
          void setGpsWeek(jint) const;
          void setModifiedJulianDay(jint) const;
          void setNumberOfEpochs(jint) const;
          void setOrbitTypeKey(const ::java::lang::String &) const;
          void setPosVelBase(jdouble) const;
          void setSecondsOfWeek(jdouble) const;
          void setTimeSystem(const ::org::orekit::gnss::TimeSystem &) const;
          void setType(const ::org::orekit::files::sp3::SP3FileType &) const;
          void setVersion(jchar) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace files {
      namespace sp3 {
        extern PyType_Def PY_TYPE_DEF(SP3Header);
        extern PyTypeObject *PY_TYPE(SP3Header);

        class t_SP3Header {
        public:
          PyObject_HEAD
          SP3Header object;
          static PyObject *wrap_Object(const SP3Header&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
