#ifndef org_orekit_files_sinex_Station_H
#define org_orekit_files_sinex_Station_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sinex {
        class Station$ReferenceSystem;
      }
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace utils {
      class TimeSpanMap;
    }
  }
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace sinex {

        class Station : public ::java::lang::Object {
         public:
          enum {
            mid_init$_ff7cb6c242604316,
            mid_addAntennaTypeValidAfter_4bcfb64f3a1ec56d,
            mid_addAntennaTypeValidBefore_4bcfb64f3a1ec56d,
            mid_addStationEccentricitiesValidAfter_35db6c8a69ba108a,
            mid_addStationEccentricitiesValidBefore_35db6c8a69ba108a,
            mid_getAntennaType_6989a51b7b3249aa,
            mid_getAntennaTypeTimeSpanMap_d11c7ec0e313e33d,
            mid_getDomes_d2c8eb4129821f0e,
            mid_getEccRefSystem_e94be7bb1cd54d88,
            mid_getEccentricities_8b37cafaaf55a3a5,
            mid_getEccentricitiesTimeSpanMap_d11c7ec0e313e33d,
            mid_getEpoch_80e11148db499dda,
            mid_getPosition_032312bdeb3f2f93,
            mid_getSiteCode_d2c8eb4129821f0e,
            mid_getValidFrom_80e11148db499dda,
            mid_getValidUntil_80e11148db499dda,
            mid_getVelocity_032312bdeb3f2f93,
            mid_setDomes_105e1eadb709d9ac,
            mid_setEccRefSystem_a2d3c26dd0bc26e3,
            mid_setEpoch_8497861b879c83f7,
            mid_setPosition_30f8886dfb88a63c,
            mid_setSiteCode_105e1eadb709d9ac,
            mid_setValidFrom_8497861b879c83f7,
            mid_setValidUntil_8497861b879c83f7,
            mid_setVelocity_30f8886dfb88a63c,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Station(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Station(const Station& obj) : ::java::lang::Object(obj) {}

          Station();

          void addAntennaTypeValidAfter(const ::java::lang::String &, const ::org::orekit::time::AbsoluteDate &) const;
          void addAntennaTypeValidBefore(const ::java::lang::String &, const ::org::orekit::time::AbsoluteDate &) const;
          void addStationEccentricitiesValidAfter(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::orekit::time::AbsoluteDate &) const;
          void addStationEccentricitiesValidBefore(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::orekit::time::AbsoluteDate &) const;
          ::java::lang::String getAntennaType(const ::org::orekit::time::AbsoluteDate &) const;
          ::org::orekit::utils::TimeSpanMap getAntennaTypeTimeSpanMap() const;
          ::java::lang::String getDomes() const;
          ::org::orekit::files::sinex::Station$ReferenceSystem getEccRefSystem() const;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D getEccentricities(const ::org::orekit::time::AbsoluteDate &) const;
          ::org::orekit::utils::TimeSpanMap getEccentricitiesTimeSpanMap() const;
          ::org::orekit::time::AbsoluteDate getEpoch() const;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D getPosition() const;
          ::java::lang::String getSiteCode() const;
          ::org::orekit::time::AbsoluteDate getValidFrom() const;
          ::org::orekit::time::AbsoluteDate getValidUntil() const;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D getVelocity() const;
          void setDomes(const ::java::lang::String &) const;
          void setEccRefSystem(const ::org::orekit::files::sinex::Station$ReferenceSystem &) const;
          void setEpoch(const ::org::orekit::time::AbsoluteDate &) const;
          void setPosition(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &) const;
          void setSiteCode(const ::java::lang::String &) const;
          void setValidFrom(const ::org::orekit::time::AbsoluteDate &) const;
          void setValidUntil(const ::org::orekit::time::AbsoluteDate &) const;
          void setVelocity(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace files {
      namespace sinex {
        extern PyType_Def PY_TYPE_DEF(Station);
        extern PyTypeObject *PY_TYPE(Station);

        class t_Station {
        public:
          PyObject_HEAD
          Station object;
          static PyObject *wrap_Object(const Station&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
