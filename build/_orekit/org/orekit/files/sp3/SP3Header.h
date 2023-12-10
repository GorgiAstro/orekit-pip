#ifndef org_orekit_files_sp3_SP3Header_H
#define org_orekit_files_sp3_SP3Header_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace files {
      namespace sp3 {
        class SP3OrbitType;
        class DataUsed;
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
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace sp3 {

        class SP3Header : public ::java::lang::Object {
         public:
          enum {
            mid_init$_0fa09c18fee449d5,
            mid_addComment_d0bc48d5b00dc40c,
            mid_addSatId_d0bc48d5b00dc40c,
            mid_getAccuracy_b36dde1444e08956,
            mid_getAgency_11b109bd155ca898,
            mid_getClockBase_dff5885c2c873297,
            mid_getComments_2afa36052df4765d,
            mid_getCoordinateSystem_11b109bd155ca898,
            mid_getDataUsed_2afa36052df4765d,
            mid_getDayFraction_dff5885c2c873297,
            mid_getEpoch_85703d13e302437e,
            mid_getEpochInterval_dff5885c2c873297,
            mid_getFilter_16e9a7b5414faf2d,
            mid_getGpsWeek_570ce0828f81a2c1,
            mid_getModifiedJulianDay_570ce0828f81a2c1,
            mid_getNumberOfEpochs_570ce0828f81a2c1,
            mid_getOrbitType_a0014784875d2563,
            mid_getOrbitTypeKey_11b109bd155ca898,
            mid_getPosVelBase_dff5885c2c873297,
            mid_getSatIds_2afa36052df4765d,
            mid_getSecondsOfWeek_dff5885c2c873297,
            mid_getTimeSystem_47ed81afbc0cea8f,
            mid_getType_1b0144a14b3b7d4f,
            mid_getVersion_7818f5b58320cd1f,
            mid_setAccuracy_bb79ca80d85d0a66,
            mid_setAgency_d0bc48d5b00dc40c,
            mid_setClockBase_17db3a65980d3441,
            mid_setCoordinateSystem_d0bc48d5b00dc40c,
            mid_setDataUsed_de3e021e7266b71e,
            mid_setDayFraction_17db3a65980d3441,
            mid_setEpoch_600a2a61652bc473,
            mid_setEpochInterval_17db3a65980d3441,
            mid_setFilter_10d93bbae9f06624,
            mid_setGpsWeek_99803b0791f320ff,
            mid_setModifiedJulianDay_99803b0791f320ff,
            mid_setNumberOfEpochs_99803b0791f320ff,
            mid_setOrbitTypeKey_d0bc48d5b00dc40c,
            mid_setPosVelBase_17db3a65980d3441,
            mid_setSecondsOfWeek_17db3a65980d3441,
            mid_setTimeSystem_188d9681dd6fbe69,
            mid_setType_032acd332d70b501,
            mid_setVersion_636c0bbb96cab723,
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
