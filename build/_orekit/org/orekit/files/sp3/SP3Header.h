#ifndef org_orekit_files_sp3_SP3Header_H
#define org_orekit_files_sp3_SP3Header_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sp3 {
        class DataUsed;
        class SP3OrbitType;
        class SP3FileType;
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
            mid_init$_0640e6acf969ed28,
            mid_addComment_f5ffdf29129ef90a,
            mid_addSatId_f5ffdf29129ef90a,
            mid_getAccuracy_071554b5f5a6b17b,
            mid_getAgency_3cffd47377eca18a,
            mid_getClockBase_557b8123390d8d0c,
            mid_getComments_0d9551367f7ecdef,
            mid_getCoordinateSystem_3cffd47377eca18a,
            mid_getDataUsed_0d9551367f7ecdef,
            mid_getDayFraction_557b8123390d8d0c,
            mid_getEpoch_7a97f7e149e79afb,
            mid_getEpochInterval_557b8123390d8d0c,
            mid_getFilter_6c4898d6ec0c3837,
            mid_getGpsWeek_412668abc8d889e9,
            mid_getModifiedJulianDay_412668abc8d889e9,
            mid_getNumberOfEpochs_412668abc8d889e9,
            mid_getOrbitType_19c13bdb82a38cf9,
            mid_getOrbitTypeKey_3cffd47377eca18a,
            mid_getPosVelBase_557b8123390d8d0c,
            mid_getSatIds_0d9551367f7ecdef,
            mid_getSecondsOfWeek_557b8123390d8d0c,
            mid_getTimeSystem_2700635415605e4d,
            mid_getType_faaa7ea236497595,
            mid_getVersion_d156d1ce330f6993,
            mid_setAccuracy_89aad365fb0ed8da,
            mid_setAgency_f5ffdf29129ef90a,
            mid_setClockBase_10f281d777284cea,
            mid_setCoordinateSystem_f5ffdf29129ef90a,
            mid_setDataUsed_4ccaedadb068bdeb,
            mid_setDayFraction_10f281d777284cea,
            mid_setEpoch_20affcbd28542333,
            mid_setEpochInterval_10f281d777284cea,
            mid_setFilter_fd4d3944a3fb1083,
            mid_setGpsWeek_a3da1a935cb37f7b,
            mid_setModifiedJulianDay_a3da1a935cb37f7b,
            mid_setNumberOfEpochs_a3da1a935cb37f7b,
            mid_setOrbitTypeKey_f5ffdf29129ef90a,
            mid_setPosVelBase_10f281d777284cea,
            mid_setSecondsOfWeek_10f281d777284cea,
            mid_setTimeSystem_562aaa7511f66c1c,
            mid_setType_b0728a16c85fc53b,
            mid_setVersion_102587d250c3217b,
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
