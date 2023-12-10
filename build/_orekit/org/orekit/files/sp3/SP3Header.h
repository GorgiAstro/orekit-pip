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
    namespace gnss {
      class TimeSystem;
    }
    namespace files {
      namespace sp3 {
        class SP3OrbitType;
        class DataUsed;
        class SP3FileType;
      }
    }
    namespace utils {
      class CartesianDerivativesFilter;
    }
    namespace time {
      class AbsoluteDate;
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
            mid_init$_7ae3461a92a43152,
            mid_addComment_e939c6558ae8d313,
            mid_addSatId_e939c6558ae8d313,
            mid_getAccuracy_531dcf669f2059aa,
            mid_getAgency_0090f7797e403f43,
            mid_getClockBase_456d9a2f64d6b28d,
            mid_getComments_a6156df500549a58,
            mid_getCoordinateSystem_0090f7797e403f43,
            mid_getDataUsed_a6156df500549a58,
            mid_getDayFraction_456d9a2f64d6b28d,
            mid_getEpoch_aaa854c403487cf3,
            mid_getEpochInterval_456d9a2f64d6b28d,
            mid_getFilter_237181d932324188,
            mid_getGpsWeek_f2f64475e4580546,
            mid_getModifiedJulianDay_f2f64475e4580546,
            mid_getNumberOfEpochs_f2f64475e4580546,
            mid_getOrbitType_081c0433fb9a4be2,
            mid_getOrbitTypeKey_0090f7797e403f43,
            mid_getPosVelBase_456d9a2f64d6b28d,
            mid_getSatIds_a6156df500549a58,
            mid_getSecondsOfWeek_456d9a2f64d6b28d,
            mid_getTimeSystem_b58d3545739694ee,
            mid_getType_67cd54c93a5dcb88,
            mid_getVersion_29e026b9d068f1c7,
            mid_setAccuracy_987a5fb872043b12,
            mid_setAgency_e939c6558ae8d313,
            mid_setClockBase_77e0f9a1f260e2e5,
            mid_setCoordinateSystem_e939c6558ae8d313,
            mid_setDataUsed_65de9727799c5641,
            mid_setDayFraction_77e0f9a1f260e2e5,
            mid_setEpoch_e82d68cd9f886886,
            mid_setEpochInterval_77e0f9a1f260e2e5,
            mid_setFilter_8aadfa247de709c5,
            mid_setGpsWeek_0a2a1ac2721c0336,
            mid_setModifiedJulianDay_0a2a1ac2721c0336,
            mid_setNumberOfEpochs_0a2a1ac2721c0336,
            mid_setOrbitTypeKey_e939c6558ae8d313,
            mid_setPosVelBase_77e0f9a1f260e2e5,
            mid_setSecondsOfWeek_77e0f9a1f260e2e5,
            mid_setTimeSystem_4733fc8266dc541c,
            mid_setType_f761af605d43268b,
            mid_setVersion_be0046d7f7239695,
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
