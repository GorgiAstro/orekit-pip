#ifndef org_orekit_files_sinex_Station_H
#define org_orekit_files_sinex_Station_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
        }
      }
    }
  }
  namespace orekit {
    namespace utils {
      class TimeSpanMap;
    }
    namespace files {
      namespace sinex {
        class Station$ReferenceSystem;
      }
    }
    namespace time {
      class AbsoluteDate;
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
            mid_init$_a1fa5dae97ea5ed2,
            mid_addAntennaTypeValidAfter_69175f44c4278084,
            mid_addAntennaTypeValidBefore_69175f44c4278084,
            mid_addStationEccentricitiesValidAfter_a8075f582763156e,
            mid_addStationEccentricitiesValidBefore_a8075f582763156e,
            mid_getAntennaType_5b3583dbfd578a63,
            mid_getAntennaTypeTimeSpanMap_2f46b86c016957a0,
            mid_getDomes_1c1fa1e935d6cdcf,
            mid_getEccRefSystem_36b40b7b0806d684,
            mid_getEccentricities_082e6346b274f880,
            mid_getEccentricitiesTimeSpanMap_2f46b86c016957a0,
            mid_getEpoch_c325492395d89b24,
            mid_getPosition_8b724f8b4fdad1a2,
            mid_getSiteCode_1c1fa1e935d6cdcf,
            mid_getValidFrom_c325492395d89b24,
            mid_getValidUntil_c325492395d89b24,
            mid_getVelocity_8b724f8b4fdad1a2,
            mid_setDomes_734b91ac30d5f9b4,
            mid_setEccRefSystem_50e96aa7b370b203,
            mid_setEpoch_02135a6ef25adb4b,
            mid_setPosition_1844f891addbac57,
            mid_setSiteCode_734b91ac30d5f9b4,
            mid_setValidFrom_02135a6ef25adb4b,
            mid_setValidUntil_02135a6ef25adb4b,
            mid_setVelocity_1844f891addbac57,
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
