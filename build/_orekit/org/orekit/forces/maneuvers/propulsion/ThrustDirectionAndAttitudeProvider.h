#ifndef org_orekit_forces_maneuvers_propulsion_ThrustDirectionAndAttitudeProvider_H
#define org_orekit_forces_maneuvers_propulsion_ThrustDirectionAndAttitudeProvider_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace propulsion {
          class ThrustDirectionProvider;
          class ThrustDirectionAndAttitudeProvider;
        }
      }
    }
    namespace frames {
      class Frame;
      class LOF;
    }
    namespace attitudes {
      class AttitudeProvider;
      class Attitude;
      class FieldAttitude;
    }
    namespace time {
      class AbsoluteDate;
      class FieldAbsoluteDate;
    }
    namespace utils {
      class FieldPVCoordinatesProvider;
      class PVCoordinatesProvider;
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
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace propulsion {

          class ThrustDirectionAndAttitudeProvider : public ::java::lang::Object {
           public:
            enum {
              mid_buildFromCustomAttitude_2a509cacd8992176,
              mid_buildFromDirectionInFrame_4a60dc91196dbefd,
              mid_buildFromDirectionInLOF_1bbcb025902b2173,
              mid_buildFromFixedDirectionInSatelliteFrame_68ee83b4aa4b2362,
              mid_getAttitude_5341a8481841f90c,
              mid_getAttitude_455b5c75f9292826,
              mid_getManeuverAttitudeProvider_5cce95036ae870ba,
              mid_getThrusterAxisInSatelliteFrame_17a952530a808943,
              mid_getAttitudeFromFrame_5341a8481841f90c,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ThrustDirectionAndAttitudeProvider(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ThrustDirectionAndAttitudeProvider(const ThrustDirectionAndAttitudeProvider& obj) : ::java::lang::Object(obj) {}

            static ThrustDirectionAndAttitudeProvider buildFromCustomAttitude(const ::org::orekit::attitudes::AttitudeProvider &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &);
            static ThrustDirectionAndAttitudeProvider buildFromDirectionInFrame(const ::org::orekit::frames::Frame &, const ::org::orekit::forces::maneuvers::propulsion::ThrustDirectionProvider &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &);
            static ThrustDirectionAndAttitudeProvider buildFromDirectionInLOF(const ::org::orekit::frames::LOF &, const ::org::orekit::forces::maneuvers::propulsion::ThrustDirectionProvider &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &);
            static ThrustDirectionAndAttitudeProvider buildFromFixedDirectionInSatelliteFrame(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &);
            ::org::orekit::attitudes::Attitude getAttitude(const ::org::orekit::utils::PVCoordinatesProvider &, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::frames::Frame &) const;
            ::org::orekit::attitudes::FieldAttitude getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider &, const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::frames::Frame &) const;
            ::org::orekit::attitudes::AttitudeProvider getManeuverAttitudeProvider() const;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D getThrusterAxisInSatelliteFrame() const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace propulsion {
          extern PyType_Def PY_TYPE_DEF(ThrustDirectionAndAttitudeProvider);
          extern PyTypeObject *PY_TYPE(ThrustDirectionAndAttitudeProvider);

          class t_ThrustDirectionAndAttitudeProvider {
          public:
            PyObject_HEAD
            ThrustDirectionAndAttitudeProvider object;
            static PyObject *wrap_Object(const ThrustDirectionAndAttitudeProvider&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
