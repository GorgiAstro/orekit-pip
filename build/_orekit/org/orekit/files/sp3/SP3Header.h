#ifndef org_orekit_files_sp3_SP3Header_H
#define org_orekit_files_sp3_SP3Header_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sp3 {
        class DataUsed;
        class SP3FileType;
        class SP3OrbitType;
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
            mid_init$_ff7cb6c242604316,
            mid_addComment_105e1eadb709d9ac,
            mid_addSatId_105e1eadb709d9ac,
            mid_getAccuracy_f2fc085ab82846a3,
            mid_getAgency_d2c8eb4129821f0e,
            mid_getClockBase_9981f74b2d109da6,
            mid_getComments_d751c1a57012b438,
            mid_getCoordinateSystem_d2c8eb4129821f0e,
            mid_getDataUsed_d751c1a57012b438,
            mid_getDayFraction_9981f74b2d109da6,
            mid_getEpoch_80e11148db499dda,
            mid_getEpochInterval_9981f74b2d109da6,
            mid_getFilter_b9dfc27d8c56b5de,
            mid_getGpsWeek_d6ab429752e7c267,
            mid_getModifiedJulianDay_d6ab429752e7c267,
            mid_getNumberOfEpochs_d6ab429752e7c267,
            mid_getOrbitType_e13a2b7345fcaf41,
            mid_getOrbitTypeKey_d2c8eb4129821f0e,
            mid_getPosVelBase_9981f74b2d109da6,
            mid_getSatIds_d751c1a57012b438,
            mid_getSecondsOfWeek_9981f74b2d109da6,
            mid_getTimeSystem_6110a08bedf3a63d,
            mid_getType_a2d6e1be56280ac0,
            mid_getVersion_153df32fe8b51cb6,
            mid_setAccuracy_4320462275d66e78,
            mid_setAgency_105e1eadb709d9ac,
            mid_setClockBase_1ad26e8c8c0cd65b,
            mid_setCoordinateSystem_105e1eadb709d9ac,
            mid_setDataUsed_aa335fea495d60e0,
            mid_setDayFraction_1ad26e8c8c0cd65b,
            mid_setEpoch_8497861b879c83f7,
            mid_setEpochInterval_1ad26e8c8c0cd65b,
            mid_setFilter_b30f5228e357f0be,
            mid_setGpsWeek_8fd427ab23829bf5,
            mid_setModifiedJulianDay_8fd427ab23829bf5,
            mid_setNumberOfEpochs_8fd427ab23829bf5,
            mid_setOrbitTypeKey_105e1eadb709d9ac,
            mid_setPosVelBase_1ad26e8c8c0cd65b,
            mid_setSecondsOfWeek_1ad26e8c8c0cd65b,
            mid_setTimeSystem_70481f478101edcd,
            mid_setType_26e576b6c2fe990c,
            mid_setVersion_e8d07df586815a42,
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
