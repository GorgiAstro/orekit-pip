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
            mid_init$_0fa09c18fee449d5,
            mid_addAntennaTypeValidAfter_43c487dd457617b7,
            mid_addAntennaTypeValidBefore_43c487dd457617b7,
            mid_addStationEccentricitiesValidAfter_26d2928ac4ff52fb,
            mid_addStationEccentricitiesValidBefore_26d2928ac4ff52fb,
            mid_getAntennaType_22dfbc0bf613c8d6,
            mid_getAntennaTypeTimeSpanMap_62c7757711639c83,
            mid_getDomes_11b109bd155ca898,
            mid_getEccRefSystem_b49a536b596b207a,
            mid_getEccentricities_24461752d0eea1e3,
            mid_getEccentricitiesTimeSpanMap_62c7757711639c83,
            mid_getEpoch_85703d13e302437e,
            mid_getPosition_d52645e0d4c07563,
            mid_getSiteCode_11b109bd155ca898,
            mid_getValidFrom_85703d13e302437e,
            mid_getValidUntil_85703d13e302437e,
            mid_getVelocity_d52645e0d4c07563,
            mid_setDomes_d0bc48d5b00dc40c,
            mid_setEccRefSystem_bc949a69f75f8f6d,
            mid_setEpoch_600a2a61652bc473,
            mid_setPosition_029ff0cbf68ea054,
            mid_setSiteCode_d0bc48d5b00dc40c,
            mid_setValidFrom_600a2a61652bc473,
            mid_setValidUntil_600a2a61652bc473,
            mid_setVelocity_029ff0cbf68ea054,
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
