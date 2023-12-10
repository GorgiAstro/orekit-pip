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
    namespace files {
      namespace sinex {
        class Station$ReferenceSystem;
      }
    }
    namespace utils {
      class TimeSpanMap;
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
            mid_init$_7ae3461a92a43152,
            mid_addAntennaTypeValidAfter_aaa3235462d82b75,
            mid_addAntennaTypeValidBefore_aaa3235462d82b75,
            mid_addStationEccentricitiesValidAfter_acc79527de855735,
            mid_addStationEccentricitiesValidBefore_acc79527de855735,
            mid_getAntennaType_f6573813807bab89,
            mid_getAntennaTypeTimeSpanMap_afbf756dd3c251fe,
            mid_getDomes_0090f7797e403f43,
            mid_getEccRefSystem_f10ce42652085eb3,
            mid_getEccentricities_71c51b45829333ce,
            mid_getEccentricitiesTimeSpanMap_afbf756dd3c251fe,
            mid_getEpoch_aaa854c403487cf3,
            mid_getPosition_17a952530a808943,
            mid_getSiteCode_0090f7797e403f43,
            mid_getValidFrom_aaa854c403487cf3,
            mid_getValidUntil_aaa854c403487cf3,
            mid_getVelocity_17a952530a808943,
            mid_setDomes_e939c6558ae8d313,
            mid_setEccRefSystem_12e1c39738d286bc,
            mid_setEpoch_e82d68cd9f886886,
            mid_setPosition_a94622407b723689,
            mid_setSiteCode_e939c6558ae8d313,
            mid_setValidFrom_e82d68cd9f886886,
            mid_setValidUntil_e82d68cd9f886886,
            mid_setVelocity_a94622407b723689,
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
