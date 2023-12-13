#ifndef org_orekit_forces_maneuvers_propulsion_ThrustDirectionAndAttitudeProvider_H
#define org_orekit_forces_maneuvers_propulsion_ThrustDirectionAndAttitudeProvider_H

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
    namespace attitudes {
      class AttitudeProvider;
      class FieldAttitude;
      class Attitude;
    }
    namespace time {
      class FieldAbsoluteDate;
      class AbsoluteDate;
    }
    namespace utils {
      class PVCoordinatesProvider;
      class FieldPVCoordinatesProvider;
    }
    namespace frames {
      class LOF;
      class Frame;
    }
    namespace forces {
      namespace maneuvers {
        namespace propulsion {
          class ThrustDirectionProvider;
          class ThrustDirectionAndAttitudeProvider;
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
              mid_buildFromCustomAttitude_a3f64f8717c9511d,
              mid_buildFromDirectionInFrame_63447e4da4c98de8,
              mid_buildFromDirectionInLOF_843847f4f0e08985,
              mid_buildFromFixedDirectionInSatelliteFrame_4df7434fe337ce1b,
              mid_getAttitude_21845cfb0034fe1c,
              mid_getAttitude_896ee4d68989b1e8,
              mid_getManeuverAttitudeProvider_331f12bb6017243b,
              mid_getThrusterAxisInSatelliteFrame_8b724f8b4fdad1a2,
              mid_getAttitudeFromFrame_21845cfb0034fe1c,
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
