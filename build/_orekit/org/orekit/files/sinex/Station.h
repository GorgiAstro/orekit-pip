#ifndef org_orekit_files_sinex_Station_H
#define org_orekit_files_sinex_Station_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace utils {
      class TimeSpanMap;
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace files {
      namespace sinex {
        class Station$ReferenceSystem;
      }
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
            mid_init$_0640e6acf969ed28,
            mid_addAntennaTypeValidAfter_bcaa2ba21337a9a6,
            mid_addAntennaTypeValidBefore_bcaa2ba21337a9a6,
            mid_addStationEccentricitiesValidAfter_a17b72176d656894,
            mid_addStationEccentricitiesValidBefore_a17b72176d656894,
            mid_getAntennaType_4e0f3c605fbc7c96,
            mid_getAntennaTypeTimeSpanMap_d26bd874ee319049,
            mid_getDomes_3cffd47377eca18a,
            mid_getEccRefSystem_322bd3cfdf1910e8,
            mid_getEccentricities_3df461fe15362b2b,
            mid_getEccentricitiesTimeSpanMap_d26bd874ee319049,
            mid_getEpoch_7a97f7e149e79afb,
            mid_getPosition_f88961cca75a2c0a,
            mid_getSiteCode_3cffd47377eca18a,
            mid_getValidFrom_7a97f7e149e79afb,
            mid_getValidUntil_7a97f7e149e79afb,
            mid_getVelocity_f88961cca75a2c0a,
            mid_setDomes_f5ffdf29129ef90a,
            mid_setEccRefSystem_634c2865dd55aa0f,
            mid_setEpoch_20affcbd28542333,
            mid_setPosition_2810d2bec90e7b1c,
            mid_setSiteCode_f5ffdf29129ef90a,
            mid_setValidFrom_20affcbd28542333,
            mid_setValidUntil_20affcbd28542333,
            mid_setVelocity_2810d2bec90e7b1c,
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
